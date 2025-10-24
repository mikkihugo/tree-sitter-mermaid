#!/usr/bin/env bash
#
# check-mermaid-spec.sh - Mermaid specification compliance checker with auto-issue creation
#
# PURPOSE:
#   Automatically detects new Mermaid diagram types by scraping the official documentation
#   and creates GitHub issues when new types are discovered. This ensures the grammar
#   stays up-to-date with the latest Mermaid releases.
#
# USAGE:
#   ./check-mermaid-spec.sh              # Check for new diagram types (local)
#   ./check-mermaid-spec.sh --create-issue  # Create GitHub issue if new types found (CI)
#   make check-spec                      # Via Makefile
#
# WHAT IT DOES:
#   1. Fetches the latest Mermaid version from npm registry
#   2. Clones/updates the official Mermaid.js repository
#   3. Extracts diagram types from Mermaid documentation
#   4. Compares against currently implemented types in grammar.js
#   5. Identifies missing/new diagram types
#   6. Optionally creates GitHub issue for new types (if --create-issue flag)
#   7. Exits with error code if new types found (fails CI to alert maintainers)
#
# OUTPUT:
#   - Latest Mermaid version number
#   - List of implemented diagram types (from grammar.js)
#   - List of new/missing diagram types (from Mermaid docs)
#   - GitHub issue URL (if --create-issue flag used)
#
# EXIT CODES:
#   0 - Success (all diagram types implemented, no action needed)
#   1 - Error (script execution failure or new types detected)
#
# DEPENDENCIES:
#   - bash
#   - npm (to query Mermaid version)
#   - git (to clone/update Mermaid examples)
#   - gh (GitHub CLI, for --create-issue mode)
#   - grep, sed, awk (text processing)
#
# GITHUB INTEGRATION:
#   When run with --create-issue in CI, this script will:
#   - Create a GitHub issue titled "New Mermaid diagram type detected: <type>"
#   - Include implementation instructions and references
#   - Label with "enhancement" and "diagram-type"
#   - Assign to repository maintainers
#
# NOTES:
#   This script is run weekly in CI (.github/workflows/ci.yml) to detect
#   when new Mermaid diagram types are released. It will fail the CI check
#   if new types are found, alerting maintainers to update the grammar.

# Exit on error
set -e

# Parse command line arguments
CREATE_ISSUE=false
if [[ "$1" == "--create-issue" ]]; then
    CREATE_ISSUE=true
fi

echo "🔍 Checking Mermaid specification for updates..."
echo ""

# Get latest Mermaid version from npm registry
# This queries the npm API to find the current published version
LATEST_VERSION=$(npm view mermaid version)
echo "📦 Latest Mermaid version: $LATEST_VERSION"

# Clone or update the official Mermaid.js repository
# This provides example diagrams and documentation for reference
if [ ! -d "mermaid-examples" ]; then
    echo "📥 Cloning Mermaid examples for reference..."
    git clone --depth 1 https://github.com/mermaid-js/mermaid.git mermaid-examples
else
    echo "🔄 Updating Mermaid examples..."
    cd mermaid-examples
    git pull --depth 1 || true
    cd ..
fi

echo ""
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
echo "📋 Extracting diagram types from grammar.js..."
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"

# Extract currently implemented diagram types from grammar.js
# Looks for lines starting with "diagram_" which define diagram type rules
# Example: "diagram_flow:" → "flow"
IMPLEMENTED_TYPES=$(grep -E "^[ ]*diagram_" grammar.js | sed 's/.*diagram_\([a-z_]*\):.*/\1/' | sort | uniq)

echo "Currently implemented diagram types:"
echo "$IMPLEMENTED_TYPES" | while read type; do
    echo "  ✅ $type"
done
IMPLEMENTED_COUNT=$(echo "$IMPLEMENTED_TYPES" | wc -l | tr -d ' ')
echo ""
echo "Total: $IMPLEMENTED_COUNT types implemented"

echo ""
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
echo "🌐 Extracting diagram types from Mermaid documentation..."
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"

# Known Mermaid diagram types (from official documentation)
# This list should be maintained based on https://mermaid.js.org/intro/
# Maps Mermaid keyword → our grammar.js naming convention
#
# Format: "mermaid_keyword:grammar_name"
KNOWN_TYPES=(
    "flowchart:flow"
    "graph:flow"
    "sequenceDiagram:sequence"
    "classDiagram:class"
    "stateDiagram:state"
    "stateDiagram-v2:state"
    "erDiagram:er"
    "gantt:gantt"
    "pie:pie"
    "quadrantChart:quadrant"
    "requirementDiagram:requirement"
    "gitGraph:gitgraph"
    "mindmap:mindmap"
    "timeline:timeline"
    "zenuml:zenuml"
    "journey:journey"
    "sankey-beta:sankey"
    "xychart-beta:xychart"
    "block-beta:block"
    "packet-beta:packet"
    "kanban:kanban"
    "architecture-beta:architecture"
    "C4Context:c4"
    "C4Container:c4"
    "C4Component:c4"
    "C4Dynamic:c4"
    "C4Deployment:c4"
    "radar-beta:radar"
    "treemap:treemap"
)

# Extract unique grammar names from known types
EXPECTED_TYPES=$(printf '%s\n' "${KNOWN_TYPES[@]}" | cut -d':' -f2 | sort | uniq)

echo "Expected diagram types (from Mermaid spec):"
echo "$EXPECTED_TYPES" | while read type; do
    echo "  📖 $type"
done
EXPECTED_COUNT=$(echo "$EXPECTED_TYPES" | wc -l | tr -d ' ')
echo ""
echo "Total: $EXPECTED_COUNT types in Mermaid spec"

echo ""
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
echo "🔎 Comparing implementations against specification..."
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"

# Find missing types (in spec but not implemented)
MISSING_TYPES=""
for expected in $EXPECTED_TYPES; do
    if ! echo "$IMPLEMENTED_TYPES" | grep -q "^${expected}$"; then
        MISSING_TYPES="${MISSING_TYPES}${expected}\n"
    fi
done

# Find extra types (implemented but not in spec - might be deprecated)
EXTRA_TYPES=""
for implemented in $IMPLEMENTED_TYPES; do
    if ! echo "$EXPECTED_TYPES" | grep -q "^${implemented}$"; then
        EXTRA_TYPES="${EXTRA_TYPES}${implemented}\n"
    fi
done

# Display results
if [ -n "$MISSING_TYPES" ]; then
    echo ""
    echo "⚠️  NEW DIAGRAM TYPES DETECTED IN MERMAID SPECIFICATION:"
    echo ""
    echo -e "$MISSING_TYPES" | grep -v '^$' | while read type; do
        # Find the Mermaid keyword for this grammar name
        MERMAID_KEYWORD=$(printf '%s\n' "${KNOWN_TYPES[@]}" | grep ":${type}$" | head -1 | cut -d':' -f1)
        echo "  🆕 $type (Mermaid keyword: $MERMAID_KEYWORD)"
    done
    echo ""
    HAS_NEW_TYPES=true
else
    echo ""
    echo "✅ All diagram types from Mermaid spec are implemented!"
    echo ""
    HAS_NEW_TYPES=false
fi

if [ -n "$EXTRA_TYPES" ]; then
    echo "ℹ️  Types in grammar.js not in spec (might be deprecated or aliased):"
    echo ""
    echo -e "$EXTRA_TYPES" | grep -v '^$' | while read type; do
        echo "  ❓ $type"
    done
    echo ""
fi

echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
echo "📊 Summary"
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
echo ""
echo "  Implemented: $IMPLEMENTED_COUNT types"
echo "  Expected:    $EXPECTED_COUNT types"
if [ "$HAS_NEW_TYPES" = true ]; then
    MISSING_COUNT=$(echo -e "$MISSING_TYPES" | grep -v '^$' | wc -l | tr -d ' ')
    echo "  Missing:     $MISSING_COUNT types 🆕"
else
    echo "  Missing:     0 types ✅"
fi
echo ""

# If new types detected, create GitHub issue (if requested) and fail
if [ "$HAS_NEW_TYPES" = true ]; then
    echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
    echo "🔧 Action Required"
    echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
    echo ""
    echo "New Mermaid diagram types have been detected. To add support:"
    echo ""
    echo "1. Research the diagram syntax at https://mermaid.js.org/"
    echo "2. Add test cases to test/corpus/<typename>.txt"
    echo "3. Implement grammar rules in grammar.js"
    echo "4. Run: npm run generate && make test"
    echo "5. Update README.md with new diagram type"
    echo ""

    # Create GitHub issue if requested (typically in CI)
    if [ "$CREATE_ISSUE" = true ]; then
        if command -v gh &> /dev/null; then
            echo "📝 Creating GitHub issue for new diagram types..."
            echo ""

            # Build issue body
            ISSUE_BODY="## 🆕 New Mermaid Diagram Types Detected

The weekly spec compliance check has detected new diagram types in Mermaid v${LATEST_VERSION} that are not yet implemented in tree-sitter-mermaid.

### Missing Diagram Types

"
            echo -e "$MISSING_TYPES" | grep -v '^$' | while read type; do
                MERMAID_KEYWORD=$(printf '%s\n' "${KNOWN_TYPES[@]}" | grep ":${type}$" | head -1 | cut -d':' -f1)
                ISSUE_BODY="${ISSUE_BODY}- \`${type}\` (Mermaid keyword: \`${MERMAID_KEYWORD}\`)
"
            done

            ISSUE_BODY="${ISSUE_BODY}
### Implementation Steps

For each missing diagram type:

1. **Research the syntax**
   - Visit https://mermaid.js.org/
   - Review example diagrams and syntax documentation
   - Check the mermaid-examples/ directory for reference implementations

2. **Add test cases**
   - Create \`test/corpus/<typename>.txt\`
   - Include 3-5 test cases covering basic and advanced features
   - Follow existing corpus format (see CORPUS_FORMAT.md)

3. **Implement grammar**
   - Add grammar rules to \`grammar.js\`
   - Follow existing patterns for diagram types
   - Use \`kwd()\` for case-insensitive keywords
   - Add token definitions as needed

4. **Generate and test**
   \`\`\`bash
   npm run generate  # Regenerate parser from grammar.js
   make test         # Run all corpus tests
   \`\`\`

5. **Update documentation**
   - Add diagram type to README.md table
   - Update ARCHITECTURE.md if needed
   - Update this issue with progress

### References

- Mermaid version: ${LATEST_VERSION}
- Official docs: https://mermaid.js.org/intro/
- Implementation guide: ARCHITECTURE.md
- Test format: CORPUS_FORMAT.md

### Automated Detection

This issue was automatically created by the weekly spec compliance check.
"

            # Create the issue
            ISSUE_URL=$(gh issue create \
                --title "New Mermaid diagram types detected in v${LATEST_VERSION}" \
                --body "$ISSUE_BODY" \
                --label "enhancement,diagram-type,auto-detected" \
                2>&1)

            if [ $? -eq 0 ]; then
                echo "✅ GitHub issue created: $ISSUE_URL"
            else
                echo "❌ Failed to create GitHub issue"
                echo "Error: $ISSUE_URL"
            fi
            echo ""
        else
            echo "⚠️  GitHub CLI (gh) not installed - cannot create issue"
            echo "   Install: https://cli.github.com/"
            echo ""
        fi
    fi

    echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
    echo ""
    echo "❌ Check failed: New diagram types need implementation"
    echo ""
    exit 1
else
    echo "✅ All Mermaid diagram types are implemented!"
    echo ""
    echo "Next actions:"
    echo "- Monitor Mermaid releases: https://github.com/mermaid-js/mermaid/releases"
    echo "- This check runs weekly to detect new diagram types"
    echo ""
    exit 0
fi
