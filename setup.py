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
    version=version,
    packages=find_packages("bindings/python"),
    package_dir={"": "bindings/python"},
    package_data={
        "tree_sitter_mermaid": ["*.pyi", "py.typed"],
        "tree_sitter_mermaid.queries": ["*.scm"],
    },
    ext_package="tree_sitter_mermaid",
    ext_modules=[
        Extension(
            name="_binding",
            sources=[
                "bindings/python/tree_sitter_mermaid/binding.c",
                "src/parser.c",
                "src/scanner.c",
            ],
            extra_compile_args=(
                ["-std=c11"] if system() != 'Windows' else []
            ),
            define_macros=[
                ("Py_LIMITED_API", "0x03080000"),
                ("PY_SSIZE_T_CLEAN", None)
            ],
            include_dirs=["src"],
            py_limited_api=True,
        )
    ],
    cmdclass={
        "build": Build,
        "bdist_wheel": BdistWheel
    },
    zip_safe=False
)
