# Contributing to Singularity TreeSitter Mermaid

Thank you for your interest in contributing to Singularity's tree-sitter-mermaid! We welcome contributions of all kinds, from bug reports to new features.

## Table of Contents

- [Code of Conduct](#code-of-conduct)
- [Getting Started](#getting-started)
- [Development Environment](#development-environment)
- [How to Contribute](#how-to-contribute)
- [Reporting Bugs](#reporting-bugs)
- [Suggesting Enhancements](#suggesting-enhancements)
- [Code Contribution Guidelines](#code-contribution-guidelines)
- [Pull Request Process](#pull-request-process)
- [Testing](#testing)
- [Documentation](#documentation)
- [Community](#community)

## Code of Conduct

This project adheres to a [Code of Conduct](CODE_OF_CONDUCT.md). By participating, you are expected to uphold this code. Please report unacceptable behavior to the project maintainers.

## Getting Started

1. **Fork the repository** on GitHub
2. **Clone your fork** locally:
   ```bash
   git clone https://github.com/YOUR_USERNAME/singularity-parser-mermaid.git
   cd singularity-parser-mermaid
   ```
3. **Set up the development environment** (see below)
4. **Create a feature branch**: `git checkout -b feature/my-new-feature`
5. **Make your changes**
6. **Test your changes**: `make test`
7. **Commit and push**
8. **Open a Pull Request**

## Development Environment

### Option 1: Nix (Recommended - Fully Reproducible)

The easiest way to get started with a reproducible environment:

```bash
# Install Nix (one-time setup)
curl -L https://nixos.org/nix/install | sh

# Enter the development environment
nix-shell

# Optional: Automatic activation with direnv
brew install direnv  # or your OS package manager
direnv allow         # in the repo root
```

This automatically provides all required toolchains: C/C++ compiler, Python, Node.js, Rust, Go, Swift, tree-sitter CLI, pkg-config, and Make.

### Option 2: Homebrew (macOS)

```bash
# Install all dependencies at once
brew bundle

# Or install manually:
brew install tree-sitter node python rust go swift
```

### Option 3: Manual Installation

Install the following tools:
- **tree-sitter CLI**: `npm install -g tree-sitter-cli`
- **Node.js** (v18 or later)
- **Rust** (latest stable)
- **Python** (3.8 or later)
- **Go** (1.20 or later)
- **Swift** (5.0 or later)
- **Make**
- **C/C++ compiler** (gcc or clang)

## How to Contribute

### Reporting Bugs

Before submitting a bug report:
- Check the [existing issues](https://github.com/Singularity-ng/singularity-parser-mermaid/issues) to avoid duplicates
- Test with the latest version of the parser

When reporting a bug, please include:
- **Clear title and description**
- **Mermaid diagram code** that reproduces the issue
- **Expected behavior** vs **actual behavior**
- **Parse tree output** (run `tree-sitter parse your-file.mmd`)
- **Environment details** (OS, tree-sitter version, etc.)

### Suggesting Enhancements

Enhancement suggestions are tracked as GitHub issues. When suggesting an enhancement:
- Use a **clear and descriptive title**
- Provide a **detailed description** of the proposed feature
- Include **examples** of how the feature would be used
- Explain **why this enhancement would be useful** to most users
- Link to **Mermaid documentation** if the feature is from official Mermaid.js

## Code Contribution Guidelines

### Adding Support for New Diagram Features

Follow this process when adding or improving diagram type support:

1. **Research the Feature**
   - Read the [Mermaid documentation](https://mermaid.js.org/) for the feature
   - Examine real-world examples
   - Understand the syntax and semantics

2. **Add Test Cases**
   - Create or update test file in `test/corpus/`
   - Follow the [tree-sitter corpus format](https://tree-sitter.github.io/tree-sitter/creating-parsers#command-test)
   - Add 3-5 test cases covering:
     - Basic usage
     - Edge cases
     - Complex scenarios
   - See existing test files for examples

3. **Implement Grammar Rules**
   - Edit `grammar.js`
   - Follow existing patterns and naming conventions
   - Add comments explaining complex rules
   - Keep rules focused and modular

4. **Generate Parser**
   ```bash
   npm run generate  # Generates src/parser.c from grammar.js
   ```

5. **Run Tests**
   ```bash
   make test         # Must pass 100%
   make check-spec   # Ensure spec compliance
   ```

6. **Update Documentation**
   - Update README.md with new features
   - Update ARCHITECTURE.md if grammar structure changed
   - Update TESTING.md with new test information
   - Add examples if relevant

### Code Style

- **JavaScript (grammar.js)**:
  - Use 2-space indentation
  - Follow existing naming conventions
  - Add comments for complex grammar rules
  - Use descriptive rule names

- **Test Files**:
  - Use clear, descriptive test names
  - Follow existing format in `test/corpus/`
  - Include expected parse tree for all tests

- **Documentation**:
  - Use Markdown format
  - Keep line length reasonable (80-120 chars)
  - Use proper heading hierarchy
  - Include code examples where helpful

### Commit Messages

Write clear, concise commit messages:
- Use present tense ("Add feature" not "Added feature")
- Use imperative mood ("Move cursor to..." not "Moves cursor to...")
- Limit first line to 72 characters
- Reference issues and PRs when relevant

Examples:
```
Add support for XY chart scatter plots

Implement grammar rules for scatter plot syntax in XY charts.
Adds 3 test cases covering basic, complex, and edge cases.

Fixes #123
```

## Pull Request Process

1. **Update Documentation**
   - Ensure README, ARCHITECTURE, and TESTING docs are up-to-date
   - Update CHANGELOG.md with your changes

2. **Ensure Tests Pass**
   - Run `make test` locally - all tests must pass
   - Run `make check-spec` to verify spec compliance
   - Test relevant language bindings if applicable

3. **Keep PRs Focused**
   - One PR should address one issue or feature
   - Keep changes minimal and focused
   - Split large changes into multiple PRs

4. **Provide Context**
   - Fill out the PR template completely
   - Explain what changed and why
   - Link related issues
   - Include before/after examples if relevant

5. **Be Responsive**
   - Respond to review comments promptly
   - Make requested changes or explain why you disagree
   - Update your PR based on feedback

6. **CI Must Pass**
   - GitHub Actions CI must pass before merge
   - This includes corpus tests and spec checks
   - Fix any CI failures promptly

## Testing

### Running Tests

```bash
# Run all corpus tests
make test

# Test a specific diagram type
tree-sitter test test/corpus/flow.txt

# Check Mermaid spec compliance
make check-spec

# Test language bindings
cargo test                   # Rust
go test ./bindings/go/...    # Go
npm test                     # Node.js
swift build                  # Swift
```

### Writing Tests

Tests use tree-sitter's corpus format. Each test file in `test/corpus/` contains multiple test cases:

```
==========================
Test case name
==========================

<Mermaid diagram code>

---

(source_file
  (expected_parse_tree))
```

See [TESTING.md](TESTING.md) for detailed testing guide.

## Documentation

Good documentation is crucial! When contributing:

- **README.md**: User-facing documentation, quick start, examples
- **ARCHITECTURE.md**: System design, grammar structure, internals
- **TESTING.md**: Testing infrastructure and guidelines
- **PUBLISHING.md**: Package publishing process
- **CHANGELOG.md**: Version history and release notes
- **Comments in code**: Explain complex logic and decisions

## Community

### Getting Help

- **GitHub Issues**: For bugs and feature requests
- **Discussions**: For questions and general discussion
- **Documentation**: Check existing docs first

### Recognition

Contributors are recognized in several ways:
- Listed in GitHub contributors
- Mentioned in release notes for significant contributions
- Credit in documentation for major features

### Maintainer Responsibilities

Maintainers will:
- Review PRs in a timely manner
- Provide constructive feedback
- Help contributors improve their submissions
- Maintain code quality and project vision
- Keep documentation up-to-date
- Cut releases and maintain changelogs

## Questions?

If you have questions about contributing, feel free to:
- Open a GitHub Discussion
- Comment on an existing issue
- Reach out to maintainers

---

**Thank you for contributing to Singularity tree-sitter-mermaid!** 🚀

Your contributions help make Mermaid diagram parsing better for everyone in the tree-sitter and Mermaid communities.
