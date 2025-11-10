//! Basic usage example for tree-sitter-mermaid Rust bindings
//!
//! This example demonstrates how to use the tree-sitter-mermaid library to parse
//! various Mermaid diagram types in Rust. It shows the basic workflow of:
//!
//! 1. Creating a parser
//! 2. Setting the Mermaid language
//! 3. Parsing Mermaid diagram code
//! 4. Inspecting the resulting parse tree
//!
//! # Running this example
//!
//! ```bash
//! cargo run --example basic_usage
//! ```
//!
//! # Expected output
//!
//! The program will parse three different diagram types (flowchart, sequence, class)
//! and print information about the resulting parse trees, including:
//! - Root node type
//! - Number of child nodes
//! - Total text length
//!
//! # Supported diagram types
//!
//! This example tests 3 common diagram types, but tree-sitter-mermaid supports
//! all 23 Mermaid diagram types. See the README for a complete list.

use tree_sitter_mermaid::language;

fn main() {
    // Sample Mermaid diagrams demonstrating different diagram types
    // Each string contains valid Mermaid syntax that will be parsed
    let diagrams = [
        // Flowchart example
        // Demonstrates: nodes, edges, decision blocks, and labels
        r"
graph TD
    A[Start] --> B{Decision}
    B -->|Yes| C[Action 1]
    B -->|No| D[Action 2]
    C --> E[End]
    D --> E
",
        // Sequence diagram example
        // Demonstrates: participants, messages, and arrow types
        r"
sequenceDiagram
    participant A as Alice
    participant B as Bob
    A->>B: Hello Bob, how are you?
    B-->>A: Great!
    A-)B: See you later!
",
        // Class diagram example
        // Demonstrates: classes, attributes, methods, and inheritance
        r"
classDiagram
    class Animal {
        +String name
        +int age
        +makeSound()
    }
    class Dog {
        +String breed
        +bark()
    }
    Animal <|-- Dog
",
    ];

    // Get the Mermaid language definition
    let language = language();

    // Create a new tree-sitter parser
    let mut parser = tree_sitter::Parser::new();

    // Configure the parser to use the Mermaid grammar
    // This must be done before parsing any code
    parser.set_language(&language).expect("Error loading Mermaid language");

    // Parse each diagram and inspect the results
    for (i, diagram) in diagrams.iter().enumerate() {
        // Extract the first line to show which diagram type is being tested
        let diagram_type = diagram.lines().next().unwrap_or("").trim();
        println!("Testing diagram {}: {}", i + 1, diagram_type);

        // Parse the diagram code
        // The None parameter means we're not doing incremental parsing
        let tree = parser.parse(diagram, None).expect("Error parsing diagram");

        // Get the root node of the parse tree
        // All Mermaid diagrams have a 'source_file' root node
        let root = tree.root_node();

        // Print information about the parse tree
        println!("  Root node: {}", root.kind());
        println!("  Child count: {}", root.child_count());
        println!("  Text length: {} characters", root.end_byte() - root.start_byte());

        // Check for parse errors
        // If the diagram has syntax errors, the tree will contain ERROR nodes
        if root.has_error() {
            println!("  ⚠️  Warning: Parse tree contains errors");
        } else {
            println!("  ✅ Parsed successfully");
        }

        println!();
    }

    println!("Example completed successfully!");
    println!("\nNext steps:");
    println!("- Try parsing your own Mermaid diagrams");
    println!("- Use tree-sitter queries to extract specific nodes");
    println!("- Build syntax highlighting or linting tools");
    println!("\nDocumentation:");
    println!("- Mermaid syntax: https://mermaid.js.org/");
    println!("- Tree-sitter docs: https://tree-sitter.github.io/tree-sitter/");
}