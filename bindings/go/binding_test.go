package tree_sitter_mermaid_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	tree_sitter_mermaid "github.com/Singularity-ng/singularity-parser-mermaid/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mermaid.Language())
	if language == nil {
		t.Errorf("Error loading Mermaid grammar")
	}
}

func TestGrammarName(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mermaid.Language())
	if language == nil {
		t.Fatal("Failed to load language")
	}
	// Basic smoke test - language loaded successfully
	t.Log("✅ Mermaid grammar loaded successfully")
}
