package tree_sitter_prolog_test

import (
	"testing"

	"codeberg.org/foxy/tree-sitter-prolog"
	tree_sitter "github.com/smacker/go-tree-sitter"
)

func TestCanLoadPrologGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_prolog.LanguageProlog())
	if language == nil {
		t.Errorf("Error loading Prolog grammar")
	}
}

func TestCanLoadProblogGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_problog.LanguageProblog())
	if language == nil {
		t.Errorf("Error loading Problog grammar")
	}
}
