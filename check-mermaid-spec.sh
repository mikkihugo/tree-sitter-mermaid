#!/usr/bin/env bash
# Script to check for new Mermaid diagram types and features

set -e

echo "🔍 Checking Mermaid specification for updates..."

# Get latest Mermaid version from npm
LATEST_VERSION=$(npm view mermaid version)
echo "📦 Latest Mermaid version: $LATEST_VERSION"

# Check if we have mermaid-examples repo
if [ ! -d "mermaid-examples" ]; then
    echo "📥 Cloning Mermaid examples for reference..."
    git clone --depth 1 https://github.com/mermaid-js/mermaid.git mermaid-examples
else
    echo "🔄 Updating Mermaid examples..."
    cd mermaid-examples
    git pull --depth 1
    cd ..
fi

echo "📋 Current supported diagram types:"
grep -E "^diagram_" grammar.js | sed 's/.*diagram_\([a-z]*\).*/- \1/' | sort

echo ""
echo "🎯 Missing diagram types to implement:"
echo "- gitgraph"
echo "- userjourney"
echo "- quadrantChart"
echo "- xyChart"
echo "- timeline"
echo "- zenuml"
echo "- sankey"
echo "- block"
echo "- packet"
echo "- kanban"
echo "- architecture"
echo "- radar"
echo "- treemap"
echo "- c4"
echo "- requirement"

echo ""
echo "💡 Next steps:"
echo "1. Add corpus tests for new diagram types"
echo "2. Implement grammar rules"
echo "3. Update README.md"
echo "4. Run tests: make test"