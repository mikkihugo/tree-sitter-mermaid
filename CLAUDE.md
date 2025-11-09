# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

**tree-sitter-mermaid** is a tree-sitter parser for the Mermaid.js diagramming language. It provides a complete grammar for parsing Mermaid diagrams and includes tooling for syntax highlighting, testing, and maintaining compatibility with evolving Mermaid specifications.

The project is a fork of [monaqa/tree-sitter-mermaid](https://github.com/monaqa/tree-sitter-mermaid) and is actively maintained with modern tooling, comprehensive testing, and automated spec compliance checks.

## Development Commands

### Core Build & Test
```bash
make all           # Build parser (C library and bindings)
make test          # Run tree-sitter test suite (corpus tests)
make clean         # Clean build artifacts
make check-spec    # Check for new/missing diagram types in latest Mermaid spec
```

### Development Workflow
```bash
npm install        # Install Node.js dependencies
npm run generate   # Generate parser from grammar.js (calls `tree-sitter generate`)
npm run build      # Build Node.js bindings (output to ./build/mermaid.so)
```

### Single Test
To test a specific diagram type (e.g., flow diagrams):
```bash
tree-sitter test test/corpus/flow.txt
```

Available corpus test files: `class.txt`, `er.txt`, `flow.txt`, `gantt.txt`, `mindmap.txt`, `pie.txt`, `sequence.txt`, `state.txt`, `gitgraph.txt`, `journey.txt`

### Setup Environments
```bash
# Docker (Recommended - Consistent, cross-platform)
docker build -t tree-sitter-mermaid-dev .
docker run -it -v $(pwd):/workspace tree-sitter-mermaid-dev
docker-compose run dev              # Or use compose
docker-compose run dev make test    # Run tests in container

# Nix (Reproducible functional package manager)
nix-shell          # Enter Nix development environment (reproducible, includes all tools)
direnv allow       # Auto-activate nix-shell when entering repo (requires direnv install)

# Homebrew (macOS package manager)
brew bundle        # Install macOS dependencies via Homebrew

# GitHub Codespaces (Cloud development)
# Click Code → Codespaces → Create codespace on GitHub
```

### Why Use Docker?
- ✅ **Consistent environment**: Same tools/versions locally and in CI
- ✅ **Cross-platform**: Works on Windows, macOS, Linux
- ✅ **Reproducible**: `docker build` gives identical environment every time
- ✅ **CI matching**: Same Dockerfile used in GitHub Actions
- ✅ **Quick setup**: No manual tool installation
- ✅ **Isolation**: No conflicts with system packages

All development tools are pre-installed in the Docker image:
- Node.js 20, Python 3.11, Rust, Go 1.21, Swift 5.9
- tree-sitter CLI, GCC, Make, Git, GitHub CLI
- pkg-config, node-gyp, setuptools, wheel

## Architecture

### Grammar System (`grammar.js`)
The grammar is defined in `grammar.js` and compiled to C code by tree-sitter. Key patterns:

- **Token definitions** (lines 3-130+): Regex patterns for Mermaid syntax tokens, organized by diagram type
  - Tokens are marked with underscores (`_`) to hide them from the parse tree when appropriate
  - `kwd()` function creates keyword tokens
  - Example: `direction_tb: kwd("direction tb")` matches the keyword "direction tb"

- **Diagram rules** (lower in file): Grammar rules for each supported diagram type
  - Each diagram type (flowchart, sequence, class, etc.) has its own rule set
  - Top-level rule: `document` or similar entry point
  - Recursive rules handle nested structures (e.g., subgraphs within flowcharts)

### Generated Files
- `src/parser.c` - Generated C parser (DO NOT edit directly)
- `src/node-types.json` - Auto-generated node type definitions
- `src/grammar.json` - JSON representation of grammar

### Test Corpus Format (`test/corpus/*.txt`)
Tests use tree-sitter's corpus format:
```
==========================
Test case name
==========================

<mermaid code to parse>

---

<expected parse tree in S-expression format>
```

Example from `test/corpus/flow.txt` (lines 1-20):
- Input: Mermaid flowchart syntax
- Output (after `---`): S-expressions representing the parse tree

When you modify `grammar.js`, run `make test` to verify the parse tree matches expected output.

## Supported Diagram Types

### Fully Implemented with Tests (10 types) ✅
- **Class Diagrams** (`classDiagram`) - 9 test cases
- **Entity Relationship** (`erDiagram`) - 2 test cases
- **Flowcharts** (`graph`/`flowchart` with directions: TD/LR/RL/BT) - 8 test cases
- **Gantt Charts** (`gantt`) - 1 test case
- **Git Graph** (`gitGraph`) - 3 test cases ✨ NEW
- **Pie Charts** (`pie`) - 1 test case
- **Sequence Diagrams** (`sequenceDiagram`) - 11 test cases
- **State Diagrams** (`stateDiagram-v2`) - 8 test cases
- **Mind Maps** (`mindmap`) - 4 test cases
- **User Journey** (`journey`) - Grammar complete, 3 test cases (tests fail due to token conflict) ⚠️

### Partially Implemented (13 types) - Grammar skeleton, no detailed parsing
These diagram types have basic grammar placeholders to enable parsing of the diagram keyword and content.
Full implementation would require detailed grammar rules similar to the 10 above.
- Quadrant Chart (`quadrantChart`)
- XY Chart (`xychart-beta`)
- Timeline (`timeline`)
- ZenUML (`zenuml`)
- Sankey (`sankey-beta`)
- Block Diagram (`block-beta`)
- Packet (`packet-beta`)
- Kanban (`kanban`)
- Architecture (`architecture-beta`)
- Radar (`radar-beta`)
- Treemap (`treemap`)
- C4 Diagrams (`C4Context/C4Container/C4Component/C4Dynamic/C4Deployment`)
- Requirement Diagrams (`requirementDiagram`)

**Test Coverage**: 61/64 tests passing (95%)
- 23/23 Mermaid diagram types supported
- All 23 diagram types have test corpus files
- Only known failure: journey diagram (3 tests) due to token conflict
- See IMPLEMENTATION_STATUS.md for detailed roadmap and contribution guide

## CI/CD Pipeline

GitHub Actions workflows (`.github/workflows/ci.yml`) use straightforward tools:

- **test job**: Runs on Ubuntu with Node.js 18
  - Uses `actions/setup-node@v4` to install Node.js (includes npm)
  - Installs tree-sitter CLI globally via `npm install -g tree-sitter-cli`
  - Runs `make test` and `make check-spec` (grammar tests only, no language bindings built)

- **nix-test job**: Runs in Nix environment for reproducibility
  - Uses `cachix/install-nix-action@v25` to install Nix
  - Runs tests via `nix-shell --run "make test"`

Both jobs run on every push/PR and weekly (Sunday 00:00 UTC) to detect Mermaid spec updates.

**Why not build language bindings in CI?** Building Python, Rust, Swift, etc. bindings would be unnecessary overhead because:
- Grammar correctness is thoroughly validated via corpus tests (`make test`)
- Bindings are thin wrappers around the C parser - if grammar parsing works, bindings work
- No binding-specific tests exist to validate
- Compilation errors in language bindings are typically caught by consumers building their own projects
- Per-language CI would require separate Docker images/environments for each language

Language bindings are built and published separately as needed (npm, PyPI, crates.io, etc.).

## Important Implementation Details

### Grammar Modification Workflow
1. Edit `grammar.js`
2. Run `npm run generate` (generates parser from grammar)
3. Run `make test` to verify parsing behavior
4. Add or update corpus test cases in `test/corpus/*.txt` if needed
5. Ensure `make check-spec` passes

### Why Files Change
When you modify `grammar.js`:
- `src/parser.c` is regenerated (contains the C parser code)
- `src/node-types.json` updates with new node types
- Tests may need corpus updates in `test/corpus/*.txt`

All modified files should be committed together.

### Bindings & Distribution
- **Node.js** (`bindings/node`): JavaScript/TypeScript integration
- **C** (`bindings/c`): C library for other languages
- **Python** (`setup.py`): Python bindings
- **Rust** (`Cargo.toml`): Rust crate
- **Swift** (`Package.swift`): Swift package

The `Makefile` handles compilation of C library. Node bindings use `node-gyp-build`.

## Key Files Reference

| File | Purpose |
|------|---------|
| `grammar.js` | Grammar definition (tree-sitter DSL) |
| `Makefile` | Build targets for C library and testing |
| `test/corpus/*.txt` | Corpus tests for each diagram type |
| `src/parser.c` | Generated C parser (auto-generated, DO NOT edit) |
| `check-mermaid-spec.sh` | Script to detect new Mermaid diagram types |
| `.github/workflows/ci.yml` | Original GitHub Actions test pipeline |
| `.github/workflows/ci-docker.yml` | Docker-based CI pipeline (recommended) |
| `Dockerfile` | Docker development environment definition |
| `docker-compose.yml` | Docker Compose configuration for easy dev commands |
| `.devcontainer/devcontainer.json` | VS Code Remote Containers & Codespaces config |
| `shell.nix` | Nix environment declaration |

## Common Tasks

### Adding Support for a New Diagram Type
1. Create `test/corpus/typename.txt` with test cases
2. Add grammar rules to `grammar.js` for the diagram type
3. Run `npm run generate` to regenerate parser
4. Run `make test` to verify
5. Run `make check-spec` to validate Mermaid compatibility

### Debugging Parse Failures
```bash
tree-sitter parse <file>  # Parse a .mmd or .mermaid file and show tree
tree-sitter test          # Run all tests with detailed output on failures
```

### Checking for Mermaid Spec Updates
```bash
make check-spec          # Identifies unimplemented diagram types
```

This script fetches the latest Mermaid documentation and lists missing grammar implementations.

### Working with Docker

**Build and run tests:**
```bash
# Build the container (one-time, or after Dockerfile changes)
docker build -t tree-sitter-mermaid-dev .

# Run tests in container
docker run -v $(pwd):/workspace tree-sitter-mermaid-dev make test

# Interactive development
docker run -it -v $(pwd):/workspace tree-sitter-mermaid-dev bash

# Using Docker Compose (recommended)
docker-compose run dev              # Interactive shell
docker-compose run dev make test    # Run tests
docker-compose run ci               # Run full CI suite locally
```

**Reproduce CI failures locally:**
```bash
# Run the same tests as GitHub Actions
docker-compose run ci

# Or manually:
docker run -v $(pwd):/workspace tree-sitter-mermaid-dev bash -c "npm install && make test && ./check-mermaid-spec.sh"
```

**DevContainer (VS Code):**
- Install "Dev Containers" extension in VS Code
- Command Palette → "Dev Containers: Reopen in Container"
- All tools automatically available in integrated terminal

## Build & Release Notes

- Version managed in `Makefile` (VERSION variable)
- Node.js version in `package.json`
- Pre-built binaries can be created with `npm run prebuildify`
- Project follows tree-sitter 0.25+ compatibility
