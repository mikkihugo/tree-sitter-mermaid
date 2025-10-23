import TreeSitterMermaid

// Simple test to verify the Swift binding works
print("Testing TreeSitterMermaid Swift binding...")

// Test that we can get the language
let language = TreeSitterMermaid.language
print("✅ Language created: \(language)")

// Test parsing a simple diagram
let parser = Parser()
try parser.setLanguage(TreeSitterMermaid.language)

let mermaidCode = """
graph TD
    A[Start] --> B{Decision}
    B -->|Yes| C[Action 1]
    B -->|No| D[Action 2]
"""

let tree = parser.parse(mermaidCode, nil, nil)
if let tree = tree {
    let rootNode = tree.rootNode
    print("✅ Parsed diagram successfully!")
    print("   Root node: \(rootNode.kind)")
    print("   Child count: \(rootNode.childCount)")
    print("   Text length: \(rootNode.endByte - rootNode.startByte) bytes")
} else {
    print("❌ Failed to parse diagram")
}

print("✅ Swift binding test completed!")