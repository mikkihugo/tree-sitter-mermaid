use tree_sitter_mermaid::language;

fn main() {
    // Test different Mermaid diagram types
    let diagrams = vec![
        // Flowchart
        r#"
graph TD
    A[Start] --> B{Decision}
    B -->|Yes| C[Action 1]
    B -->|No| D[Action 2]
    C --> E[End]
    D --> E
"#,
        // Sequence Diagram
        r#"
sequenceDiagram
    participant A as Alice
    participant B as Bob
    A->>B: Hello Bob, how are you?
    B-->>A: Great!
    A-)B: See you later!
"#,
        // Class Diagram
        r#"
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
"#,
    ];

    let language = language();
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(&language).unwrap();

    for (i, diagram) in diagrams.iter().enumerate() {
        println!("Testing diagram {}: {}", i + 1, diagram.lines().next().unwrap_or("").trim());
        
        let tree = parser.parse(diagram, None).unwrap();
        let root = tree.root_node();
        
        println!("  Root node: {}", root.kind());
        println!("  Child count: {}", root.child_count());
        println!("  Text length: {} characters", root.end_byte() - root.start_byte());
        println!();
    }
}