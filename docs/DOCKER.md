# Docker Development Guide

This guide explains how to use Docker for development with tree-sitter-mermaid.

## Quick Start

```bash
# Build the development container
docker build -t tree-sitter-mermaid-dev .

# Run interactively
docker run -it -v $(pwd):/workspace tree-sitter-mermaid-dev

# Or use Docker Compose (recommended)
docker-compose run dev
```

## Why Docker?

Docker provides several advantages for development:

- ✅ **Consistent Environment**: Same tools and versions everywhere
- ✅ **Cross-Platform**: Works identically on Windows, macOS, and Linux
- ✅ **Reproducible**: Every developer and CI pipeline uses the same setup
- ✅ **Isolated**: No conflicts with system packages or other projects
- ✅ **Quick Setup**: No manual installation of dependencies
- ✅ **CI Matching**: Local environment matches GitHub Actions exactly

## Included Tools

The Docker image includes all development tools pre-installed:

| Tool | Version | Purpose |
|------|---------|---------|
| Node.js | 20 | JavaScript runtime, npm package manager |
| tree-sitter CLI | Latest | Parser generator and test runner |
| Python | 3.11 | Python bindings, build tools |
| Rust | Latest stable | Rust bindings, cargo package manager |
| Go | 1.21 | Go bindings |
| Swift | 5.9 | Swift package bindings |
| GCC/Clang | Latest | C compiler for parser compilation |
| Make | Latest | Build automation |
| Git | Latest | Version control |
| GitHub CLI | Latest | GitHub integration |
| pkg-config | Latest | Library configuration |
| node-gyp | Latest | Node.js native addon builder |

## Docker Commands

### Basic Usage

```bash
# Build the image
docker build -t tree-sitter-mermaid-dev .

# Run interactive shell
docker run -it -v $(pwd):/workspace tree-sitter-mermaid-dev

# Run a specific command
docker run -v $(pwd):/workspace tree-sitter-mermaid-dev make test

# Run with bash
docker run -it -v $(pwd):/workspace tree-sitter-mermaid-dev bash
```

### Docker Compose (Recommended)

Docker Compose simplifies common commands:

```bash
# Interactive shell
docker-compose run dev

# Run tests
docker-compose run dev make test

# Check Mermaid spec
docker-compose run dev make check-spec

# Build libraries
docker-compose run dev make all

# Run full CI suite
docker-compose run ci

# Custom command
docker-compose run dev npm run generate
```

### Development Workflow

```bash
# 1. Start container
docker-compose run dev

# 2. Inside container, make changes and test
npm run generate    # Generate parser from grammar.js
make test           # Run tests
make check-spec     # Check spec compliance

# 3. Exit container (Ctrl+D or type 'exit')
```

## VS Code Integration

### Remote Containers Extension

1. Install the "Dev Containers" extension in VS Code
2. Open the project folder
3. Command Palette (Cmd/Ctrl+Shift+P) → "Dev Containers: Reopen in Container"
4. VS Code will build the container and open inside it
5. All tools are available in the integrated terminal

**Configuration**: `.devcontainer/devcontainer.json`

**Features**:
- Automatic extension installation (language support, linting, etc.)
- Integrated terminal with all tools
- Port forwarding for development servers
- Git integration
- Full IntelliSense support

### GitHub Codespaces

GitHub Codespaces uses the same devcontainer configuration:

1. Go to the repository on GitHub
2. Click **Code** → **Codespaces**
3. Click **Create codespace on main**
4. Browser-based or VS Code development environment
5. Zero local setup required

## CI/CD Integration

### GitHub Actions

The project includes a Docker-based CI workflow (`.github/workflows/ci-docker.yml`) that:

1. Builds the same Docker image as local development
2. Runs tests inside the container
3. Checks Mermaid spec compliance
4. Validates grammar consistency

**Reproduce CI failures locally:**
```bash
docker-compose run ci
```

This runs the exact same commands as GitHub Actions.

### Local CI Testing

Before pushing changes, test them locally:

```bash
# Run full CI suite
docker-compose run ci

# Or step-by-step:
docker-compose run dev npm install
docker-compose run dev make test
docker-compose run dev ./check-mermaid-spec.sh
```

## Troubleshooting

### Container Build Fails

```bash
# Clean Docker cache and rebuild
docker system prune -a
docker build --no-cache -t tree-sitter-mermaid-dev .
```

### Permission Issues

```bash
# Run as specific user
docker run --user $(id -u):$(id -g) -v $(pwd):/workspace tree-sitter-mermaid-dev

# Or with Docker Compose (automatically handled)
docker-compose run dev
```

### Out of Disk Space

```bash
# Remove unused Docker resources
docker system prune -a --volumes
```

### Tests Fail in Container

```bash
# Check if npm install is needed
docker-compose run dev npm install

# Clean and regenerate parser
docker-compose run dev npm run generate
docker-compose run dev make clean
docker-compose run dev make test
```

### Container Won't Start

```bash
# Check Docker daemon is running
docker ps

# View container logs
docker logs <container_id>

# Restart Docker daemon (varies by OS)
# macOS: Docker Desktop → Restart
# Linux: sudo systemctl restart docker
```

## Advanced Usage

### Custom Docker Image

Build a custom image with additional tools:

```dockerfile
# Create Dockerfile.custom
FROM tree-sitter-mermaid-dev:latest

# Add your custom tools
RUN apt-get update && apt-get install -y \
    vim \
    tmux \
    && rm -rf /var/lib/apt/lists/*
```

```bash
# Build custom image
docker build -f Dockerfile.custom -t my-tree-sitter-dev .

# Use custom image
docker run -it -v $(pwd):/workspace my-tree-sitter-dev
```

### Persistent Development Container

Keep a container running for fast access:

```bash
# Start container in background
docker run -d --name tree-sitter-dev \
  -v $(pwd):/workspace \
  tree-sitter-mermaid-dev \
  tail -f /dev/null

# Execute commands in running container
docker exec -it tree-sitter-dev make test

# Attach to container
docker attach tree-sitter-dev

# Stop container when done
docker stop tree-sitter-dev
docker rm tree-sitter-dev
```

### Multi-Stage Builds

For production deployments, use multi-stage builds:

```dockerfile
# Build stage
FROM tree-sitter-mermaid-dev:latest AS builder
WORKDIR /workspace
COPY . .
RUN make all

# Runtime stage (minimal image)
FROM ubuntu:22.04
COPY --from=builder /workspace/lib*.so /usr/local/lib/
RUN ldconfig
```

## Performance Tips

1. **Use Docker Compose**: Caches volumes for faster builds
2. **Volume Caching**: `.dockerignore` excludes unnecessary files
3. **Layer Caching**: Dockerfile is optimized for layer reuse
4. **Build Cache**: Don't use `--no-cache` unless necessary
5. **Prune Regularly**: `docker system prune` removes unused data

## Comparison with Other Environments

| Feature | Docker | Nix | Homebrew | Manual |
|---------|--------|-----|----------|--------|
| Cross-platform | ✅ | ✅ | macOS only | ✅ |
| Setup time | Fast | Medium | Fast | Slow |
| Reproducibility | High | Very High | Medium | Low |
| Disk space | ~2GB | ~1GB | Minimal | Varies |
| Isolation | Complete | Partial | None | None |
| CI matching | Perfect | Good | Poor | Poor |

## Resources

- [Docker Documentation](https://docs.docker.com/)
- [Docker Compose Documentation](https://docs.docker.com/compose/)
- [VS Code Dev Containers](https://code.visualstudio.com/docs/devcontainers/containers)
- [GitHub Codespaces](https://github.com/features/codespaces)

## Support

If you encounter issues with Docker:

1. Check this guide's Troubleshooting section
2. Review [GitHub Issues](https://github.com/Singularity-ng/singularity-parser-mermaid/issues)
3. Open a new issue with:
   - Docker version: `docker --version`
   - OS and version
   - Error messages
   - Steps to reproduce
