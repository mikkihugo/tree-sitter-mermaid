; Mermaid syntax highlighting for tree-sitter
; Compatible with tree-sitter 0.25.x

; Comments
(comment) @comment

; Operators and arrows
"-->" @operator
"&" @operator

; Delimiters
":" @punctuation.delimiter

; Brackets
"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket

; Directives
(directive) @keyword.directive
