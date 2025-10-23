use tree_sitter_mermaid::language;

fn main() {
    let mermaid_code = r#"
graph TD
    A[SelfImprovingAgent] --> B[Metrics Observer]
    A --> C[Evolution Decider]
    B --> E[Performance Metrics]
    C --> F[Improvement Strategy]
"#;

    let language = language();
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(&language).unwrap();
    
    let tree = parser.parse(mermaid_code, None).unwrap();
    println!("Mermaid AST: {:#?}", tree.root_node());
}