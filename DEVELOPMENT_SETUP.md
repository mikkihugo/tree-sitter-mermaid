# Development Environment Setup Guide

This guide provides a comprehensive overview of all available development environment options for tree-sitter-mermaid.

## Quick Comparison

| Method | Best For | Setup Time | Consistency | GitHub Copilot |
|--------|----------|------------|-------------|----------------|
| 🐳 **Docker** | Most developers, CI matching | 5 min | ⭐⭐⭐⭐⭐ | ✅ (via devcontainer) |
| ☁️ **GitHub Codespaces** | Cloud development, zero local setup | 2 min | ⭐⭐⭐⭐⭐ | ✅ Built-in |
| ❄️ **Nix** | Reproducible builds, functional package management | 10 min | ⭐⭐⭐⭐⭐ | ✅ (manual setup) |
| 🍺 **Homebrew** | macOS users, quick start | 5 min | ⭐⭐⭐ | ✅ (manual setup) |
| 🔧 **Manual** | Custom setups, any OS | 15 min | ⭐⭐ | ✅ (manual setup) |

## 1. Docker (Recommended) 🐳

**Best for:** Most developers, team consistency, CI environment matching

### Why Docker?
- ✅ Same environment for all developers
- ✅ Matches CI/CD pipeline exactly
- ✅ Works on Windows, macOS, Linux
- ✅ No conflicts with system packages
- ✅ Quick setup with zero configuration

### Quick Start
```bash
# Build container
docker build -t tree-sitter-mermaid-dev .

# Start development
docker-compose run dev

# Run tests
docker-compose run dev make test
```

### With VS Code
1. Install "Dev Containers" extension
2. Command Palette → "Dev Containers: Reopen in Container"
3. GitHub Copilot automatically available!

### Included Tools
- Node.js 20, Python 3.11, Rust, Go 1.21, Swift 5.9
- tree-sitter CLI, GCC, Make, Git, GitHub CLI
- All build tools: pkg-config, node-gyp, setuptools, wheel

**Full Documentation:** [DOCKER.md](DOCKER.md)

---

## 2. GitHub Codespaces ☁️

**Best for:** Cloud development, browser-based coding, instant setup

### Why Codespaces?
- ✅ Zero local installation
- ✅ Full development environment in browser or VS Code
- ✅ GitHub Copilot included
- ✅ Same Docker container as local development
- ✅ Free tier available for personal repos

### Quick Start
1. Go to repository on GitHub
2. Click **Code** → **Codespaces**
3. Click **Create codespace on main**
4. Start coding immediately!

### Features
- Pre-installed: All dev tools (Node, Python, Rust, Go, Swift, etc.)
- VS Code extensions: GitHub Copilot, language servers, linting
- Persistent environment (saved between sessions)
- Port forwarding for development servers
- Git integration

**Configuration:** `.devcontainer/devcontainer.json`

---

## 3. Nix ❄️

**Best for:** Reproducible builds, declarative configuration, Nix users

### Why Nix?
- ✅ Deterministic, reproducible builds
- ✅ Declarative configuration
- ✅ No global package conflicts
- ✅ Works on macOS and Linux
- ✅ Can pin exact versions

### Quick Start
```bash
# Install Nix
curl -L https://nixos.org/nix/install | sh

# Enter development shell
nix-shell

# Optional: Automatic activation
brew install direnv  # or apt install direnv
direnv allow
```

### With GitHub Copilot
Install VS Code and Copilot extension manually after entering nix-shell.

**Configuration:** `shell.nix`

---

## 4. Homebrew 🍺

**Best for:** macOS users wanting quick native setup

### Why Homebrew?
- ✅ Fast installation on macOS
- ✅ Native performance (no containerization)
- ✅ Easy to update packages
- ✅ Familiar to macOS developers

### Quick Start
```bash
# Install all dependencies
brew bundle

# Or manually:
brew install tree-sitter node python rust go swift
npm install -g tree-sitter-cli
```

### With GitHub Copilot
Install VS Code and GitHub Copilot extension from their websites.

**Configuration:** `Brewfile`

---

## 5. Manual Installation 🔧

**Best for:** Custom environments, Windows (non-Docker), learning

### Why Manual?
- ✅ Full control over versions
- ✅ Works on any platform
- ✅ Can customize to your needs
- ✅ Good for understanding dependencies

### Required Tools
- **Node.js 18+**: https://nodejs.org/
- **tree-sitter CLI**: `npm install -g tree-sitter-cli`
- **Python 3.8+**: https://www.python.org/
- **Rust**: https://rustup.rs/
- **Go 1.20+**: https://go.dev/
- **Swift 5.0+**: https://swift.org/
- **GCC/Clang**: Via system package manager
- **Make**: Via system package manager
- **Git**: https://git-scm.com/

### With GitHub Copilot
Install VS Code and GitHub Copilot extension from their websites.

---

## GitHub Copilot Integration

### Docker + VS Code Dev Containers
GitHub Copilot is **automatically installed** when you use:
```bash
# Open in VS Code
code .
# Command Palette → "Dev Containers: Reopen in Container"
```

Configuration in `.devcontainer/devcontainer.json` includes:
- `github.copilot` - AI pair programming
- `github.copilot-chat` - Chat interface

### GitHub Codespaces
GitHub Copilot is **built-in and enabled by default** in Codespaces.

### Other Environments
Install GitHub Copilot extension manually:
1. Open VS Code
2. Go to Extensions (Cmd/Ctrl+Shift+X)
3. Search for "GitHub Copilot"
4. Click Install
5. Sign in with GitHub account

---

## Testing Your Setup

Regardless of method chosen, verify your setup:

```bash
# Verify tools
node --version        # Should be 18+
python --version      # Should be 3.8+
rustc --version       # Should show Rust version
go version            # Should be 1.20+
swift --version       # Should show Swift version
tree-sitter --version # Should show tree-sitter version

# Install dependencies
npm install

# Run tests
make test

# Check spec
make check-spec

# Build parser
npm run generate
make all
```

Expected output: All tests passing ✅

---

## CI/CD Environment

### GitHub Actions
All CI workflows use **Docker** for consistency:
- `.github/workflows/ci-docker.yml` - Main CI with Docker
- `.github/workflows/auto-implement.yml` - Auto-implementation with Docker

**Reproduce CI locally:**
```bash
docker-compose run ci
```

This runs the exact same tests as GitHub Actions!

---

## Common Workflows

### Adding a New Feature
```bash
# Docker
docker-compose run dev bash
npm run generate && make test

# Nix
nix-shell
npm run generate && make test

# Homebrew/Manual
npm run generate && make test
```

### Debugging Test Failures
```bash
# Docker
docker-compose run dev tree-sitter test test/corpus/flow.txt

# All others
tree-sitter test test/corpus/flow.txt
```

### Updating Dependencies
```bash
# Docker - rebuild image
docker build --no-cache -t tree-sitter-mermaid-dev .

# Nix - update nixpkgs
# Edit shell.nix to point to new nixpkgs version

# Homebrew
brew update && brew upgrade

# Manual
# Update each tool individually
```

---

## Troubleshooting

### Docker Issues
See [DOCKER.md](DOCKER.md) Troubleshooting section.

### Nix Issues
```bash
# Clean Nix store
nix-collect-garbage -d

# Re-enter shell
exit
nix-shell
```

### Homebrew Issues
```bash
# Update Homebrew
brew update

# Reinstall
brew bundle --force
```

### Manual Installation Issues
- Verify each tool is in PATH: `which <tool>`
- Check versions match requirements
- Reinstall tools that are too old

---

## Migration Guide

### From Manual to Docker
```bash
# Build Docker image
docker build -t tree-sitter-mermaid-dev .

# Move to Docker Compose
docker-compose run dev
```

Your local files are mounted, no data loss!

### From Homebrew to Nix
```bash
# Install Nix
curl -L https://nixos.org/nix/install | sh

# Enter Nix shell (tools installed automatically)
nix-shell
```

Homebrew tools won't conflict with Nix.

### From Any to Codespaces
Just create a Codespace! Your local setup remains unchanged.

---

## Getting Help

1. **Documentation**: Check [DOCKER.md](DOCKER.md), [README.md](README.md), [CONTRIBUTING.md](CONTRIBUTING.md)
2. **Issues**: Search [GitHub Issues](https://github.com/Singularity-ng/singularity-parser-mermaid/issues)
3. **Discussions**: Ask in [GitHub Discussions](https://github.com/Singularity-ng/singularity-parser-mermaid/discussions)
4. **CI Logs**: Check [GitHub Actions](https://github.com/Singularity-ng/singularity-parser-mermaid/actions) for examples

---

## Recommended Setup by Use Case

| Use Case | Recommended | Alternative |
|----------|-------------|-------------|
| First-time contributor | Docker | GitHub Codespaces |
| Regular development | Docker + VS Code | Nix |
| Quick bug fix | GitHub Codespaces | Docker |
| macOS daily driver | Homebrew | Docker |
| Windows development | Docker | Manual |
| Linux development | Docker | Nix |
| CI/CD integration | Docker | - |
| Teaching/workshops | GitHub Codespaces | Docker |

---

**Choose the environment that works best for you. All options are fully supported!**
