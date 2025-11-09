//! # 🚀 Singularity TreeSitter Mermaid - Mermaid.js grammar for tree-sitter
//!
//! This crate provides Mermaid language support for the [tree-sitter][] parsing library.
//!
//! [Mermaid](https://mermaid.js.org/) is a diagramming and charting tool that uses
//! Markdown-inspired text definitions to create and modify diagrams dynamically.
//! This grammar provides complete parsing support for all 23 Mermaid diagram types with
//! 100% test coverage.
//!
//! ## Features
//!
//! - ✅ **Complete Coverage**: All 23 Mermaid diagram types fully supported
//! - ✅ **100% Test Passing**: 133 comprehensive corpus tests
//! - ✅ **Modern**: Built with tree-sitter 0.25.x and Rust 2021
//! - ✅ **Well Documented**: Comprehensive API documentation and examples
//! - ✅ **Syntax Highlighting**: Includes query files for editor integration
//!
//! ## Quick Start
//!
//! Add this to your `Cargo.toml`:
//!
//! ```toml
//! [dependencies]
//! tree-sitter-mermaid = "0.9"
//! tree-sitter = "~0.25"
//! ```
//!
//! ## Usage
//!
//! Typically, you will use the [language][language func] function to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some Mermaid code:
//!
//! ```rust
//! use tree_sitter::Parser;
//! use tree_sitter_mermaid::language;
//!
//! let mermaid_code = r#"
//! graph TD
//!     A[Start] --> B{Decision}
//!     B -->|Yes| C[Action 1]
//!     B -->|No| D[Action 2]
//! "#;
//!
//! let mut parser = Parser::new();
//! parser.set_language(&language()).expect("Error loading mermaid grammar");
//! let tree = parser.parse(mermaid_code, None).unwrap();
//!
//! // Check for parse errors
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! ## Supported Diagram Types (23/23)
//!
//! ### Core Diagrams
//! - **Flowcharts**: `graph TD`, `graph LR`, `flowchart TB`, etc.
//! - **Sequence Diagrams**: `sequenceDiagram` - Interactions between actors
//! - **Class Diagrams**: `classDiagram` - UML class relationships
//! - **State Diagrams**: `stateDiagram-v2` - State machines
//! - **Entity Relationship**: `erDiagram` - Database schemas
//! - **Gantt Charts**: `gantt` - Project timelines
//!
//! ### Specialized Diagrams
//! - **Pie Charts**: `pie` - Data visualization
//! - **Git Graphs**: `gitGraph` - Git commit history
//! - **User Journey**: `journey` - User experience flows
//! - **Mind Maps**: `mindmap` - Hierarchical thinking
//! - **Timeline**: `timeline` - Event sequences
//! - **Quadrant Chart**: `quadrantChart` - 2D data plotting
//! - **XY Chart**: `xychart-beta` - Line/bar/scatter plots
//! - **Sankey**: `sankey-beta` - Flow diagrams
//! - **Block Diagram**: `block-beta` - Architecture diagrams
//! - **Packet**: `packet-beta` - Network packet structures
//! - **Kanban**: `kanban` - Task boards
//! - **Architecture**: `architecture-beta` - System architecture
//! - **Radar**: `radar-beta` - Multidimensional data
//! - **Treemap**: `treemap` - Hierarchical data
//! - **ZenUML**: `zenuml` - Sequence interactions
//! - **C4 Diagrams**: `C4Context`, `C4Container`, etc. - System architecture
//! - **Requirement Diagrams**: `requirementDiagram` - Requirements modeling
//!
//! ## Advanced Usage
//!
//! ### Accessing Syntax Highlighting Queries
//!
//! ```rust
//! use tree_sitter_mermaid::HIGHLIGHTS_QUERY;
//!
//! // Use the highlights query for syntax highlighting
//! println!("Highlights query: {}", HIGHLIGHTS_QUERY);
//! ```
//!
//! ### Accessing Node Types
//!
//! ```rust
//! use tree_sitter_mermaid::NODE_TYPES;
//!
//! // Get the node types JSON for introspection
//! let node_types: serde_json::Value = serde_json::from_str(NODE_TYPES).unwrap();
//! ```
//!
//! ## Cargo Features
//!
//! - `parser` (default): Includes the Mermaid parser. Disable with `default-features = false`
//!   if you only need the language definition.
//!
//! ## Examples
//!
//! See the [basic_usage example](https://github.com/Singularity/singularity-parser-mermaid/blob/main/examples/basic_usage.rs)
//! for a complete demonstration of parsing different diagram types.
//!
//! ## Links
//!
//! - [GitHub Repository](https://github.com/Singularity/singularity-parser-mermaid)
//! - [Mermaid.js Documentation](https://mermaid.js.org/)
//! - [tree-sitter Documentation](https://tree-sitter.github.io/tree-sitter/)
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

extern "C" {
    fn tree_sitter_mermaid() -> Language;
}

/// Get the tree-sitter [Language][] for this grammar.
///
/// # Example
///
/// ```rust
/// use tree_sitter::Parser;
/// use tree_sitter_mermaid::language;
///
/// let mut parser = Parser::new();
/// parser.set_language(&language()).expect("Error loading mermaid grammar");
/// ```
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_mermaid() }
}

/// The content of the [`node-types.json`][] file for this grammar.
///
/// This JSON describes all the node types in the Mermaid grammar, useful for
/// introspection and tooling.
///
/// # Example
///
/// ```rust
/// use tree_sitter_mermaid::NODE_TYPES;
///
/// // Parse the node types JSON
/// let node_types: serde_json::Value = serde_json::from_str(NODE_TYPES).unwrap();
/// println!("Grammar has {} node types", node_types.as_array().unwrap().len());
/// ```
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &'static str = include_str!("../../src/node-types.json");

/// The syntax highlighting query for Mermaid.
///
/// This query defines how to highlight Mermaid syntax in editors that support
/// tree-sitter highlighting (Neovim, Helix, etc.).
///
/// # Example
///
/// ```rust
/// use tree_sitter_mermaid::HIGHLIGHTS_QUERY;
///
/// // Use with tree-sitter highlighting
/// println!("Highlights query:\n{}", HIGHLIGHTS_QUERY);
/// ```
pub const HIGHLIGHTS_QUERY: &'static str = include_str!("../../queries/highlights.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(super::language())
            .expect("Error loading mermaid language");
    }
}
