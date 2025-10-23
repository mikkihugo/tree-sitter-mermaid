# Tree-Sitter Mermaid Architecture Documentation

This document explains the internal architecture of the tree-sitter Mermaid grammar, including how the parser works, how different diagram types are handled, and how the codebase is organized.

## Overview

Tree-sitter Mermaid is a complete parser for the Mermaid diagram syntax, supporting 23 different diagram types. It consists of:

1. **Grammar** (`grammar.js`) - Tree-sitter DSL defining the syntax rules
2. **Parser** (`src/parser.c`) - Auto-generated C code that implements the parser
3. **Scanner** (`src/scanner.c`) - External scanner for context-aware tokenization
4. **Bindings** (`bindings/`) - Language-specific API wrappers (Python, Go, Node.js, Rust, Swift, C)
5. **Tests** (`test/corpus/`) - 126 test cases validating all diagram types

## Grammar Structure

The grammar is defined in `grammar.js` using tree-sitter's DSL. It consists of:

### 1. Token Definitions (Lines 3-193)

Tokens are regular expressions and keywords that define the lexical elements of Mermaid syntax.

#### Token Organization by Type

```javascript
// Common tokens (whitespace, comments, directives)
_whitespace: /[ \t]+/
_newline: /(\n)+/
comment: /%%([^\{].*)?\n/

// Flowchart-specific tokens
direction_tb: kwd("direction tb")
flow_vertex_square: /\[/

// Class diagram tokens
_class_name: /[a-zA-Z0-9_]+/
class_reltype_extension: choice("<|", "|>")

// And so on for each diagram type...
```

#### Token Naming Convention

- **Prefixed with `_`**: Hidden tokens that don't appear in the parse tree
  - Used for intermediate parsing (whitespace, keywords)
  - Example: `_whitespace`, `_flow_stmt`

- **No prefix**: Visible tokens that appear in the parse tree
  - Used for semantic content
  - Example: `comment`, `flow_vertex_square`

#### Special Tokens

- **Keywords**: Created with `kwd()` helper
  - Case-insensitive matching
  - Automatically aliased to canonical form
  - Example: `kwd("direction tb")` matches "direction tb", "Direction TB", etc.

- **Reserved tokens**: Created with `reserved()`
  - Higher precedence than other patterns
  - Used to prevent keyword conflicts

### 2. Grammar Rules (Lines 238-1289)

Grammar rules define how tokens combine to form valid syntax.

#### Rule Organization by Diagram Type

```javascript
// Document structure
document: $ => choice(
  $.diagram_flow,
  $.diagram_sequence,
  $.diagram_class,
  // ... all 23 diagram types
)

// Type-specific rules
diagram_flow: $ => seq(
  kwd("graph"),
  choice(...),  // directions: TD, LR, etc.
  repeat($._flow_stmt)
)

flow_stmt_vertice: $ => sep(
  $.flow_node,
  $._flow_link
)

flow_node: $ => seq(
  $.flow_vertex,
  optional(...)  // additional attributes
)

flow_vertex: $ => choice(
  $.flow_vertex_square,
  $.flow_vertex_circle,
  // ... 15 different vertex shapes
)
```

#### Rule Naming Convention

- **`diagram_*`**: Root rule for a diagram type
  - Example: `diagram_flow`, `diagram_sequence`, `diagram_class`
  - Always contains the diagram keyword and body

- **`*_stmt`**: Statement or declaration
  - Example: `flow_stmt_vertice`, `class_stmt_attribute`
  - Represents a logical unit of content

- **`*_node`**: A node/element in the diagram
  - Example: `flow_node`, `class_attribute`
  - Basic building blocks

- **`*_vertex`**: A vertex with shape information
  - Example: `flow_vertex_square`, `flow_vertex_circle`
  - Flowchart-specific concept

### 3. Helper Functions (Lines 1338-1425)

Helper functions reduce code duplication and improve readability.

#### `kwd(word)`
```javascript
/**
 * Creates a case-insensitive keyword token
 *
 * Example: kwd("graph") matches "graph", "Graph", "GRAPH"
 */
function kwd(word) {
    return alias(reserved(caseInsensitive(word)), word)
}
```

How it works:
1. `caseInsensitive(word)` - Converts "graph" to regex "[Gg][Rr][Aa][Pp][Hh]"
2. `reserved(...)` - Wraps with high precedence to prioritize keywords
3. `alias(...)` - Maps all variations to a single canonical node name

#### `sep(rule, delimiter)`
```javascript
/**
 * Matches: rule (delimiter rule)*
 *
 * Example: sep($.stmt, choice("\n", ";"))
 * Matches: stmt \n stmt ; stmt
 */
function sep(rule, delimiter) {
  return seq(rule, repeat(seq(delimiter, rule)));
}
```

Used extensively for comma-separated lists, newline-separated statements, etc.

#### `optseq(...args)`
```javascript
/**
 * Creates an optional sequence of rules
 *
 * Shorthand for: optional(seq(...args))
 */
function optseq(...args) {
    return optional(seq(...args))
}
```

Improves readability when multiple optional elements are grouped.

## Parser Architecture

The parser is auto-generated from `grammar.js` by tree-sitter using:
```bash
npm run generate
```

This produces:
- **`src/parser.c`** - The actual parser implementation (38,000+ lines)
- **`src/node-types.json`** - Metadata about all node types
- **`src/grammar.json`** - JSON representation of the grammar

### Parser State Machine

The generated parser implements an LR parser with these characteristics:

- **States**: 1,169 states representing parser positions
- **Actions**: Shift, reduce, accept, or error recovery
- **Lookahead**: 1-token lookahead to determine next action
- **Precedence**: Handled through token registration order

### Parse Tree Output

For input like:
```
graph TD
  A[Start] --> B[End]
```

The parser produces a tree like:
```
source_file
└── diagram_flow
    ├── flowchart_direction_td
    └── flow_stmt_vertice
        ├── flow_node (A)
        │   └── flow_vertex_square
        ├── flow_link_simplelink
        └── flow_node (B)
            └── flow_vertex_square
```

## External Scanner

The external scanner (`src/scanner.c`) handles special tokens that require context-aware lexing.

### Problem: The 'o' Token Ambiguity

In class diagrams, 'o' denotes aggregation:
```
Class1 o-- "has" --> Class2
```

But 'o' is also a common letter in English text:
```
class Navigator {
    go()  // 'o' is part of word
}
```

### Solution: Context-Aware Scanning

The scanner only recognizes 'o' as `CLASS_AGGREGATION` when:
1. Preceded by valid relationship context (parser state valid_symbols[CLASS_AGGREGATION])
2. Followed by class relationship syntax: `-`, `.`, `|`, whitespace, or EOF

Algorithm:
```c
bool tree_sitter_mermaid_external_scanner_scan(...) {
    if (valid_symbols[CLASS_AGGREGATION]) {
        skip_whitespace();
        if (lookahead == 'o') {
            advance();
            int32_t next = lookahead;
            if (next == '-' || next == '.' || next == '|' ||
                isspace(next) || next == EOF) {
                lexer->mark_end();
                lexer->result_symbol = CLASS_AGGREGATION;
                return true;
            }
        }
    }
    return false;
}
```

### Why External Scanning?

1. **Regular expressions can't express this**: Need to look at multiple characters in sequence
2. **Tree-sitter integration**: External scanners integrate seamlessly with the generated parser
3. **Performance**: Only invoked when needed, not on every token

## Diagram Type Coverage

### Fully Implemented (10 Types)

These diagram types have comprehensive grammar rules covering all documented syntax:

1. **Flowchart** (`diagram_flow`)
   - Directions: TB, BT, LR, RL
   - 15 vertex/node shapes
   - Links with arrow types
   - Subgraphs with nesting
   - Style and class definitions

2. **Sequence Diagram** (`diagram_sequence`)
   - Participants and actors
   - Message types (solid, dotted, solid arrow, etc.)
   - Activation boxes
   - Notes (left, right, over)
   - Loops, alt, par blocks

3. **Class Diagram** (`diagram_class`)
   - Class definitions with members
   - Visibility modifiers (public, private, protected)
   - Methods with parameters and return types
   - Relationship types (inheritance, composition, aggregation)
   - Notes and comments

4. **State Diagram** (`diagram_state`)
   - Simple and composite states
   - Transitions with conditions
   - Joins and choices
   - Notes

5. **ER Diagram** (`diagram_er`)
   - Entities with attributes
   - Attribute types
   - Relationships with cardinality
   - Identifying/non-identifying relationships

6. **Gantt Chart** (`diagram_gantt`)
   - Tasks with dates
   - Task dependencies
   - Milestones
   - Sections

7. **Git Graph** (`diagram_gitgraph`)
   - Commits with messages
   - Branches
   - Tags
   - Cherry-picks
   - Merges

8. **Pie Chart** (`diagram_pie`)
   - Title
   - Data values

9. **Mind Map** (`diagram_mindmap`)
   - Root node
   - Hierarchical items
   - Markdown syntax support

10. **User Journey** (`diagram_journey`)
    - Title and actors
    - Tasks with scores
    - Sections

### Partially Implemented (13 Types)

These diagram types have skeleton grammar that parses the diagram keyword and structure, but don't fully parse internal syntax:

- Quadrant Chart, XY Chart, Timeline, ZenUML, Sankey
- Block Diagram, Packet Diagram, Kanban, Architecture
- Radar Chart, Treemap, C4 Diagrams, Requirement Diagram

Each uses a catch-all rule for internal content:
```javascript
diagram_quadrant_chart: $ => seq(
    kwd("quadrantChart"),
    repeat($._newline),
    repeat($.quadrant_chart_data)  // catch-all
),

quadrant_chart_data: $ => /[^\n;]+/  // matches any non-newline content
```

This allows:
- ✅ Correct diagram type detection
- ✅ Extraction of raw content
- ✅ Structure preservation
- ❌ Full syntax validation
- ❌ Detailed semantic analysis

Full implementation would require detailed grammar rules similar to flowcharts.

## Data Flow in the Parser

```
┌─────────────────────────────────┐
│ Input: Mermaid diagram code     │
└────────────┬────────────────────┘
             │
             ▼
┌─────────────────────────────────┐
│ Lexer (token recognition)       │
│ - Matches token regexes         │
│ - Calls external scanner if     │
│   context-sensitive token       │
└────────────┬────────────────────┘
             │
             ▼
┌─────────────────────────────────┐
│ Parser State Machine            │
│ - Reads tokens one at a time    │
│ - Consults parsing tables       │
│ - Performs shift/reduce actions │
│ - Recovers from errors          │
└────────────┬────────────────────┘
             │
             ▼
┌─────────────────────────────────┐
│ Output: Concrete Syntax Tree    │
│ - source_file (root)            │
│ - diagram_* (type-specific)     │
│ - Various nodes and tokens      │
└─────────────────────────────────┘
             │
             ▼
┌─────────────────────────────────┐
│ Language Bindings               │
│ - Python / Go / Node.js etc.    │
│ - Wrap tree-sitter API          │
│ - Provide language-specific API │
└─────────────────────────────────┘
```

## File Organization

```
tree-sitter-mermaid/
├── grammar.js                    # Grammar definition (DSL)
├── src/
│   ├── parser.c                  # Auto-generated parser
│   ├── scanner.c                 # External scanner (manually written)
│   ├── node-types.json           # Node type metadata
│   └── grammar.json              # Grammar representation
├── bindings/                     # Language-specific bindings
│   ├── node/index.js             # Node.js (JavaScript)
│   ├── python/                   # Python
│   ├── go/binding.go             # Go
│   ├── rust/lib.rs               # Rust
│   ├── swift/TreeSitterMermaid   # Swift
│   └── c/tree-sitter-mermaid.h   # C header
├── test/
│   └── corpus/                   # 126 test cases
│       ├── flow.txt              # Flowchart tests (11)
│       ├── sequence.txt          # Sequence tests (11)
│       └── ...23 diagram types
├── CLAUDE.md                     # Claude AI assistant guide
├── ARCHITECTURE.md               # This file
└── README.md                     # User documentation
```

## Performance Considerations

### Parsing Speed

- **Time complexity**: O(n) where n is input length
- **Space complexity**: O(n) for the parse tree
- **Typical performance**:
  - Small diagrams (<1KB): <1ms
  - Medium diagrams (10KB): <10ms
  - Large diagrams (100KB): <100ms

### Memory Usage

- **Parser state machine**: ~1MB (fixed)
- **Parse tree**: ~5-10 bytes per character of input
- **Example**: 1KB diagram ≈ 5-10KB parse tree

### Optimization Techniques

1. **Incremental parsing**: Parser can reuse previous results
   - Not implemented yet but possible with tree-sitter
   - Would enable sub-linear reparsing for edits

2. **Lazy evaluation**: Only nodes accessed are materialized
   - Handled by tree-sitter automatically

3. **Error recovery**: Parser continues after errors
   - Produces ERROR nodes for unparseable sections
   - Allows editor real-time feedback

## Extending the Grammar

### Adding a New Diagram Type

1. **Define tokens** (`grammar.js` lines 3-193)
   ```javascript
   _mydiagram_keyword: kwd("mydiagram"),
   _mydiagram_content: /[^\n;]+/,
   ```

2. **Add grammar rule** (`grammar.js` rules section)
   ```javascript
   diagram_mydiagram: $ => seq(
       kwd("mydiagram"),
       repeat($._newline),
       repeat($.mydiagram_stmt)
   ),

   mydiagram_stmt: $ => /[^\n;]+/,
   ```

3. **Update document rule** to include new type
   ```javascript
   document: $ => choice(
       // ... existing types
       $.diagram_mydiagram,  // ADD THIS
   )
   ```

4. **Generate parser**
   ```bash
   npm run generate
   ```

5. **Add test cases** (`test/corpus/mydiagram.txt`)
   ```
   ==========================
   Simple mydiagram
   ==========================

   mydiagram
       content here

   ---

   (source_file
     (diagram_mydiagram ...))
   ```

6. **Run tests**
   ```bash
   make test
   ```

### Adding a New Diagram Feature

For an existing diagram type, add grammar rules:

```javascript
flow_stmt_style: $ => seq(
    kwd("style"),
    $.flow_node_id,
    $.style_definition
),

style_definition: $ => /[^;]+/,
```

Then regenerate and test.

## Known Limitations

### Journey Diagram

- **Status**: Parses but has token conflicts
- **Issue**: Multiple ways to define transitions
- **Solution**: Would require more specific tokenization

### Partially Implemented Types

These use catch-all regexes for content:
```javascript
quadrant_chart_data: $ => /[^\n;]+/
```

- **Limitation**: Can't validate internal syntax
- **Advantage**: Handles variations and future syntax changes
- **Path to fix**: Define detailed grammar rules per diagram type

### Large Files

- No known hard limit, but very large files (>10MB) may cause:
  - Memory pressure
  - Slower parsing
  - Potential timeout on some systems

## Testing Strategy

### Test Coverage

- **126 test cases** across 23 diagram types
- **100% pass rate** (as of latest version)
- **Test types**:
  - Basic functionality (1 per type minimum)
  - Complex scenarios (2-3 per major type)
  - Edge cases and issue fixes

### Test Execution

```bash
make test              # Run all tests
tree-sitter test --filter "Flowchart"  # Filter by name
tree-sitter test --update  # Regenerate expected output
tree-sitter test --debug-graph  # Visualize parse process
```

### Continuous Integration

GitHub Actions workflow (`.github/workflows/ci.yml`):
1. Test on Linux (Ubuntu) and macOS
2. Run with Node.js 18+
3. Check spec compliance (`make check-spec`)
4. Build all language bindings

## References

### Documentation

- [Mermaid Syntax](https://mermaid.js.org/)
- [Tree-sitter Documentation](https://tree-sitter.github.io/tree-sitter/)
- [LR Parsing](https://en.wikipedia.org/wiki/LR_parser)
- [Context-Free Grammars](https://en.wikipedia.org/wiki/Context-free_grammar)

### Source Code

- `grammar.js` - Grammar definition (comprehensive comments)
- `src/scanner.c` - External scanner (well-documented)
- `test/corpus/README.md` - Test format and conventions

### Project Files

- `CLAUDE.md` - AI assistant guidelines
- `README.md` - User documentation
- `IMPLEMENTATION_STATUS.md` - Detailed feature matrix (if present)
