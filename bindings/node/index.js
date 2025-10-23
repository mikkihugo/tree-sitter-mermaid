/**
 * Tree-sitter Node.js bindings for the Mermaid diagram language
 *
 * This module exports the native tree-sitter language binding for parsing
 * Mermaid diagrams in Node.js applications.
 *
 * USAGE:
 *   const Parser = require('tree-sitter');
 *   const Mermaid = require('tree-sitter-mermaid');
 *
 *   const parser = new Parser();
 *   parser.setLanguage(Mermaid);
 *
 *   const code = `graph TD
 *     A[Start] --> B[End]`;
 *   const tree = parser.parse(code);
 *
 * EXPORTS:
 *   - Mermaid (Language): The tree-sitter language object for Mermaid syntax.
 *     Use this with parser.setLanguage() to parse Mermaid diagrams.
 *
 *   - Mermaid.nodeTypeInfo (Object, optional): Static node type definitions
 *     from src/node-types.json, if available. Describes all possible node types
 *     in the generated parse tree (for introspection/tooling).
 *
 * SUPPORTED DIAGRAMS (23 types):
 *   Flowcharts, Sequence, Class, State, ER, Gantt, Git Graph, Pie, Mind Map,
 *   User Journey, Quadrant Chart, XY Chart, Timeline, ZenUML, Sankey, Block,
 *   Packet, Kanban, Architecture, Radar, Treemap, C4, Requirement
 *
 * DOCUMENTATION:
 *   - Mermaid: https://mermaid.js.org/
 *   - Tree-sitter: https://tree-sitter.github.io/tree-sitter/
 */

const root = require("path").join(__dirname, "..", "..");

/**
 * Load the native tree-sitter binding
 *
 * node-gyp-build handles loading the pre-compiled binary module or compiling
 * it on first use. The module exports the Language object for tree-sitter.
 */
module.exports = require("node-gyp-build")(root);

/**
 * Optionally load node type information
 *
 * This JSON file contains metadata about all node types in the parse tree,
 * useful for introspection, IDE support, and tooling. Wrapped in try/catch
 * because it may not be available in all distribution formats.
 *
 * Structure: { "types": [ { "type": "flow_node", "named": true, ... }, ... ] }
 */
try {
  module.exports.nodeTypeInfo = require("../../src/node-types.json");
} catch (_) {
  // nodeTypeInfo not available - this is expected in some distributions
  // The Language binding itself is still functional for parsing
}
