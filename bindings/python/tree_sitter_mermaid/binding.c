/**
 * @file binding.c
 * @brief Python C extension for tree-sitter-mermaid language bindings
 *
 * This module provides a thin Python wrapper around the tree-sitter-mermaid
 * C library. It exposes a single function `language()` that returns a pointer
 * to the TSLanguage object for Mermaid diagrams.
 *
 * ARCHITECTURE:
 * -------------
 * The extension is built using Python's stable ABI (Py_LIMITED_API), ensuring
 * compatibility across multiple Python versions (3.8+). This allows a single
 * compiled binary to work with Python 3.8, 3.9, 3.10, 3.11, 3.12, etc.
 *
 * MODULE STRUCTURE:
 * -----------------
 * - _binding module (this file)
 *   └── language() function → Returns TSLanguage* as Python integer
 *
 * The returned pointer is then used by py-tree-sitter to construct a Language
 * object that can be set on a Parser instance.
 *
 * PYTHON USAGE:
 * -------------
 * >>> from tree_sitter_mermaid import language
 * >>> lang = language()  # Returns the TSLanguage* as an opaque Python object
 * >>> parser.set_language(lang)
 *
 * BUILD PROCESS:
 * --------------
 * This file is compiled by setup.py along with:
 * - src/parser.c (auto-generated from grammar.js)
 * - src/scanner.c (external scanner for class diagram 'o' token)
 *
 * The result is a native extension module: _binding.so (Linux) or _binding.pyd (Windows)
 *
 * STABLE ABI:
 * -----------
 * The extension uses Py_LIMITED_API to ensure forward compatibility. This means:
 * - Only stable, versioned Python C API functions are used
 * - Binary works across Python 3.8+ without recompilation
 * - Reduced package size on PyPI (fewer platform-specific wheels)
 *
 * REFERENCES:
 * -----------
 * - Python C API: https://docs.python.org/3/c-api/
 * - Stable ABI: https://docs.python.org/3/c-api/stable.html
 * - Tree-sitter: https://tree-sitter.github.io/tree-sitter/
 */

#include <Python.h>

// Forward declaration of the TSLanguage struct from tree-sitter
typedef struct TSLanguage TSLanguage;

// External function from the tree-sitter-mermaid C library
// Defined in src/parser.c (auto-generated)
TSLanguage *tree_sitter_mermaid(void);

/**
 * Python wrapper function for tree_sitter_mermaid()
 *
 * Returns the tree-sitter language object for Mermaid as a Python integer
 * (which represents a void pointer in Python's ctypes system).
 *
 * The py-tree-sitter library knows how to convert this integer back into
 * a Language object that can be used for parsing.
 *
 * @param self Module object (unused)
 * @param args Argument tuple (unused - this function takes no arguments)
 * @returns PyLong containing the TSLanguage* pointer value
 */
static PyObject* _binding_language(PyObject *self, PyObject *args) {
    // Get the language pointer from the C library
    TSLanguage *lang = tree_sitter_mermaid();

    // Convert the C pointer to a Python integer
    // This is safe because py-tree-sitter knows how to handle these pointers
    return PyLong_FromVoidPtr(lang);
}

/**
 * Method table for the _binding module
 *
 * Defines all Python-callable functions exposed by this extension.
 * Currently only exposes the `language()` function.
 */
static PyMethodDef methods[] = {
    {
        "language",                           // Function name in Python
        _binding_language,                    // C implementation
        METH_NOARGS,                          // Takes no arguments
        "Get the tree-sitter language for this grammar."  // Docstring
    },
    {NULL, NULL, 0, NULL}  // Sentinel marking end of method list
};

/**
 * Module definition structure
 *
 * Defines the _binding module with its methods and metadata.
 */
static struct PyModuleDef module = {
    .m_base = PyModuleDef_HEAD_INIT,
    .m_name = "_binding",                   // Module name (import _binding)
    .m_doc = NULL,                          // Module docstring (none needed, see __init__.py)
    .m_size = -1,                           // No per-interpreter state
    .m_methods = methods                    // Method table
};

/**
 * Module initialization function
 *
 * Called by Python when the module is imported. Creates and returns the
 * module object with the language() function attached.
 *
 * @returns New module object or NULL on error
 */
PyMODINIT_FUNC PyInit__binding(void) {
    return PyModule_Create(&module);
}
