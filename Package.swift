// swift-tools-version:5.3
//
// Package.swift - Swift Package Manager configuration for Singularity TreeSitterMermaid
//
// This file defines the Swift package for Singularity tree-sitter-mermaid, which provides
// Swift bindings for parsing Mermaid diagram syntax using tree-sitter.
//
// PACKAGE STRUCTURE:
// - Library: TreeSitterMermaid (main library target)
// - Tests: TreeSitterMermaidTests
// - Platform support: macOS 10.13+, iOS 11+
//
// DEPENDENCIES:
// - SwiftTreeSitter: Official Swift bindings for tree-sitter
//
// BUILD PROCESS:
// The package compiles the C parser (src/parser.c) and external scanner
// (src/scanner.c) as part of the Swift module. The parser is auto-generated
// from grammar.js by tree-sitter.
//
// USAGE:
// Add to your Package.swift dependencies:
//   .package(url: "https://github.com/Singularity-ng/singularity-parser-mermaid.git", from: "0.9.1")
//
// Then import in your Swift code:
//   import TreeSitterMermaid
//   parser.setLanguage(TreeSitterMermaid.language)
//
// RESOURCES:
// The package includes tree-sitter query files (queries/*.scm) for syntax
// highlighting and other editor integration features.

import PackageDescription

let package = Package(
    // Package name (version is determined by git tags)
    name: "SingularityTreeSitterMermaid",

    // Minimum supported platforms
    platforms: [.macOS(.v10_13), .iOS(.v11)],

    // Library products exported by this package
    products: [
        .library(name: "TreeSitterMermaid", targets: ["TreeSitterMermaid"]),
    ],

    // External dependencies
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter.git", from: "0.1.0")
    ],

    targets: [
        .target(name: "TreeSitterMermaid",
                dependencies: [.product(name: "SwiftTreeSitter", package: "swift-tree-sitter")],
                path: ".",
                // Exclude non-Swift binding files from the package
                // Exclude non-Swift binding files and build configuration
                exclude: [
                    "Cargo.toml",        // Rust build config
                    "Makefile",          // C library build
                    "binding.gyp",       // Node.js build config
                    "bindings/c",        // C bindings (not needed for Swift)
                    "bindings/go",       // Go bindings
                    "bindings/node",     // Node.js bindings
                    "bindings/python",   // Python bindings
                    "bindings/rust",     // Rust bindings
                    "prebuilds",         // Pre-built Node.js binaries
                    "grammar.js",        // Tree-sitter grammar definition
                    "package.json",      // Node.js package config
                    "package-lock.json", // Node.js lock file
                    "pyproject.toml",    // Python package config
                    "setup.py",          // Python build script
                    "test",              // Tree-sitter corpus tests
                    "examples",          // Rust examples
                    ".editorconfig",     // Editor config
                    ".github",           // GitHub workflows
                    ".gitignore",        // Git ignore file
                    ".gitattributes",    // Git attributes
                    ".gitmodules",       // Git submodules
                ],

                // Swift and C source files
                sources: [
                    "bindings/swift/TreeSitterMermaid/TreeSitterMermaid.swift",  // Swift bindings
                    "src/parser.c",      // Auto-generated parser from grammar.js
                    "src/scanner.c",     // External scanner for class diagram 'o' token
                ],

                // Include tree-sitter query files for syntax highlighting
                resources: [
                    .copy("queries")
                ],

                // Public C headers accessible from Swift
                publicHeadersPath: "bindings/swift",

                // C compiler settings
                cSettings: [.headerSearchPath("src")]),

        // Test target for the Swift package
        .testTarget(name: "TreeSitterMermaidTests",
                   dependencies: ["TreeSitterMermaid", .product(name: "SwiftTreeSitter", package: "swift-tree-sitter")],
                   path: "Tests")
    ],

    // Require C11 standard for parser compilation
    cLanguageStandard: .c11
)
