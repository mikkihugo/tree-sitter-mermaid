/**
 * External scanner for tree-sitter Mermaid grammar
 *
 * PURPOSE:
 * This scanner handles the special 'o' token used in class diagram relationships.
 * The 'o' character is used to denote aggregation in UML class diagrams:
 *   - "o--" represents an aggregation relationship
 *   - "--o" represents the other end of the relationship
 *
 * PROBLEM SOLVED:
 * The character 'o' is also a common letter in English text (e.g., "Go", "Class",
 * "contains"). Without this scanner, the parser would incorrectly tokenize 'o'
 * within word boundaries, breaking class names and relationships.
 *
 * SOLUTION:
 * The scanner only recognizes 'o' as CLASS_AGGREGATION token when it appears in
 * valid UML relationship contexts:
 * - Followed by '-' (e.g., "o-")
 * - Followed by '.' (e.g., "o.")
 * - Followed by '|' (e.g., "o|")
 * - Followed by whitespace or end of input
 *
 * This prevents false positives when 'o' appears in regular class names or text.
 *
 * REFERENCE:
 * - Mermaid class diagram syntax: https://mermaid.js.org/syntax/classDiagram.html
 * - Tree-sitter external scanner docs: https://tree-sitter.github.io/tree-sitter/
 */

#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdbool.h>

enum TokenType {
  CLASS_AGGREGATION,  ///< The 'o' token in UML aggregation relationships
};

/**
 * Creates the external scanner state
 *
 * The Mermaid scanner doesn't require persistent state across invocations,
 * so this returns NULL.
 *
 * @returns NULL (no state to maintain)
 */
void *tree_sitter_mermaid_external_scanner_create() {
    return NULL;
}

/**
 * Destroys the external scanner state
 *
 * No cleanup needed since no state is maintained.
 */
void tree_sitter_mermaid_external_scanner_destroy(void *payload) {}

/**
 * Resets the external scanner state
 *
 * Called when the scanner needs to reset between parse operations.
 * No-op since no state is maintained.
 */
void tree_sitter_mermaid_external_scanner_reset(void *payload) {}

/**
 * Serializes the external scanner state for caching
 *
 * Since no state exists, returns 0 bytes serialized.
 *
 * @param payload Unused
 * @param buffer Unused
 * @returns 0 (no bytes to serialize)
 */
unsigned tree_sitter_mermaid_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

/**
 * Deserializes the external scanner state from cache
 *
 * No-op since no state was serialized.
 */
void tree_sitter_mermaid_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

/**
 * Checks if a character is a valid word character
 *
 * Used to determine if a character could be part of a regular identifier/word.
 * Letters, digits, and underscore are considered word characters.
 *
 * @param c Character to test
 * @returns true if c is alphanumeric or underscore, false otherwise
 * @private
 */
static bool is_word_char(int32_t c) {
    return (c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9') ||
           c == '_';
}

/**
 * Main external scanner function
 *
 * This function is called during tokenization whenever the regular lexer
 * encounters a position where external scanning is needed. It attempts to
 * match special tokens (currently just CLASS_AGGREGATION) that require
 * context-aware parsing.
 *
 * ALGORITHM:
 * 1. Check if CLASS_AGGREGATION is a valid token in the current context
 * 2. Skip leading whitespace
 * 3. Look for 'o' character
 * 4. Verify 'o' is followed by valid relationship syntax
 * 5. Return true if valid aggregation token found, false otherwise
 *
 * @param payload Unused (no state maintained)
 * @param lexer Tree-sitter lexer providing character access and position tracking
 * @param valid_symbols Array indicating which tokens are valid at current position
 * @returns true if a token was successfully scanned, false otherwise
 */
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
                next == '-' ||   // o-- or --o- (solid line relationships)
                next == '.' ||   // o.. or --o. (dotted line relationships)
                next == '|' ||   // o| (other relationship marker)
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
