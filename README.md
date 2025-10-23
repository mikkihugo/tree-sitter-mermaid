# tree-sitter-mermaid

[Mermaid.js](https://mermaid-js.github.io/mermaid/#/) grammar for [tree-sitter](https://tree-sitter.github.io/tree-sitter/) - **Updated for tree-sitter 0.25**.

This is a fork of the original [monaqa/tree-sitter-mermaid](https://github.com/monaqa/tree-sitter-mermaid) updated to work with the latest tree-sitter specifications.

## Features

- ✅ **Tree-sitter 0.25 compatible** - Works with the latest tree-sitter version
- ✅ **Rust 2021 edition** - Modern Rust features and performance
- ✅ **Comprehensive Mermaid support** - Parses all major diagram types
- ✅ **Syntax highlighting** - Includes query files for editor integration
- ✅ **Well documented** - Complete API documentation and examples

## Supported Syntax

- [x] **Class Diagrams** - `classDiagram`
- [x] **Entity Relationship** - `erDiagram` 
- [x] **Flowcharts** - `graph TD`, `graph LR`, etc.
- [x] **Gantt Charts** - `gantt`
- [x] **Pie Charts** - `pie`
- [x] **Sequence Diagrams** - `sequenceDiagram`
- [x] **State Diagrams** - `stateDiagram-v2`
- [x] **Mind Maps** - `mindmap`
- [ ] Requirement Diagrams
- [ ] User Journey Diagrams
- [ ] Git Graphs
- [ ] Info Diagrams

## Usage

```rust
use tree_sitter_mermaid::language;

let mermaid_code = r#"
graph TD
    A[Start] --> B{Decision}
    B -->|Yes| C[Action 1]
    B -->|No| D[Action 2]
"#;

let mut parser = tree_sitter::Parser::new();
parser.set_language(&language()).expect("Error loading mermaid grammar");
let tree = parser.parse(mermaid_code, None).unwrap();
```

## Installation

Add to your `Cargo.toml`:

```toml
[dependencies]
tree-sitter-mermaid = { git = "https://github.com/mikkihugo/tree-sitter-mermaid" }
```

## Development Environment (Nix)

For a fully reproducible development environment, use [Nix](https://nixos.org/):

```sh
nix-shell
```

This will provide all required toolchains and dependencies (C/C++, Python, Node.js, Rust, Go, Swift, tree-sitter, pkg-config, make, git, setuptools, wheel, node-gyp).

## Automatic Environment with direnv

For seamless environment activation, install [direnv](https://direnv.net/) and allow the `.envrc`:

```sh
brew install direnv  # or use your OS package manager
# In the repo root:
direnv allow
```

This will automatically load the Nix shell when you enter the directory.

## License

MIT - See [LICENSE](LICENSE) for details.
