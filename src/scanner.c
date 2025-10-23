#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdbool.h>

enum TokenType {
  CLASS_AGGREGATION,
};

void *tree_sitter_mermaid_external_scanner_create() {
    return NULL;
}

void tree_sitter_mermaid_external_scanner_destroy(void *payload) {}

void tree_sitter_mermaid_external_scanner_reset(void *payload) {}

unsigned tree_sitter_mermaid_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

void tree_sitter_mermaid_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

static bool is_word_char(int32_t c) {
    return (c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9') ||
           c == '_';
}

bool tree_sitter_mermaid_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    // Only try to match class aggregation 'o' if it's valid in this context
    if (valid_symbols[CLASS_AGGREGATION]) {
        // Skip any leading whitespace
        while (iswspace(lexer->lookahead)) {
            lexer->advance(lexer, true);
        }

        // Check if we see 'o'
        if (lexer->lookahead == 'o') {
            lexer->advance(lexer, false);

            // The 'o' must be followed by specific class diagram characters
            // or whitespace/end to be considered aggregation syntax
            int32_t next = lexer->lookahead;

            bool followed_by_class_syntax = (
                next == '-' ||   // o-- or --o-
                next == '.' ||   // o.. or --o.
                next == '|' ||   // o|
                iswspace(next) ||
                next == '\n' ||
                next == '\r' ||
                next == 0        // End of input
            );

            // Only match if followed by class diagram syntax
            // (not a letter, which would make it part of a word like "Go")
            if (followed_by_class_syntax) {
                lexer->mark_end(lexer);
                lexer->result_symbol = CLASS_AGGREGATION;
                return true;
            }
        }
    }

    return false;
}
