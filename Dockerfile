# =============================================================================
# Dockerfile for tree-sitter-mermaid Development Environment
# =============================================================================
#
# This Docker image provides a complete development environment with all tools
# needed to build, test, and develop tree-sitter-mermaid.
#
# INCLUDED TOOLS:
# - Node.js 20 (with npm and tree-sitter-cli)
# - Python 3.11 (with pip, setuptools, wheel)
# - Rust (latest stable with cargo)
# - Go 1.21
# - Swift 5.9
# - GCC/Clang C/C++ compilers
# - Make, Git, GitHub CLI
# - pkg-config, node-gyp
#
# BUILD:
#   docker build -t tree-sitter-mermaid-dev .
#
# RUN:
#   docker run -it -v $(pwd):/workspace tree-sitter-mermaid-dev
#
# OR USE WITH DOCKER COMPOSE:
#   docker-compose run dev

FROM ubuntu:22.04

# Prevent interactive prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive

# Set default shell to bash
SHELL ["/bin/bash", "-c"]

# =============================================================================
# Install system dependencies and compilers
# =============================================================================

RUN apt-get update && apt-get install -y \
    # Build essentials
    build-essential \
    gcc \
    g++ \
    make \
    pkg-config \
    # Version control
    git \
    curl \
    wget \
    # Additional utilities
    ca-certificates \
    gnupg \
    lsb-release \
    && rm -rf /var/lib/apt/lists/*

# =============================================================================
# Install Node.js 20 (includes npm)
# =============================================================================

RUN curl -fsSL https://deb.nodesource.com/setup_20.x | bash - \
    && apt-get install -y nodejs \
    && rm -rf /var/lib/apt/lists/*

# Install tree-sitter CLI and node-gyp globally
RUN npm install -g tree-sitter-cli node-gyp

# =============================================================================
# Install Python 3.11
# =============================================================================

RUN apt-get update && apt-get install -y \
    python3.11 \
    python3.11-dev \
    python3-pip \
    && rm -rf /var/lib/apt/lists/*

# Set python3 as default python
RUN ln -sf /usr/bin/python3.11 /usr/bin/python

# Install Python build tools
RUN pip3 install --no-cache-dir setuptools wheel build

# =============================================================================
# Install Rust (latest stable)
# =============================================================================

ENV RUSTUP_HOME=/usr/local/rustup \
    CARGO_HOME=/usr/local/cargo \
    PATH=/usr/local/cargo/bin:$PATH

RUN curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y --default-toolchain stable \
    && chmod -R a+w $RUSTUP_HOME $CARGO_HOME

# =============================================================================
# Install Go 1.21
# =============================================================================

RUN wget https://go.dev/dl/go1.21.5.linux-amd64.tar.gz \
    && tar -C /usr/local -xzf go1.21.5.linux-amd64.tar.gz \
    && rm go1.21.5.linux-amd64.tar.gz

ENV PATH=/usr/local/go/bin:$PATH

# =============================================================================
# Install Swift 5.9
# =============================================================================

RUN apt-get update && apt-get install -y \
    binutils \
    libc6-dev \
    libcurl4-openssl-dev \
    libedit2 \
    libgcc-9-dev \
    libpython3.11 \
    libsqlite3-0 \
    libstdc++-9-dev \
    libxml2-dev \
    libz3-dev \
    tzdata \
    zlib1g-dev \
    && rm -rf /var/lib/apt/lists/*

RUN wget https://download.swift.org/swift-5.9.2-release/ubuntu2204/swift-5.9.2-RELEASE/swift-5.9.2-RELEASE-ubuntu22.04.tar.gz \
    && tar -xzf swift-5.9.2-RELEASE-ubuntu22.04.tar.gz -C /usr/local --strip-components=1 \
    && rm swift-5.9.2-RELEASE-ubuntu22.04.tar.gz

ENV PATH=/usr/local/bin:$PATH

# =============================================================================
# Install GitHub CLI
# =============================================================================

RUN curl -fsSL https://cli.github.com/packages/githubcli-archive-keyring.gpg | dd of=/usr/share/keyrings/githubcli-archive-keyring.gpg \
    && chmod go+r /usr/share/keyrings/githubcli-archive-keyring.gpg \
    && echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/githubcli-archive-keyring.gpg] https://cli.github.com/packages stable main" | tee /etc/apt/sources.list.d/github-cli.list > /dev/null \
    && apt-get update \
    && apt-get install -y gh \
    && rm -rf /var/lib/apt/lists/*

# =============================================================================
# Set up working directory
# =============================================================================

WORKDIR /workspace

# Copy package files for dependency installation (optional, for layer caching)
# Uncomment if you want to pre-install node dependencies in the image
# COPY package*.json ./
# RUN npm install

# =============================================================================
# Verify installations
# =============================================================================

RUN echo "=== Verifying installed tools ===" \
    && echo "Node.js: $(node --version)" \
    && echo "npm: $(npm --version)" \
    && echo "tree-sitter: $(tree-sitter --version)" \
    && echo "Python: $(python --version)" \
    && echo "pip: $(pip --version)" \
    && echo "Rust: $(rustc --version)" \
    && echo "Cargo: $(cargo --version)" \
    && echo "Go: $(go version)" \
    && echo "Swift: $(swift --version | head -n1)" \
    && echo "GCC: $(gcc --version | head -n1)" \
    && echo "Make: $(make --version | head -n1)" \
    && echo "Git: $(git --version)" \
    && echo "GitHub CLI: $(gh --version | head -n1)" \
    && echo "pkg-config: $(pkg-config --version)"

# =============================================================================
# Default command
# =============================================================================

CMD ["/bin/bash"]

# =============================================================================
# USAGE EXAMPLES:
# =============================================================================
#
# Build the image:
#   docker build -t tree-sitter-mermaid-dev .
#
# Run interactively with current directory mounted:
#   docker run -it -v $(pwd):/workspace tree-sitter-mermaid-dev
#
# Run a specific command:
#   docker run -v $(pwd):/workspace tree-sitter-mermaid-dev make test
#
# Run with Docker Compose:
#   docker-compose run dev
#   docker-compose run dev make test
