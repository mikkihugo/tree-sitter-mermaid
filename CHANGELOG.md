# Changelog

All notable changes to tree-sitter-mermaid will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [0.9.1] - 2025-11-XX

### Changed
- Rebranded project as **Singularity TreeSitter Mermaid** across packages and documentation
- Updated repository links and publishing metadata to the Singularity organization
- Bumped package versions to 0.9.1 across all bindings

## [0.9.0] - 2025-11-XX

### Added
- Complete support for all 23 Mermaid diagram types
- 100% test coverage with 133 comprehensive corpus tests
- Full grammar implementation for:
  - Flowcharts (graph/flowchart with TD, LR, RL, BT directions)
  - Sequence Diagrams (actors, messages, activation, loops)
  - Class Diagrams (classes, relationships, visibility)
  - State Diagrams (states, transitions, composites)
  - Entity Relationship diagrams (entities, relationships, cardinality)
  - Gantt Charts (tasks, dates, sections)
  - Git Graphs (commits, branches, merges, cherry-pick)
  - Pie Charts (values, labels, showData)
  - Mind Maps (hierarchical nodes, shapes)
  - User Journey (sections, tasks, scores)
  - Quadrant Chart (axes, quadrants, data points)
  - XY Chart (line, bar, scatter plots)
  - Timeline (periods, events, dates)
  - ZenUML (sequence interactions)
  - Sankey (flow diagrams, links, values)
  - Block Diagram (blocks, columns, layouts)
  - Packet (bit ranges, fields)
  - Kanban (columns, tasks, indentation)
  - Architecture (components, connections)
  - Radar (metrics, categories, values)
  - Treemap (hierarchical values, labels)
  - C4 Diagrams (Context, Container, Component, Dynamic, Deployment)
  - Requirement Diagrams (requirements, elements, relationships)
- Multiple language bindings: Rust, Node.js, Python, Go, Swift, C
- Syntax highlighting queries for Neovim, Helix, and other tree-sitter editors
- Automated CI/CD with GitHub Actions
- Weekly Mermaid spec compliance checks
- Comprehensive documentation (ARCHITECTURE.md, TESTING.md, PUBLISHING.md)
- Development tooling support (Nix, Homebrew, Make)
- Automated publishing workflows for npm, PyPI, and crates.io

### Changed
- Initial Singularity fork prepared for modern tree-sitter 0.25.x
- Updated to tree-sitter 0.25.x for latest features and improvements
- Rust edition 2021 for modern Rust features

### Infrastructure
- GitHub Actions CI pipeline with automated tests
- Nix-based reproducible development environment
- Automated spec checking against latest Mermaid.js documentation
- Multi-platform support (Ubuntu, macOS via Nix/Homebrew)

## [Earlier Versions]

This is a fork of [monaqa/tree-sitter-mermaid](https://github.com/monaqa/tree-sitter-mermaid). 
For earlier version history, please refer to the original repository.

### Credits
- Original author: [Mogami Shinichi](https://github.com/monaqa)
- Fork maintainer: [Mikael Hugo](https://github.com/mikkihugo)

---

## Release Notes Template

### [Unreleased]
#### Added
- New features and additions

#### Changed
- Changes to existing functionality

#### Deprecated
- Features marked for removal in future versions

#### Removed
- Removed features

#### Fixed
- Bug fixes

#### Security
- Security vulnerability fixes

---

[0.9.1]: https://github.com/Singularity-ng/singularity-parser-mermaid/releases/tag/v0.9.1
[0.9.0]: https://github.com/Singularity-ng/singularity-parser-mermaid/releases/tag/v0.9.0
