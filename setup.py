"""
tree-sitter-mermaid Python bindings setup script.

This script builds the Python package for tree-sitter-mermaid, which provides
Python bindings for parsing Mermaid diagram syntax using the tree-sitter library.

OVERVIEW:
---------
The package contains a C extension module (_binding) that wraps the auto-generated
parser from grammar.js. The C extension is built using the Python C API with the
stable ABI (PY_LIMITED_API) for compatibility across Python 3.8+.

BUILD PROCESS:
--------------
1. Reads package version from pyproject.toml (single source of truth)
2. Compiles C source files (parser.c, scanner.c) into _binding extension module
3. Copies tree-sitter query files (*.scm) for syntax highlighting
4. Creates a wheel distribution with stable ABI tag (cp38-abi3)

DEPENDENCIES:
-------------
- setuptools: Build system and packaging
- wheel: Wheel distribution format
- tomllib (Python 3.11+) or tomli (fallback): TOML configuration parsing
- Python 3.8+: Required for stable ABI support

USAGE:
------
Build and install:
    pip install .

Build wheel:
    python -m build

Development install:
    pip install -e .
"""

from os.path import isdir, join
from platform import system
import tomllib

from setuptools import Extension, find_packages, setup
from setuptools.command.build import build
from wheel.bdist_wheel import bdist_wheel

# Read version from pyproject.toml (single source of truth)
# This ensures version is maintained in one place and shared across package metadata
with open("pyproject.toml", "rb") as f:
    pyproject = tomllib.load(f)
    version = pyproject["project"]["version"]


class Build(build):
    """Custom build command that copies tree-sitter query files.

    Tree-sitter queries (*.scm files) provide syntax highlighting rules,
    code navigation patterns, and other editor features. This custom build
    step ensures queries/ directory is included in the built package.

    PROCESS:
    --------
    1. Run standard build process
    2. If queries/ directory exists, copy it to build output
    3. Queries are installed alongside Python module for runtime access

    FILES COPIED:
    -------------
    - queries/highlights.scm: Syntax highlighting rules
    - queries/locals.scm: Scope and definition queries (if present)
    - queries/injections.scm: Language injection patterns (if present)
    """

    def run(self):
        # Copy tree-sitter query files to build output
        # These files define syntax highlighting and editor integration patterns
        if isdir("queries"):
            dest = join(self.build_lib, "tree_sitter_mermaid", "queries")
            self.copy_tree("queries", dest)

        # Continue with standard build process
        super().run()


class BdistWheel(bdist_wheel):
    """Custom wheel builder that sets stable ABI tags.

    This ensures the built wheel uses Python's stable ABI (Application Binary
    Interface) allowing a single wheel to work across multiple Python versions.

    STABLE ABI BENEFITS:
    --------------------
    - Single wheel works for Python 3.8, 3.9, 3.10, 3.11, 3.12+
    - Reduces package size on PyPI (fewer platform-specific builds)
    - Simplifies distribution and maintenance

    TAG FORMAT:
    -----------
    Standard: cp311-cp311-linux_x86_64 (specific to Python 3.11)
    Stable ABI: cp38-abi3-linux_x86_64 (works for Python 3.8+)

    The 'cp38' indicates minimum Python version (3.8)
    The 'abi3' indicates stable ABI usage
    """

    def get_tag(self):
        # Get default tag from parent class
        python, abi, platform = super().get_tag()

        # If building for CPython, use stable ABI tag
        # This allows the same wheel to work across Python 3.8+
        if python.startswith("cp"):
            python, abi = "cp38", "abi3"

        return python, abi, platform


setup(
    # Package version (read from pyproject.toml above)
    version=version,

    # Python package discovery
    # Finds all packages under bindings/python/ directory
    packages=find_packages("bindings/python"),
    package_dir={"": "bindings/python"},

    # Additional files to include in package
    package_data={
        "tree_sitter_mermaid": [
            "*.pyi",      # Type stub files for static type checking
            "py.typed",   # Marker file indicating package supports type checking
        ],
        "tree_sitter_mermaid.queries": [
            "*.scm",      # Tree-sitter query files (syntax highlighting, etc.)
        ],
    },

    # C extension configuration
    ext_package="tree_sitter_mermaid",  # Extension installed under tree_sitter_mermaid/
    ext_modules=[
        Extension(
            # Extension module name (_binding.so or _binding.pyd)
            # Imported as: from tree_sitter_mermaid import _binding
            name="_binding",

            # C source files to compile
            sources=[
                "bindings/python/tree_sitter_mermaid/binding.c",  # Python C API wrapper
                "src/parser.c",   # Auto-generated parser from grammar.js
                "src/scanner.c",  # External scanner for context-aware tokenization
            ],

            # Compiler flags
            # Use C11 standard on Unix-like systems (Linux, macOS)
            # Windows MSVC has different default behavior, no explicit standard needed
            extra_compile_args=(
                ["-std=c11"] if system() != 'Windows' else []
            ),

            # Preprocessor macros
            define_macros=[
                # Enable Python stable ABI (Application Binary Interface)
                # 0x03080000 = Python 3.8.0 minimum version (hex: 3.8.0.0)
                # This ensures compatibility across Python 3.8, 3.9, 3.10, 3.11, 3.12+
                ("Py_LIMITED_API", "0x03080000"),

                # Clean handling of size_t types in Python C API
                # Recommended for all Python C extensions
                ("PY_SSIZE_T_CLEAN", None)
            ],

            # Include directories for C compiler
            # src/ contains parser.h and tree_sitter/parser.h
            include_dirs=["src"],

            # Enable stable ABI compilation mode
            # When True, setuptools uses limited API subset for forward compatibility
            py_limited_api=True,
        )
    ],

    # Custom build commands
    cmdclass={
        "build": Build,              # Custom build to copy query files
        "bdist_wheel": BdistWheel    # Custom wheel builder for stable ABI tags
    },

    # Disable zip packaging (required for C extensions)
    # C extension modules (.so/.pyd) cannot be loaded from zip files
    zip_safe=False
)
