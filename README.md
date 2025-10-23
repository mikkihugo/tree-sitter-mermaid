# tree-sitter-mermaid

[![CI](https://github.com/mikkihugo/tree-sitter-mermaid/actions/workflows/ci.yml/badge.svg)](https://github.com/mikkihugo/tree-sitter-mermaid/actions/workflows/ci.yml)
[![Mermaid Version](https://img.shields.io/badge/Mermaid-11.12.0-blue.svg)](https://mermaid.js.org/)

A modern, actively maintained [Mermaid.js](https://mermaid-js.github.io/mermaid/#/) grammar for [tree-sitter](https://tree-sitter.github.io/tree-sitter/) with comprehensive tooling and automated spec compliance.

## 🙏 Credits

This is a fork of the original [monaqa/tree-sitter-mermaid](https://github.com/monaqa/tree-sitter-mermaid) by [Mogami Shinichi](https://github.com/monaqa). We extend our deepest gratitude to the original maintainer for their foundational work that made this project possible.

## ✨ Features

- 🚀 **Tree-sitter 0.25 compatible** - Built for the latest tree-sitter version
- 🦀 **Rust 2021 edition** - Modern Rust features and performance
- 📊 **8 diagram types** fully supported with comprehensive test coverage
- 🎨 **Syntax highlighting** - Includes query files for editor integration
- 🧪 **Automated testing** - Full test suite with corpus-based testing
- 🔄 **Spec compliance monitoring** - Weekly automated checks for Mermaid updates
- 🛠️ **Modern development tooling** - Nix, Homebrew, and CI/CD support
- 📚 **Well documented** - Complete API documentation and examples
- 🌍 **Cross-platform** - Works on macOS, Linux, and Windows

## 📋 Supported Syntax

### ✅ Currently Supported (8 types)
- [x] **Class Diagrams** - `classDiagram`
- [x] **Entity Relationship** - `erDiagram`
- [x] **Flowcharts** - `graph TD/LR/RL/BT`, subgraphs, custom shapes
- [x] **Gantt Charts** - `gantt` with sections, tasks, and dependencies
- [x] **Pie Charts** - `pie` with data visualization
- [x] **Sequence Diagrams** - `sequenceDiagram` with participants, messages, notes
- [x] **State Diagrams** - `stateDiagram-v2` with states, transitions, concurrency
- [x] **Mind Maps** - `mindmap` with nested structures and custom shapes

### ❌ Missing from Latest Mermaid Spec (15+ types)
These diagram types are available in Mermaid v11.12.0 but not yet implemented:
- [ ] **Git Graph** - `gitGraph` for version control visualization
- [ ] **User Journey** - `journey` for user experience mapping
- [ ] **Quadrant Chart** - `quadrantChart` for strategic analysis
- [ ] **XY Chart** - `xychart-beta` for data plotting
- [ ] **Timeline** - `timeline` for chronological events
- [ ] **ZenUML** - `zenuml` for sequence diagrams
- [ ] **Sankey** - `sankey` for flow visualization
- [ ] **Block Diagram** - `block-beta` for system architecture
- [ ] **Packet** - `packet-beta` for network diagrams
- [ ] **Kanban** - `kanban` for project management
- [ ] **Architecture** - `architecture-beta` for system design
- [ ] **Radar** - `radar-beta` for comparative analysis
- [ ] **Treemap** - `treemap` for hierarchical data
- [ ] **C4 Diagrams** - `C4Context/C4Container/etc.` for software architecture
- [ ] **Requirement Diagrams** - `requirementDiagram` for requirements engineering

## 🚀 Quick Start

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

## 📦 Installation

Add to your `Cargo.toml`:

```toml
[dependencies]
tree-sitter-mermaid = { git = "https://github.com/mikkihugo/tree-sitter-mermaid" }
```

## 🛠️ Development Environment

### Option 1: Nix (Recommended - Fully Reproducible)
For a completely reproducible development environment across all platforms:

```sh
# Install Nix (one-time setup)
curl -L https://nixos.org/nix/install | sh

# Enter the development environment
nix-shell
```

This automatically provides all required toolchains and dependencies.

For automatic activation with [direnv](https://direnv.net/):
```sh
brew install direnv  # or your OS package manager
direnv allow         # in the repo root
```

### Option 2: Homebrew (macOS Only)
If you prefer traditional package management on macOS:

```sh
# Install all dependencies at once
brew bundle

# Or install manually:
brew install tree-sitter node python rust go swift
```

## 🧪 Testing & Staying Current

This project includes comprehensive testing infrastructure to maintain compatibility with Mermaid's evolving specification.

### Running Tests
```bash
make test  # Run the complete tree-sitter test suite
```

### Checking Mermaid Spec Compliance
```bash
make check-spec  # Check for new diagram types in latest Mermaid
```

### Test Coverage Status
- ✅ **8 diagram types** with full corpus test coverage
- ❌ **15+ diagram types** identified for future implementation
- 🔄 **Weekly automated CI** checks for Mermaid specification updates
- � **Comprehensive test suite** with 100+ test cases

### CI/CD Pipeline
- **Automated testing** on every push and pull request
- **Weekly spec checks** to detect new Mermaid features
- **Cross-platform testing** (Linux via GitHub Actions, macOS via Nix)
- **Dependency updates** monitored and tested

## 🤝 Contributing

We welcome contributions! Here's how to add support for new diagram types:

### Adding New Diagram Types
1. **Research** the diagram syntax in [Mermaid documentation](https://mermaid.js.org/)
2. **Add test cases** to `test/corpus/` (see existing `.txt` files for format)
3. **Implement grammar rules** in `grammar.js`
4. **Update documentation** in this README
5. **Run tests**: `make test && make check-spec`

### Development Workflow
```bash
# Set up environment
nix-shell  # or brew bundle

# Run tests continuously
make test

# Check spec compliance
make check-spec

# Build all language bindings
make all
```

### Testing Your Changes
- All tests must pass: `make test`
- New diagram types need corpus tests
- CI must pass before merging
- Documentation must be updated

## 📄 License

MIT - See [LICENSE](LICENSE) for details.

---

**Built with ❤️ for the Mermaid and tree-sitter communities**
