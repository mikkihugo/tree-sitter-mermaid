import TreeSitter

public class TreeSitterMermaid {
    public static let language = Language(language: tree_sitter_mermaid())
}

// C function declaration
func tree_sitter_mermaid() -> OpaquePointer!
