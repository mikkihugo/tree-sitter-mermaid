# Test Corpus Documentation

This directory contains tree-sitter test corpus files for the Mermaid grammar. Each file defines test cases that verify the parser correctly parses Mermaid diagram syntax.

## Overview

The test corpus uses tree-sitter's standard format for defining parser tests. Each test case consists of:
1. A descriptive name (between lines of `=`)
2. Input Mermaid code to parse
3. A separator line (`---`)
4. Expected parse tree in S-expression format

## File Organization

Each Mermaid diagram type has its own test file:

| File | Diagram Type | Test Count |
|------|------|----------|
| `flow.txt` | Flowcharts/Graphs | 11 |
| `sequence.txt` | Sequence Diagrams | 11 |
| `class.txt` | Class Diagrams | 9 |
| `state.txt` | State Diagrams | 8 |
| `er.txt` | Entity Relationship | 7 |
| `gantt.txt` | Gantt Charts | 1 |
| `gitgraph.txt` | Git Graphs | 3 |
| `pie.txt` | Pie Charts | 1 |
| `mindmap.txt` | Mind Maps | 4 |
| `journey.txt` | User Journey | 3 |
| `quadrant.txt` | Quadrant Charts | 3 |
| `xychart.txt` | XY Charts | 5 |
| `timeline.txt` | Timelines | 5 |
| `zenuml.txt` | ZenUML | 5 |
| `sankey.txt` | Sankey Diagrams | 3 |
| `block.txt` | Block Diagrams | 3 |
| `packet.txt` | Packet Diagrams | 3 |
| `kanban.txt` | Kanban Boards | 3 |
| `architecture.txt` | Architecture Diagrams | 3 |
| `radar.txt` | Radar Charts | 3 |
| `treemap.txt` | Treemaps | 5 |
| `c4.txt` | C4 Diagrams | 3 |
| `requirement.txt` | Requirement Diagrams | 3 |

**Total: 126 test cases across 23 diagram types (100% coverage)**

## Test Case Format

Each test follows this structure:

```
==========================
Test Case Name
==========================

<Mermaid code to parse>

---

(source_file
  (diagram_type
    ...))
```

### Example Test Case

```
==========================
Simple flowchart
==========================

graph TD
    A[Start] --> B[End]

---

(source_file
  (diagram_flow
    (flowchart_direction_td)
    (flow_stmt_vertice
      (flow_node
        (flow_vertex
          (flow_vertex_id)))
      (flow_link_simplelink
        (flow_link_arrow))
      (flow_node
        (flow_vertex
          (flow_vertex_id))))))
```

### Understanding the Parse Tree

The expected parse tree (S-expression) represents the Abstract Syntax Tree (AST) that the parser should produce. Key elements:

- **Parentheses** `(...)` denote AST nodes
- **Node names** identify the type of construct (e.g., `flow_node`, `diagram_flow`)
- **Nesting** shows parent-child relationships
- **Leaf values** are tokens (unquoted strings or characters)
- **Indentation** is optional but improves readability

Common node types:
- `source_file` - Root node (always present)
- `diagram_*` - Type-specific diagram root (e.g., `diagram_flow`, `diagram_sequence`)
- `*_node` - Elements in the diagram (e.g., `flow_node`, `class_attribute`)
- `*_stmt` - Statements/declarations (e.g., `flow_stmt_vertice`)

## Running Tests

### Run all tests
```bash
make test
```

### Run tests for a specific diagram type
```bash
tree-sitter test --filter "Flowchart"
```

### Run a specific test
```bash
tree-sitter test --filter "Simple flowchart"
```

### Update tests after grammar changes
```bash
tree-sitter test --update
```

This regenerates the expected parse trees based on current parser output.

### Debug a specific test
```bash
tree-sitter test --filter "Test Name" --debug
```

Shows detailed parsing steps and helps identify grammar issues.

## Writing New Tests

Follow these guidelines when adding new test cases:

### 1. Choose a Descriptive Name

Good names describe what the test exercises:
- ✅ "Flowchart with subgraph"
- ✅ "Class with inheritance relationship"
- ❌ "Test 1"
- ❌ "Various syntax"

### 2. Provide Representative Input

Include real Mermaid code that would appear in actual diagrams:

```
==========================
Flowchart with decision
==========================

graph LR
    A[Start] --> B{Decision}
    B -->|Yes| C[Process]
    B -->|No| D[Skip]
```

### 3. Use Valid Syntax

Ensure input is valid Mermaid syntax. Invalid syntax tests should go in error-specific test files (if created).

### 4. Generate Expected Output

After adding a test with input and separator, run:
```bash
tree-sitter test --update
```

This automatically generates the correct parse tree. Then verify the output makes sense.

### 5. Add a Comment (Optional)

For complex tests, add a comment explaining what's being tested:

```
==========================
Complex class with generic types
==========================

%% Tests that generic type parameters are parsed correctly
classDiagram
    class MyClass~T~ {
        field: T
    }
```

## Common Parse Tree Patterns

### Diagram Type Detection

All diagrams start with `source_file` containing a `diagram_*` node:

```
(source_file
  (diagram_flow ...))     % Flowchart
  (diagram_sequence ...)  % Sequence
  (diagram_class ...)     % Class
  (diagram_state ...)     % State
```

### Node/Vertex Patterns

Mermaid elements (nodes, participants, etc.) typically follow this pattern:

```
(flow_node
  (flow_vertex
    (flow_vertex_id)))     % Just an ID

(flow_node
  (flow_vertex
    (flow_vertex_shape
      (flow_text_literal))))  % Shaped node with text
```

### Statement Patterns

Most diagram content is represented as statements:

```
(flow_stmt_vertice ...)           % Vertex/link statement
(sequence_stmt_participant ...)   % Participant declaration
(class_stmt_attribute ...)        % Attribute definition
```

### Multi-line and Complex Content

For diagrams supporting multiline text:

```
==========================
Multiline node text
==========================

graph TD
    A["Line 1
       Line 2"]

---

(source_file
  (diagram_flow
    (flow_node
      (flow_vertex
        (flow_vertex_rectangle_double
          (flow_text_literal))))))
```

## Test Coverage Goals

**Current Status: 126/126 tests passing (100%)**

Coverage by diagram type:
- 10 fully-implemented types: ~32 tests
- 13 partially-implemented types: ~39 tests
- Additional edge cases and issue #13 fixes: ~22 tests

### Adding Tests for New Diagram Types

When a new diagram type is partially implemented:

1. Create a new test file: `test/corpus/diagram-name.txt`
2. Add at least 3 test cases covering:
   - Basic/simple case
   - Moderately complex case
   - Edge case or variation
3. Generate expected output with `tree-sitter test --update`
4. Verify all tests pass with `make test`

## Troubleshooting Failed Tests

### Mismatch Between Expected and Actual

When a test fails, you'll see output like:
```
  1. Simple flowchart:

    (source_file
      (diagram_flow
        (flowchart_direction_td)
        (flow_stmt_vertice
          (flow_node
            (flow_vertex
[31m              (flow_vertex_id
                (MISSING _alpha_num_token)))))
```

Red nodes (with `[31m`) indicate mismatches.

### Solutions

1. **Grammar change**: If you modified grammar.js, regenerate:
   ```bash
   npm run generate
   tree-sitter test --update
   ```

2. **Test error**: If the test case itself is wrong, fix the input and regenerate:
   ```bash
   tree-sitter test --update
   ```

3. **Parser bug**: If the parse tree is incorrect, debug with:
   ```bash
   tree-sitter test --filter "Test Name" --debug-graph
   open log.html
   ```

## Performance Considerations

- Tests run in parallel by default (use `-j1` flag to disable)
- Large test files (>1000 lines) may slow down test execution
- Current test suite completes in <5 seconds on modern hardware

## References

- [Tree-sitter Test Format](https://tree-sitter.github.io/tree-sitter/creating-parsers#tests)
- [Mermaid Syntax Documentation](https://mermaid.js.org/)
- [Parse Tree Concepts](https://tree-sitter.github.io/tree-sitter/using-parsers#tree-traversal)
