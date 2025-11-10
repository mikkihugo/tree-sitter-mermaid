import XCTest
@testable import TreeSitterMermaid

final class TreeSitterMermaidTests: XCTestCase {
    func testCanLoadLanguage() throws {
        // Test that we can create the language
        let language = TreeSitterMermaid.language
        XCTAssertNotNil(language, "Language should be loadable")
    }
    
    func testLanguageFunction() throws {
        // Test that the C function returns a valid pointer
        let langPtr = tree_sitter_mermaid()
        XCTAssertNotNil(langPtr, "tree_sitter_mermaid() should return valid pointer")
    }
}