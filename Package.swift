// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterMermaid",
    version: "0.25.10",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterMermaid", targets: ["TreeSitterMermaid"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter.git", from: "0.1.0")
    ],
    targets: [
        .target(name: "TreeSitterMermaid",
                dependencies: [.product(name: "SwiftTreeSitter", package: "swift-tree-sitter")],
                path: ".",
                exclude: [
                    "Cargo.toml",
                    "Makefile",
                    "binding.gyp",
                    "bindings/c",
                    "bindings/go",
                    "bindings/node",
                    "bindings/python",
                    "bindings/rust",
                    "prebuilds",
                    "grammar.js",
                    "package.json",
                    "package-lock.json",
                    "pyproject.toml",
                    "setup.py",
                    "test",
                    "examples",
                    ".editorconfig",
                    ".github",
                    ".gitignore",
                    ".gitattributes",
                    ".gitmodules",
                ],
                sources: [
                    "src/parser.c",
                    "src/scanner.c",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")]),
        .testTarget(name: "TreeSitterMermaidTests",
                   dependencies: ["TreeSitterMermaid", .product(name: "SwiftTreeSitter", package: "swift-tree-sitter")],
                   path: "Tests")
    ],
    cLanguageStandard: .c11
)
