# Tree-sitter CLI Testing Guide

## Overview

The tree-sitter CLI is a critical component for testing and validating the Mermaid grammar. This guide explains how to install and use it for testing.

## Installation

### Option 1: Via npm (Recommended for development)

```bash
npm install -g tree-sitter-cli
```

### Option 2: Binary Download (Recommended for CI/CD)

```bash
# Linux x64
curl -L https://github.com/tree-sitter/tree-sitter/releases/download/v0.25.10/tree-sitter-linux-x64.gz | gunzip > tree-sitter
chmod +x tree-sitter
sudo mv tree-sitter /usr/local/bin/

# macOS x64
curl -L https://github.com/tree-sitter/tree-sitter/releases/download/v0.25.10/tree-sitter-macos-x64.gz | gunzip > tree-sitter
chmod +x tree-sitter
sudo mv tree-sitter /usr/local/bin/

# macOS ARM64
curl -L https://github.com/tree-sitter/tree-sitter/releases/download/v0.25.10/tree-sitter-macos-arm64.gz | gunzip > tree-sitter
chmod +x tree-sitter
sudo mv tree-sitter /usr/local/bin/
```

## Verify Installation

```bash
tree-sitter --version
# Should output: tree-sitter 0.25.10 (da6fe9beb4f7f67beb75914ca8e0d48ae48d6406)
```

## Running Tests

### Core Grammar Tests

```bash
# Run all corpus tests (133 tests)
tree-sitter test

# Run specific test file
tree-sitter test test/corpus/flow.txt

# Run tests with verbose output
tree-sitter test --debug
```

### Comprehensive Test Script

We provide a comprehensive test script that validates all components:

```bash
# Run all tests (tree-sitter CLI, Rust, Go, Swift, Python, Node.js)
./test-all-bindings.sh
```

This script:
- ✅ Validates tree-sitter CLI is installed and working
- ✅ Runs 133 corpus tests covering all 23 diagram types
- ✅ Tests all language bindings (Rust, Go, Swift, Python, Node.js)
- ✅ Runs Clippy with pedantic warnings for Rust
- ✅ Ensures 100% test pass rate before release

## Expected Output

When all tests pass:

```
╔════════════════════════════════════════════════════════════════════════╗
║                  ✅ ALL TESTS PASSED ✅                                 ║
║                                                                        ║
║              🎉 PRODUCTION-GRADE QUALITY ACHIEVED 🎉                   ║
║                                                                        ║
║  Success Rate: 100% (8/8 tests)                                       ║
║  Status: Ready for release v0.9.1                                      ║
╚════════════════════════════════════════════════════════════════════════╝
```

## Test Coverage

- **Corpus Tests**: 133 tests covering all 23 Mermaid diagram types
- **Language Bindings**: Rust (7), Go (2), Swift (2), Python, Node.js
- **Total**: 144+ validated tests

## CI/CD Integration

Tree-sitter CLI tests run automatically in:
- GitHub Actions: `.github/workflows/ci.yml`
- Comprehensive script: `./test-all-bindings.sh`
- Makefile: `make test`
