// Cargo build script for tree-sitter-mermaid Rust bindings
//
// This script is executed before the main crate compilation by the Rust build
// system. It handles compilation of the C source code (auto-generated parser
// and external scanner) into a static library that gets linked into the final
// Rust binary.
//
// BUILD PROCESS:
// 1. Configures C compiler with appropriate flags
// 2. Compiles src/parser.c (generated from grammar.js)
// 3. Compiles src/scanner.c (external C scanner for context-aware tokenization)
// 4. Links compiled object files into static library "parser"
// 5. Sets up dependency tracking to rebuild when source files change
//
// DEPENDENCIES:
// - cc crate: Used to compile C code from Rust
// - Requires C11 standard compliance
//
// For more information, see:
// - Cargo build scripts: https://doc.rust-lang.org/cargo/build-scripts/

fn main() {
    let src_dir = std::path::Path::new("src");

    // Configure the C compiler
    let mut c_config = cc::Build::new();
    c_config.include(&src_dir);

    // Compiler flags for compatibility and warnings
    // These flags suppress warnings that are common in auto-generated parser code
    c_config
        .flag_if_supported("-Wno-unused-parameter")      // Parser has unused params
        .flag_if_supported("-Wno-unused-but-set-variable") // Auto-generated code artifacts
        .flag_if_supported("-Wno-trigraphs");             // Avoid trigraph interpretation

    // Windows MSVC specific flag for UTF-8 source handling
    #[cfg(target_env = "msvc")]
    c_config.flag("-utf-8");

    // Compile the auto-generated parser
    // Generated from grammar.js by: npm run generate
    let parser_path = src_dir.join("parser.c");
    c_config.file(&parser_path);

    // Compile the external scanner for context-aware token handling
    // The scanner distinguishes the 'o' token in class diagram aggregation
    // from the letter 'o' in regular text. See src/scanner.c for details.
    let scanner_path = src_dir.join("scanner.c");
    c_config.file(&scanner_path);
    println!("cargo:rerun-if-changed={}", scanner_path.to_str().unwrap());

    // Link the compiled C code into a static library named "parser"
    // This library will be linked into the final Rust binary
    c_config.compile("parser");

    // Tell Cargo to re-run this build script if parser.c changes
    // This ensures the parser is recompiled after running: npm run generate
    println!("cargo:rerun-if-changed={}", parser_path.to_str().unwrap());

    // C++ SCANNER SUPPORT (Optional)
    //
    // If your grammar uses an external scanner written in C++ instead of C,
    // uncomment this block. For tree-sitter-mermaid, we use C scanner, so
    // this is left as a reference for future maintainers.
    //
    // Note: Requires C++ compiler and appropriate C++ flags.
    //
    // /*
    // let mut cpp_config = cc::Build::new();
    // cpp_config.cpp(true);  // Enable C++ mode
    // cpp_config.include(&src_dir);
    // cpp_config
    //     .flag_if_supported("-Wno-unused-parameter")
    //     .flag_if_supported("-Wno-unused-but-set-variable");
    // let scanner_path = src_dir.join("scanner.cc");
    // cpp_config.file(&scanner_path);
    // cpp_config.compile("scanner");  // Compiles as separate "scanner" library
    // println!("cargo:rerun-if-changed={}", scanner_path.to_str().unwrap());
    // */
}
