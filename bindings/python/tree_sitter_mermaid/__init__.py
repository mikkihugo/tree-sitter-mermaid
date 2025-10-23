"""
Tree-sitter Python bindings for the Mermaid diagram language

This package provides language bindings for parsing Mermaid diagram syntax
using the tree-sitter parsing library. Mermaid is a JavaScript-based diagramming
and charting tool that uses markdown-inspired syntax to create and modify diagrams.

Supported diagram types (23 total):
- Flowcharts/Graphs (graph, flowchart with TD, LR, RL, BT directions)
- Sequence Diagrams
- Class Diagrams
- State Diagrams
- Entity Relationship (ER) Diagrams
- Gantt Charts
- Git Graphs
- Pie Charts
- Mind Maps
- User Journey
- Quadrant Charts
- XY Charts
- Timelines
- ZenUML
- Sankey Diagrams
- Block Diagrams
- Packet Diagrams
- Kanban Boards
- Architecture Diagrams
- Radar Charts
- Treemaps
- C4 Diagrams (Context, Container, Component, Dynamic, Deployment)
- Requirement Diagrams

Installation:
    pip install tree-sitter-mermaid

Quick Start Example:
    import tree_sitter
    from tree_sitter_mermaid import language

    # Create a parser and set the Mermaid language
    parser = tree_sitter.Parser()
    parser.set_language(language())

    # Parse a simple flowchart
    mermaid_code = '''
    graph TD
        A[Start] --> B{Decision}
        B -->|Yes| C[Process A]
        B -->|No| D[Process B]
        C --> E[End]
        D --> E
    '''

    tree = parser.parse(mermaid_code.encode('utf-8'))

    # Access the parse tree
    print(tree.root_node)
    print(tree.root_node.child_count)

Advanced Usage:
    # Query the parse tree using S-expressions
    query = parser.language.query('''
        (flow_node
            (flow_vertex
                (flow_vertex_id) @node_name))
    ''')

    captures = query.captures(tree.root_node)
    for node, name in captures:
        print(f"Node: {node.text.decode('utf-8')}")

Related Documentation:
    - Mermaid syntax: https://mermaid.js.org/
    - Tree-sitter docs: https://tree-sitter.github.io/tree-sitter/
    - Tree-sitter Python bindings: https://github.com/tree-sitter/py-tree-sitter

Module Contents:
    language() -> Language
        Returns the tree-sitter Language object for parsing Mermaid diagrams.
        This object should be set on a tree-sitter Parser using parser.set_language()
"""

from ._binding import language

__all__ = ["language"]
