//! This crate provides Mermaid language support for the [tree-sitter][] parsing library.
//!
//! Mermaid is a diagramming and charting tool that uses Markdown-inspired text definitions
//! to create and modify diagrams dynamically. This grammar supports parsing various Mermaid
//! diagram types including flowcharts, sequence diagrams, class diagrams, state diagrams,
//! Gantt charts, and more.
//!
//! ## Usage
//!
//! Typically, you will use the [language][language func] function to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some Mermaid code:
//!
//! ```rust
//! use tree_sitter_mermaid::language;
//!
//! let mermaid_code = r#"
//! graph TD
//!     A[Start] --> B{Decision}
//!     B -->|Yes| C[Action 1]
//!     B -->|No| D[Action 2]
//! "#;
//!
//! let mut parser = tree_sitter::Parser::new();
//! parser.set_language(&language()).expect("Error loading mermaid grammar");
//! let tree = parser.parse(mermaid_code, None).unwrap();
//! ```
//!
//! ## Supported Diagram Types
//!
//! - **Flowcharts**: `graph TD`, `graph LR`, etc.
//! - **Sequence Diagrams**: `sequenceDiagram`
//! - **Class Diagrams**: `classDiagram`
//! - **State Diagrams**: `stateDiagram-v2`
//! - **Gantt Charts**: `gantt`
//! - **Pie Charts**: `pie`
//! - **Git Graphs**: `gitGraph`
//! - **User Journey**: `journey`
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
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_mermaid() }
}

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &'static str = include_str!("../../src/node-types.json");

// Uncomment these to include any queries that this grammar contains

pub const HIGHLIGHTS_QUERY: &'static str = include_str!("../../queries/highlights.scm");
// pub const INJECTIONS_QUERY: &'static str = include_str!("../../queries/injections.scm");
// pub const LOCALS_QUERY: &'static str = include_str!("../../queries/locals.scm");
// pub const TAGS_QUERY: &'static str = include_str!("../../queries/tags.scm");

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
