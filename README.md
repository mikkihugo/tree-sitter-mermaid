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

## Development Environment

### Option 1: Nix (Recommended - Reproducible)
For a fully reproducible development environment, use [Nix](https://nixos.org/):

```sh
# Install Nix if you haven't already
curl -L https://nixos.org/nix/install | sh

# Enter the development environment
nix-shell
```

This provides all required toolchains and dependencies automatically.

For automatic activation with [direnv](https://direnv.net/):
```sh
brew install direnv
direnv allow
```

### Option 2: Homebrew (macOS)
If you prefer using Homebrew on macOS:

```sh
# Install dependencies
brew bundle

# Or manually:
brew install tree-sitter node python rust go swift
```

## Testing & Staying Current

This grammar includes comprehensive tests and tools to stay current with Mermaid's specification:

### Running Tests
```bash
make test  # Run tree-sitter test suite
```

### Checking Mermaid Spec Status
```bash
make check-spec  # Check for new Mermaid diagram types
```

### Test Coverage
- ✅ **8 diagram types** currently supported with full test coverage
- ❌ **15+ diagram types** missing from latest Mermaid spec
- 📅 **Weekly CI checks** for Mermaid updates

### Contributing New Diagram Types
1. Add test cases to `test/corpus/`
2. Implement grammar rules in `grammar.js`
3. Update `README.md` supported features
4. Run `make test` to verify

## License

MIT - See [LICENSE](LICENSE) for details.
