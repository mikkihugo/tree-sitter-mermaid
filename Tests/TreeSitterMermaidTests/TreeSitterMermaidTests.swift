import XCTest
import SwiftTreeSitter
@testable import TreeSitterMermaid

final class TreeSitterMermaidTests: XCTestCase {
    func testLanguageLoads() throws {
        let language = Language(language: tree_sitter_mermaid())
        let parser = Parser()
        try parser.setLanguage(language)

        let code = "graph TD\n    A[Start] --> B{Decision}\n    B -->|Yes| C[Action 1]\n    B -->|No| D[Action 2]\n"

        let tree = try XCTUnwrap(parser.parse(code))
        let root = try XCTUnwrap(tree.rootNode)
        XCTAssertEqual(root.nodeType, "source_file")
        XCTAssertGreaterThan(root.childCount, 0)
    }
}
