/**
 * @file tree-sitter-mermaid.h
 * @brief C bindings for tree-sitter Mermaid grammar
 *
 * This header provides the C API for the tree-sitter Mermaid language parser.
 * It exports the language definition that can be used with the tree-sitter C API
 * to parse Mermaid diagram syntax.
 *
 * # Overview
 *
 * Mermaid is a JavaScript-based diagramming and charting tool that uses
 * markdown-inspired syntax. This library provides a complete tree-sitter grammar
 * for parsing all 23 Mermaid diagram types.
 *
 * # Supported Diagram Types (23)
 *
 * **Fully Implemented (10 types):**
 * - Flowcharts/Graphs (directions: TD, LR, RL, BT)
 * - Sequence Diagrams
 * - Class Diagrams
 * - State Diagrams
 * - Entity Relationship (ER) Diagrams
 * - Gantt Charts
 * - Git Graphs
 * - Pie Charts
 * - Mind Maps
 * - User Journey
 *
 * **Partially Implemented (13 types):**
 * - Quadrant Charts, XY Charts, Timelines, ZenUML, Sankey
 * - Block Diagrams, Packet Diagrams, Kanban, Architecture
 * - Radar Charts, Treemaps, C4 Diagrams, Requirements
 *
 * # Usage Example
 *
 * @code
 * #include <tree_sitter/parser.h>
 * #include <tree_sitter/mermaid.h>
 *
 * int main() {
 *     // Create a new parser
 *     TSParser *parser = ts_parser_new();
 *
 *     // Set the Mermaid language
 *     ts_parser_set_language(parser, tree_sitter_mermaid());
 *
 *     // Parse some Mermaid code
 *     const char *code = "graph TD\n"
 *                        "  A[Start] --> B[End]\n";
 *
 *     TSTree *tree = ts_parser_parse(parser, NULL, code, strlen(code));
 *
 *     // Use the parse tree...
 *     TSNode root = ts_tree_root_node(tree);
 *
 *     // Cleanup
 *     ts_tree_delete(tree);
 *     ts_parser_delete(parser);
 *
 *     return 0;
 * }
 * @endcode
 *
 * # Compilation
 *
 * When building against this header, ensure you:
 * 1. Include the tree-sitter C API headers
 * 2. Link against the tree-sitter library
 * 3. Link against the tree-sitter-mermaid native library
 *
 * Example GCC command:
 * @code
 * gcc -I/path/to/tree-sitter/include \
 *     -L/path/to/tree-sitter/lib \
 *     -L/path/to/tree-sitter-mermaid/lib \
 *     program.c -ltree-sitter -ltree-sitter-mermaid -o program
 * @endcode
 *
 * # Language Features
 *
 * - **Case-insensitive keywords**: Keywords like `graph`, `Graph`, `GRAPH` are all valid
 * - **Comments**: Inline comments with `%% comment` syntax
 * - **Multiline strings**: Quoted text can span multiple lines in node definitions
 * - **Nested structures**: Support for subgraphs and nested definitions
 * - **Unicode support**: Full UTF-8 character support
 * - **Context-aware parsing**: External scanner for correct class diagram tokenization
 *
 * # Parse Tree Structure
 *
 * The resulting parse tree follows the grammar defined in grammar.js. Each
 * diagram type produces a tree with these characteristics:
 *
 * - Root node: `source_file` (always)
 * - Children: Diagram nodes like `diagram_flow`, `diagram_sequence`, etc.
 * - Leaf nodes: Named tokens representing syntax elements
 *
 * Use ts_node_child_count() and ts_node_child() to traverse the tree.
 *
 * # Error Handling
 *
 * The parser is resilient to input errors. If the input is not valid Mermaid
 * syntax, the parser will:
 * 1. Skip the problematic tokens
 * 2. Attempt to recover and continue parsing
 * 3. Generate ERROR nodes in the parse tree for unparseable segments
 *
 * Check for ERROR nodes to detect parsing problems:
 * @code
 * if (strcmp(ts_node_type(node), "ERROR") == 0) {
 *     // Handle parsing error
 * }
 * @endcode
 *
 * # Thread Safety
 *
 * Each TSParser instance maintains its own state and can be used from a single
 * thread. Do not share parser instances across threads. The language object
 * returned by tree_sitter_mermaid() is immutable and thread-safe.
 *
 * # References
 *
 * - Tree-sitter C API: https://tree-sitter.github.io/tree-sitter/using-parsers
 * - Mermaid syntax: https://mermaid.js.org/
 * - Project repository: https://github.com/mikkihugo/tree-sitter-mermaid
 */

#ifndef TREE_SITTER_MERMAID_H_
#define TREE_SITTER_MERMAID_H_

/** Opaque type for tree-sitter language definitions */
typedef struct TSLanguage TSLanguage;

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Get the tree-sitter language object for Mermaid diagrams
 *
 * Returns a pointer to the tree-sitter language definition for parsing
 * Mermaid diagram syntax. This language object should be passed to
 * ts_parser_set_language() before parsing any Mermaid code.
 *
 * The returned pointer is valid for the lifetime of the program and should
 * not be freed or modified.
 *
 * @return Pointer to the tree-sitter TSLanguage object for Mermaid
 *
 * @note This function is thread-safe. The returned language object is
 *       immutable and can be safely shared across threads.
 *
 * @example
 * @code
 * TSParser *parser = ts_parser_new();
 * ts_parser_set_language(parser, tree_sitter_mermaid());
 * @endcode
 */
const TSLanguage *tree_sitter_mermaid(void);

#ifdef __cplusplus
}
#endif

#endif // TREE_SITTER_MERMAID_H_
