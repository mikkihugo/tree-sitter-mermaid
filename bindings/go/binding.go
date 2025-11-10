// Package tree_sitter_mermaid provides Go bindings for parsing Mermaid diagrams
// using the tree-sitter parsing library.
//
// Mermaid is a JavaScript-based diagramming and charting tool that uses a
// simple, markdown-inspired syntax to create and modify diagrams dynamically.
// This package enables parsing of all 23 supported Mermaid diagram types.
//
// SUPPORTED DIAGRAMS (23 TYPES):
//
// Fully implemented with comprehensive parsing:
//   - Flowcharts/Graphs (graph, flowchart TD/LR/RL/BT)
//   - Sequence Diagrams
//   - Class Diagrams
//   - State Diagrams
//   - Entity Relationship (ER) Diagrams
//   - Gantt Charts
//   - Git Graphs
//   - Pie Charts
//   - Mind Maps
//   - User Journey
//
// Partially implemented (skeleton parsing with full structure):
//   - Quadrant Charts, XY Charts, Timelines, ZenUML, Sankey
//   - Block Diagrams, Packet Diagrams, Kanban, Architecture
//   - Radar Charts, Treemaps, C4 Diagrams, Requirement Diagrams
//
// USAGE EXAMPLE:
//
//	package main
//
//	import (
//		"fmt"
//		sitter "github.com/tree-sitter/go-tree-sitter"
//		mermaid "github.com/Singularity/singularity-parser-mermaid/bindings/go"
//	)
//
//	func main() {
//		// Create a new parser
//		parser := sitter.NewParser()
//		defer parser.Close()
//
//		// Set the Mermaid language
//		parser.SetLanguage(sitter.NewLanguage(mermaid.Language()))
//
//		// Parse a Mermaid diagram
//		code := []byte(`
//			graph TD
//			    A[Start] --> B{Decision}
//			    B -->|Yes| C[Process]
//			    B -->|No| D[Skip]
//		`)
//
//		tree := parser.Parse(nil, code)
//		defer tree.Close()
//
//		// Walk the parse tree
//		root := tree.RootNode()
//		fmt.Println(root)
//	}
//
// LANGUAGE FEATURES:
//
// - Case-insensitive keywords (graph, GRAPH, Graph all valid)
// - Support for inline comments (%%  comment syntax)
// - Multiline string support in node content
// - Complex nested structures (subgraphs, class definitions, etc.)
// - External scanner for context-aware 'o' token in class aggregation
//
// DOCUMENTATION:
//   - Mermaid syntax: https://mermaid.js.org/
//   - Tree-sitter Go bindings: https://github.com/tree-sitter/go-tree-sitter
//
package tree_sitter_mermaid

// #cgo CFLAGS: -std=c11 -fPIC -I../../src
// #include "../../src/parser.c"
// #include "../../src/scanner.c"
import "C"

import "unsafe"

// Language returns the tree-sitter Language pointer for Mermaid diagrams.
//
// This function returns an unsafe.Pointer to the tree-sitter language
// definition compiled from the grammar.js grammar. The pointer should be
// wrapped with sitter.NewLanguage() before use with a parser.
//
// The returned pointer is valid for the lifetime of the program and should
// not be freed.
//
// EXAMPLE:
//
//	parser := sitter.NewParser()
//	parser.SetLanguage(sitter.NewLanguage(Language()))
//
// IMPLEMENTATION DETAILS:
//
// This function wraps the C function tree_sitter_mermaid(), which is
// automatically compiled from the grammar and parser source code. The
// unsafe.Pointer conversion is necessary for Go/C interoperability but
// is safe because the pointer lifetime is managed by tree-sitter.
//
// Returns:
//   unsafe.Pointer - Opaque pointer to the tree-sitter Language object
func Language() unsafe.Pointer {
	return unsafe.Pointer(C.tree_sitter_mermaid())
}
