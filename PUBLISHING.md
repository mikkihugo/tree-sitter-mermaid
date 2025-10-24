# Publishing Guide for tree-sitter-mermaid

This document explains how to publish tree-sitter-mermaid to package registries (npm, PyPI, crates.io, Swift Package Manager).

## 📦 Package Registry Status

| Registry | Package Name | Status | Owner | Notes |
|----------|--------------|--------|-------|-------|
| **npm** | `tree-sitter-mermaid` | ✅ Taken | monaqa/tree-sitter-mermaid | Original repo owns this |
| **PyPI** | `tree-sitter-mermaid` | ❌ Available | - | Ready to publish! |
| **crates.io** | `tree-sitter-mermaid` | ✅ Taken | monaqa/tree-sitter-mermaid | Original repo owns this |
| **Swift PM** | N/A | ✅ Ready | - | Git-based, no registry |

## 🚀 Publishing Options

### Option 1: Publish PyPI Only (Recommended for now)

Since PyPI is available, you can immediately publish the Python package:

```bash
# Install build tools
pip install build twine

# Build the package
python -m build

# Upload to PyPI (requires PyPI account and API token)
python -m twine upload dist/*
```

### Option 2: Scoped npm Package

Publish under your GitHub username as a scoped package:

**Change package.json name to:**
```json
{
  "name": "@mikkihugo/tree-sitter-mermaid",
  "version": "0.25.10"
}
```

**Then publish:**
```bash
npm login
npm publish --access public
```

Users would install with:
```bash
npm install @mikkihugo/tree-sitter-mermaid
```

### Option 3: Contact Original Maintainer

Reach out to monaqa (original maintainer) to:
- Request npm/crates.io package ownership transfer
- Propose collaboration
- Explain your improvements (100% test coverage, 23/23 types, modern tooling)

GitHub: https://github.com/monaqa
Original repo: https://github.com/monaqa/tree-sitter-mermaid

## 📋 Pre-Publishing Checklist

Before publishing to any registry:

- [ ] All tests passing (`make test`) - Currently: ✅ 133/133
- [ ] tree-sitter versions consistent (0.25.x everywhere)
- [ ] Documentation up-to-date (README, ARCHITECTURE, etc.)
- [ ] CHANGELOG updated with release notes
- [ ] Version numbers synchronized across all files
- [ ] License file present (MIT) - ✅ Already present
- [ ] Repository URL correct in all package configs

## 🔧 Publishing to PyPI

### Initial Setup

1. **Create PyPI account**: https://pypi.org/account/register/
2. **Create API token**: https://pypi.org/manage/account/token/
3. **Configure credentials**:
   ```bash
   # Create ~/.pypirc
   cat > ~/.pypirc << 'EOF'
   [pypi]
   username = __token__
   password = pypi-<your-token-here>
   EOF
   chmod 600 ~/.pypirc
   ```

### Build and Publish

```bash
# Clean previous builds
rm -rf dist/ build/ *.egg-info

# Install build tools
pip install --upgrade build twine

# Build source distribution and wheel
python -m build

# Check the built package
twine check dist/*

# Upload to TestPyPI first (recommended)
twine upload --repository testpypi dist/*

# Test install from TestPyPI
pip install --index-url https://test.pypi.org/simple/ tree-sitter-mermaid

# If everything works, upload to real PyPI
twine upload dist/*
```

### Automated PyPI Publishing (GitHub Actions)

Add this workflow: `.github/workflows/publish-pypi.yml`

```yaml
name: Publish to PyPI

on:
  release:
    types: [published]

jobs:
  publish:
    runs-on: ubuntu-latest
    permissions:
      id-token: write  # For trusted publishing

    steps:
    - uses: actions/checkout@v4

    - name: Set up Python
      uses: actions/setup-python@v4
      with:
        python-version: '3.11'

    - name: Install build tools
      run: |
        python -m pip install --upgrade pip
        pip install build twine

    - name: Build package
      run: python -m build

    - name: Publish to PyPI
      uses: pypa/gh-action-pypi-publish@release/v1
      with:
        password: ${{ secrets.PYPI_API_TOKEN }}
```

## 🦀 Publishing to crates.io

**⚠️ Name is taken** - Options:

1. **Request ownership** from monaqa
2. **Use different name**: `tree-sitter-mermaid-complete` or `ts-mermaid`
3. **Wait** for response from original maintainer

If you get ownership:

```bash
# Login to crates.io
cargo login <your-api-token>

# Publish
cargo publish

# Dry run first (recommended)
cargo publish --dry-run
```

## 📦 Publishing to npm

**⚠️ Name is taken** - Options:

### Option A: Scoped Package (Recommended)

1. **Update package.json**:
   ```json
   {
     "name": "@mikkihugo/tree-sitter-mermaid"
   }
   ```

2. **Publish**:
   ```bash
   npm login
   npm publish --access public
   ```

### Option B: Request Transfer

Contact monaqa to request npm package transfer.

## 🍎 Swift Package Manager

**No action needed!** Swift packages are Git-based. Users can install directly:

```swift
.package(url: "https://github.com/mikkihugo/tree-sitter-mermaid.git", from: "0.25.10")
```

The package is already configured in `Package.swift`.

## 🏷️ Version Bumping

When releasing a new version, update ALL these files:

```bash
# Automated version bump script
NEW_VERSION="0.25.11"

# Update all version fields
sed -i "s/version = \"[0-9.]*\"/version = \"$NEW_VERSION\"/" Cargo.toml
sed -i "s/\"version\": \"[0-9.]*\"/\"version\": \"$NEW_VERSION\"/" package.json
sed -i "s/version = \"[0-9.]*\"/version = \"$NEW_VERSION\"/" pyproject.toml
sed -i "s/version: \"[0-9.]*\"/version: \"$NEW_VERSION\"/" Package.swift
sed -i "s/VERSION := [0-9.]*/VERSION := $NEW_VERSION/" Makefile

# Commit
git add -A
git commit -m "Bump version to $NEW_VERSION"
git tag "v$NEW_VERSION"
git push origin main --tags
```

## 📝 Release Process

1. **Update version** (see above)
2. **Update CHANGELOG.md**
3. **Run full test suite**: `make test`
4. **Build all bindings** (optional - for local verification):
   ```bash
   cargo build
   npm run build
   python -m build
   ```
5. **Create Git tag**: `git tag v0.25.11`
6. **Push to GitHub**: `git push origin main --tags`
7. **Create GitHub Release** with release notes
8. **Publish to registries**:
   - PyPI: `twine upload dist/*`
   - npm (scoped): `npm publish --access public`
   - crates.io (if available): `cargo publish`

## 🤖 Automated Publishing Workflow

### Recommended Setup

1. **Use GitHub Releases** as the trigger
2. **Automate PyPI** publishing (already yours)
3. **Manual npm/crates.io** (if you get ownership)

### GitHub Secrets Needed

- `PYPI_API_TOKEN` - PyPI trusted publisher token
- `NPM_TOKEN` - npm access token (if publishing)
- `CARGO_REGISTRY_TOKEN` - crates.io token (if publishing)

## 📊 Current Status

As of October 2024:

- ✅ **Swift PM**: Ready (Git-based, working)
- ⏳ **PyPI**: Ready to publish (name available)
- ⏳ **npm**: Need scoped package or ownership transfer
- ⏳ **crates.io**: Need ownership transfer or new name

## 🎯 Recommended Next Steps

1. **Publish to PyPI immediately** (name available!)
2. **Contact monaqa** about npm/crates.io ownership
3. **Use scoped npm** (@mikkihugo/tree-sitter-mermaid) as backup
4. **Set up automated PyPI publishing** via GitHub Actions

---

**Questions?** Open an issue or check the [Contributing Guide](CONTRIBUTING.md)
