# 🧜‍♀️ The Little Mermaid - tree-sitter-little-mermaid

[![CI](https://github.com/mikkihugo/tree-sitter-mermaid/actions/workflows/ci.yml/badge.svg)](https://github.com/mikkihugo/tree-sitter-mermaid/actions/workflows/ci.yml)
[![Tests Passing](https://img.shields.io/badge/tests-133%2F133%20passing-brightgreen)](TESTING.md)
[![Diagram Coverage](https://img.shields.io/badge/coverage-23%2F23%20types-brightgreen)](ARCHITECTURE.md)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
[![Mermaid Version](https://img.shields.io/badge/Mermaid-11.12.0-blueviolet.svg)](https://mermaid.js.org/)
[![tree-sitter](https://img.shields.io/badge/tree--sitter-0.25-green)](https://tree-sitter.github.io/tree-sitter/)
[![npm](https://img.shields.io/npm/v/tree-sitter-little-mermaid)](https://www.npmjs.com/package/tree-sitter-little-mermaid)
[![PyPI](https://img.shields.io/pypi/v/tree-sitter-little-mermaid)](https://pypi.org/project/tree-sitter-little-mermaid/)
[![crates.io](https://img.shields.io/crates/v/tree-sitter-little-mermaid)](https://crates.io/crates/tree-sitter-little-mermaid)

A modern, actively maintained [Mermaid.js](https://mermaid-js.github.io/mermaid/#/) grammar for [tree-sitter](https://tree-sitter.github.io/tree-sitter/) with comprehensive tooling, complete diagram type support (23/23), and 100% test passing rate.

**Published as `tree-sitter-little-mermaid`** on npm, PyPI, and crates.io for easy installation and discoverability.

## 🙏 Credits

This is a fork of the original [monaqa/tree-sitter-mermaid](https://github.com/monaqa/tree-sitter-mermaid) by [Mogami Shinichi](https://github.com/monaqa). We extend our deepest gratitude to the original maintainer for their foundational work that made this project possible.

## ✨ Key Features

- 🚀 **Complete Mermaid Support** - All 23 diagram types fully implemented with comprehensive parsing
- 🎯 **100% Test Passing** - 133 comprehensive corpus tests across all diagram types
- ✅ **23/23 Diagram Types Supported** - Full coverage of Mermaid specification with complete grammar
- 🦀 **Modern Rust & Tree-sitter** - Latest stable versions (Rust 2021, tree-sitter 0.25)
- 📊 **Multiple Language Bindings** - Rust, Node.js, Python, Go, Swift, C
- 🎨 **Syntax Highlighting** - Query files for Neovim, Helix, and other tree-sitter editors
- 🧪 **Automated Testing** - Corpus-based test suite with full spec coverage
- 🔄 **Spec Compliance** - Weekly automated checks for Mermaid updates
- 🛠️ **Development Tooling** - Nix, Homebrew, Make, and CI/CD support
- 📚 **Well Documented** - Complete API docs, architecture guide, testing guide, examples

## 📊 Diagram Type Support Status

### ✅ All 23 Diagram Types Fully Implemented

| Diagram Type | Status | Tests | Notes |
|---|---|---|---|
| **Flowcharts** (`graph`/`flowchart`) | ✅ Complete | 11 | Full support for TD, LR, RL, BT directions |
| **Sequence Diagrams** (`sequenceDiagram`) | ✅ Complete | 13 | Actors, messages, activation, loops |
| **Class Diagrams** (`classDiagram`) | ✅ Complete | 9 | Classes, relationships, visibility |
| **State Diagrams** (`stateDiagram-v2`) | ✅ Complete | 9 | States, transitions, composites |
| **Entity Relationship** (`erDiagram`) | ✅ Complete | 5 | Entities, relationships, cardinality |
| **Gantt Charts** (`gantt`) | ✅ Complete | 4 | Tasks, dates, sections |
| **Git Graphs** (`gitGraph`) | ✅ Complete | 5 | Commits, branches, merges, cherry-pick |
| **Pie Charts** (`pie`) | ✅ Complete | 3 | Values, labels, showData |
| **Mind Maps** (`mindmap`) | ✅ Complete | 5 | Hierarchical nodes, shapes |
| **User Journey** (`journey`) | ✅ Complete | 5 | Sections, tasks, scores |
| **Quadrant Chart** (`quadrantChart`) | ✅ Complete | 5 | Axes, quadrants, data points |
| **XY Chart** (`xychart-beta`) | ✅ Complete | 5 | Line, bar, scatter plots |
| **Timeline** (`timeline`) | ✅ Complete | 5 | Periods, events, dates |
| **ZenUML** (`zenuml`) | ✅ Complete | 5 | Sequence interactions |
| **Sankey** (`sankey-beta`) | ✅ Complete | 5 | Flow diagrams, links, values |
| **Block Diagram** (`block-beta`) | ✅ Complete | 5 | Blocks, columns, layouts |
| **Packet** (`packet-beta`) | ✅ Complete | 5 | Bit ranges, fields |
| **Kanban** (`kanban`) | ✅ Complete | 5 | Columns, tasks, indentation |
| **Architecture** (`architecture-beta`) | ✅ Complete | 5 | Components, connections |
| **Radar** (`radar-beta`) | ✅ Complete | 5 | Metrics, categories, values |
| **Treemap** (`treemap`) | ✅ Complete | 5 | Hierarchical values, labels |
| **C4 Diagrams** (`C4Context`, etc.) | ✅ Complete | 5 | Context, Container, Component, Dynamic, Deployment |
| **Requirement Diagrams** (`requirementDiagram`) | ✅ Complete | 5 | Requirements, elements, relationships |

**Total: 133 tests across 23 diagram types (100% passing) - All diagram types fully implemented!**

## 🎨 Visual Examples

GitHub natively renders Mermaid diagrams! Here are some examples of what this parser supports:

### Flowchart
```mermaid
graph TD
    A[Start] --> B{Decision}
    B -->|Yes| C[Action 1]
    B -->|No| D[Action 2]
    C --> E[End]
    D --> E
```

### Sequence Diagram
```mermaid
sequenceDiagram
    Alice->>Bob: Hello Bob!
    Bob-->>Alice: Hi Alice!
    Alice->>Bob: How are you?
    Bob-->>Alice: I'm good, thanks!
```

### Class Diagram
```mermaid
classDiagram
    class Animal {
        +String name
        +int age
        +makeSound()
    }
    class Dog {
        +String breed
        +bark()
    }
    Animal <|-- Dog
```

### State Diagram
```mermaid
stateDiagram-v2
    [*] --> Idle
    Idle --> Processing: Start
    Processing --> Success: Complete
    Processing --> Error: Fail
    Success --> [*]
    Error --> Idle: Retry
```

### Gantt Chart
```mermaid
gantt
    title Project Timeline
    dateFormat  YYYY-MM-DD
    section Phase 1
    Design           :a1, 2024-01-01, 30d
    Development      :a2, after a1, 60d
    section Phase 2
    Testing          :a3, after a2, 20d
    Deployment       :a4, after a3, 10d
```

### Git Graph
```mermaid
gitGraph
    commit
    branch develop
    checkout develop
    commit
    commit
    checkout main
    merge develop
    commit
```

<details>
<summary>See more diagram types...</summary>

### Pie Chart
```mermaid
pie title Pets
    "Dogs" : 45
    "Cats" : 30
    "Birds" : 15
    "Fish" : 10
```

### Entity Relationship
```mermaid
erDiagram
    CUSTOMER ||--o{ ORDER : places
    ORDER ||--|{ LINE-ITEM : contains
    CUSTOMER {
        string name
        string email
    }
    ORDER {
        int orderNumber
        date orderDate
    }
```

### Mind Map
```mermaid
mindmap
  root((Project))
    Planning
      Requirements
      Timeline
    Development
      Frontend
      Backend
    Testing
      Unit Tests
      Integration Tests
```

### User Journey
```mermaid
journey
    title My workday
    section Go to work
      Make coffee: 5: Me
      Drive: 3: Me
    section Work
      Code: 4: Me
      Meetings: 2: Me
```

</details>

## 🚀 Quick Start

### Rust
```rust
use tree_sitter::Parser;
use tree_sitter_mermaid::language;

let mut parser = Parser::new();
parser.set_language(&language()).expect("Error loading mermaid grammar");

let code = r#"graph TD
    A[Start] --> B{Decision}
    B -->|Yes| C[Action 1]
    B -->|No| D[Action 2]"#;

let tree = parser.parse(code, None).unwrap();
```

### Node.js
```javascript
const Parser = require('tree-sitter');
const Mermaid = require('tree-sitter-mermaid');

const parser = new Parser();
parser.setLanguage(Mermaid);

const code = `graph TD
    A[Start] --> B[End]`;

const tree = parser.parse(code);
```

### Python
```python
from tree_sitter import Language, Parser
from tree_sitter_mermaid import language

parser = Parser()
parser.set_language(language())

code = """graph TD
    A[Start] --> B[End]"""

tree = parser.parse(code.encode())
```

### Go
```go
package main

import (
    sitter "github.com/tree-sitter/go-tree-sitter"
    mermaid "github.com/mikkihugo/tree-sitter-mermaid/bindings/go"
)

func main() {
    parser := sitter.NewParser()
    parser.SetLanguage(sitter.NewLanguage(mermaid.Language()))
    // ... parse Mermaid code
}
```

## 📦 Installation

### Rust
Add to `Cargo.toml`:
```toml
[dependencies]
tree-sitter-little-mermaid = "0.25"
```

Or from git:
```toml
[dependencies]
tree-sitter-little-mermaid = { git = "https://github.com/mikkihugo/tree-sitter-mermaid" }
```

### Node.js
```bash
npm install tree-sitter-little-mermaid
```

### Python
```bash
pip install tree-sitter-little-mermaid
```

### Go
```bash
go get github.com/mikkihugo/tree-sitter-mermaid
```

### Swift
Add to `Package.swift`:
```swift
.package(url: "https://github.com/mikkihugo/tree-sitter-mermaid.git", from: "0.25.0")
```

### C
Build and install from source:
```bash
git clone https://github.com/mikkihugo/tree-sitter-mermaid.git
cd tree-sitter-mermaid
make
sudo make install
```

This installs the shared library to `/usr/local/lib` and headers to `/usr/local/include`.

See [bindings/c/tree-sitter-mermaid.h](bindings/c/tree-sitter-mermaid.h) for complete C API documentation.

## 🛠️ Development Environment

### Option 1: Nix (Recommended - Fully Reproducible)
For a completely reproducible development environment across all platforms:

```sh
# Install Nix (one-time setup)
curl -L https://nixos.org/nix/install | sh

# Enter the development environment
nix-shell

# Optional: Automatic activation with direnv
brew install direnv  # or your OS package manager
direnv allow         # in the repo root
```

This automatically provides all required toolchains: C/C++ compiler, Python, Node.js, Rust, Go, Swift, tree-sitter CLI, pkg-config, and Make.

### Option 2: Homebrew (macOS Only)
If you prefer traditional package management on macOS:

```sh
# Install all dependencies at once
brew bundle

# Or install manually:
brew install tree-sitter node python rust go swift
```

## 🧪 Testing & Quality Assurance

This project includes comprehensive testing infrastructure to maintain 100% compatibility with Mermaid's specification.

### Quick Test Commands
```bash
# Run all tests (133 corpus tests + CI checks)
make test                    # Full test suite
make check-spec              # Mermaid spec compliance

# Language-specific tests
cargo test                   # Rust bindings
go test ./bindings/go/...    # Go bindings
npm test                     # Node.js bindings
```

### Test Coverage
- ✅ **133/133 corpus tests passing** (100%)
- ✅ **23/23 diagram types fully implemented** with comprehensive coverage
- ✅ **All diagram types** parse structure, keywords, and content correctly
- ✅ **Advanced features** tested: cherry-pick, System_Boundary, scatter plots, etc.
- ✅ **Language bindings** tested in Rust, Go, and Swift
- ✅ **Weekly spec checks** for new Mermaid features

### CI/CD Pipeline
- **Automated tests** on every push and pull request
- **Parallel jobs**: Ubuntu (Node.js 18) + Nix environment
- **Weekly spec checks** to detect new Mermaid features
- **Cross-platform support** via GitHub Actions

See [TESTING.md](TESTING.md) for comprehensive testing guide.

## 📚 Documentation

| Document | Purpose |
|---|---|
| [ARCHITECTURE.md](ARCHITECTURE.md) | System design, grammar structure, parser internals |
| [TESTING.md](TESTING.md) | Testing infrastructure, how to write tests, CI/CD details |
| [CORPUS_FORMAT.md](CORPUS_FORMAT.md) | Test corpus format, writing test cases |
| [CLAUDE.md](CLAUDE.md) | AI assistant guidelines, development workflow |
| [grammar.js](grammar.js) | Grammar definition with inline documentation |

## 🤝 Contributing

We welcome contributions! Here's how to add or improve diagram type support:

### Adding Support for a New Diagram Type
1. **Research** the diagram syntax in [Mermaid documentation](https://mermaid.js.org/)
2. **Add test cases** to `test/corpus/typename.txt` (see existing files for format)
3. **Implement grammar rules** in `grammar.js` following established patterns
4. **Run tests**: `make test` — must pass before submitting PR
5. **Update documentation** in README, ARCHITECTURE.md, and TESTING.md
6. **Run spec check**: `make check-spec` to ensure compliance

### Development Workflow
```bash
# Set up environment
nix-shell  # or brew bundle

# Create your feature branch
git checkout -b feature/my-diagram-type

# Make changes and test
make test
make check-spec

# Build all language bindings
make all

# Commit and push
git add .
git commit -m "Add support for XYZ diagram type"
git push origin feature/my-diagram-type
```

### Code Quality Requirements
- ✅ All tests must pass (`make test`)
- ✅ New diagram types need corpus tests with 3-5 test cases
- ✅ CI pipeline must pass on all platforms
- ✅ Documentation must be updated
- ✅ Code must be properly commented (see existing grammar rules for style)

## 📖 Project Structure

```
tree-sitter-mermaid/
├── grammar.js              # Grammar definition (tree-sitter DSL)
├── src/
│   ├── parser.c           # Generated parser (auto-updated by `npm run generate`)
│   ├── scanner.c          # External C scanner for context-aware tokens
│   └── node-types.json    # Auto-generated node type definitions
├── bindings/               # Language bindings
│   ├── c/                 # C API
│   ├── node/              # Node.js bindings
│   ├── python/            # Python bindings
│   ├── rust/              # Rust crate
│   ├── go/                # Go bindings
│   └── swift/             # Swift package
├── test/corpus/            # Test cases (133 tests, 100% passing)
│   ├── flow.txt           # Flowchart tests (11 cases)
│   ├── sequence.txt       # Sequence diagram tests (13 cases)
│   ├── class.txt          # Class diagram tests (9 cases)
│   └── ... (20+ more test files)
├── queries/                # Syntax highlighting queries
│   ├── highlights.scm      # For Neovim, Helix
│   └── ...
├── Makefile                # Build and test targets
├── package.json            # Node.js configuration
├── Cargo.toml              # Rust configuration
└── shell.nix               # Nix development environment
```

## 🔗 Related Projects

- [tree-sitter](https://tree-sitter.github.io/tree-sitter/) - Parsing toolkit
- [Mermaid.js](https://mermaid.js.org/) - Diagramming language
- [Original tree-sitter-mermaid](https://github.com/monaqa/tree-sitter-mermaid) - Original project

## 📄 License

MIT - See [LICENSE](LICENSE) for details.

## 🌟 Repository Stats

- **Diagram Types**: 23/23 supported (100%)
- **Test Coverage**: 133/133 passing (100%)
- **Language Bindings**: 6 (Rust, Node.js, Python, Go, Swift, C)
- **Documentation**: Comprehensive (Architecture, Testing, API guides)
- **Last Updated**: October 2024
- **Maintenance Status**: Actively maintained

---

**Built with ❤️ for the Mermaid and tree-sitter communities**
