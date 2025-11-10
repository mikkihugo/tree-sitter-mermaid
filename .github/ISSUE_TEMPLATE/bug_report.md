---
name: Bug Report
about: Report a bug or parsing issue
title: '[BUG] '
labels: bug
assignees: ''
---

## Bug Description
A clear and concise description of what the bug is.

## Mermaid Diagram Code
```mermaid
<!-- Paste your Mermaid diagram code here -->

```

## Expected Behavior
What you expected to happen when parsing this diagram.

## Actual Behavior
What actually happened. Include error messages if any.

## Parse Tree Output
If possible, include the parse tree output from `tree-sitter parse`:
```
<!-- Paste parse tree output here -->

```

## Environment
- **tree-sitter-mermaid version**: [e.g., 0.9.1]
- **tree-sitter version**: [e.g., 0.25.0]
- **Language binding**: [e.g., Rust, Node.js, Python, etc.]
- **Operating System**: [e.g., Ubuntu 22.04, macOS 14, Windows 11]
- **Editor** (if applicable): [e.g., Neovim, Helix, VS Code]

## Steps to Reproduce
1. Create a file with the diagram code above
2. Run `tree-sitter parse filename.mmd`
3. Observe the error/incorrect parse

## Additional Context
Add any other context about the problem here. For example:
- Does this diagram work correctly in Mermaid.js?
- Is this a regression from a previous version?
- Are there similar diagrams that work correctly?

## Possible Solution
If you have ideas about what might be causing the issue or how to fix it, please share them here.
