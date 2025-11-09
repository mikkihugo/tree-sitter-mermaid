# Security Policy

## Supported Versions

We release patches for security vulnerabilities in the following versions:

| Version | Supported          |
| ------- | ------------------ |
| 0.9.x   | :white_check_mark: |
| < 0.9   | :x:                |

## Reporting a Vulnerability

The Singularity tree-sitter-mermaid team takes security bugs seriously. We appreciate your efforts to responsibly disclose your findings, and will make every effort to acknowledge your contributions.

### How to Report a Security Vulnerability

**Please do not report security vulnerabilities through public GitHub issues.**

Instead, please report security vulnerabilities by emailing the maintainers:
- **Email**: [INSERT SECURITY CONTACT EMAIL]
- **Subject**: [SECURITY] Brief description of the issue

If you prefer, you can also use GitHub's private vulnerability reporting feature:
1. Go to the repository's [Security tab](https://github.com/Singularity-ng/singularity-parser-mermaid/security)
2. Click "Report a vulnerability"
3. Fill out the form with details

### What to Include

To help us understand and resolve the issue quickly, please include:

1. **Type of vulnerability** (e.g., buffer overflow, denial of service, code injection)
2. **Affected version(s)** of the parser
3. **Step-by-step instructions** to reproduce the issue
4. **Proof-of-concept or exploit code** (if possible)
5. **Mermaid diagram input** that triggers the vulnerability
6. **Impact of the vulnerability** (what an attacker could do)
7. **Suggested fix** (if you have one)

### Response Timeline

- **Initial Response**: Within 48 hours of your report
- **Status Update**: Within 7 days of your report
- **Fix Timeline**: Depends on severity and complexity
  - **Critical**: Emergency patch within 24-48 hours
  - **High**: Patch within 1-2 weeks
  - **Medium**: Patch within 4-6 weeks
  - **Low**: Included in next regular release

### What to Expect

1. **Confirmation**: We'll confirm receipt of your vulnerability report
2. **Assessment**: We'll assess the vulnerability and determine its severity
3. **Fix Development**: We'll work on a fix and keep you updated
4. **Disclosure**: Once fixed, we'll coordinate disclosure with you
5. **Credit**: We'll credit you in the security advisory (if desired)

## Security Update Process

When a security vulnerability is confirmed:

1. **Private Fix**: We develop a fix in a private repository
2. **Security Advisory**: We publish a GitHub Security Advisory
3. **Patch Release**: We release a new version with the fix
4. **Public Disclosure**: After users have had time to update, we disclose details
5. **CHANGELOG Update**: We document the fix in CHANGELOG.md

## Security Best Practices for Users

### Safe Usage

1. **Keep Updated**: Always use the latest version of the parser
2. **Validate Input**: Validate and sanitize Mermaid diagram input from untrusted sources
3. **Resource Limits**: Set timeouts and memory limits when parsing untrusted diagrams
4. **Sandboxing**: Consider running the parser in a sandboxed environment for untrusted input
5. **Error Handling**: Properly handle parsing errors and don't expose error details to untrusted users

### Known Limitations

As a parser, tree-sitter-mermaid:
- **Does not execute code** - It only parses diagram syntax into a parse tree
- **Does not render diagrams** - Rendering is handled by Mermaid.js
- **May consume resources** - Very large or deeply nested diagrams may use significant CPU/memory

### Dependency Security

This project depends on:
- **tree-sitter** (core parsing library)
- **Language-specific bindings** (Node.js, Rust, Python, etc.)

We regularly update dependencies to address known vulnerabilities. Run:
```bash
npm audit          # For Node.js dependencies
cargo audit        # For Rust dependencies (requires cargo-audit)
```

## Vulnerability Types We Care About

### In Scope

- **Denial of Service** via malformed input
- **Memory safety issues** (buffer overflows, use-after-free)
- **Infinite loops** or excessive resource consumption
- **Code injection** via grammar rules
- **Parser crashes** on valid or invalid input
- **Unexpected behavior** that could lead to security issues

### Out of Scope

The following are generally **not** considered security vulnerabilities:
- Incorrect parsing of invalid Mermaid syntax (use bug reports instead)
- Performance issues with reasonable input (use bug reports instead)
- Issues in downstream rendering (report to Mermaid.js project)
- Missing features or diagram types (use feature requests instead)

## Security Testing

We encourage security researchers to test the parser, but please:
- **Test responsibly** - Don't test against production systems you don't own
- **Use the latest version** - Test against the most recent release
- **Report findings privately** - Follow the vulnerability reporting process above

### Fuzzing

We welcome fuzzing efforts! The parser is designed to handle arbitrary input safely. If you find crashes or hangs through fuzzing, please report them.

Example fuzzing with AFL or libFuzzer:
```bash
# Example structure (implementation details may vary)
# Fuzz the tree-sitter parser with random Mermaid input
```

## Security Acknowledgments

We thank the following security researchers for responsibly disclosing vulnerabilities:

- [No vulnerabilities reported yet]

## Security-Related Configuration

### Environment Variables

No security-sensitive environment variables are used by this parser.

### Build Security

- **Reproducible builds** available via Nix
- **No binary artifacts** committed to repository
- **Build from source** encouraged for security-sensitive deployments
- **Verify releases** via GitHub release signatures (when implemented)

## Questions About Security?

If you have questions about security but don't have a specific vulnerability to report:
- Open a GitHub Discussion
- Tag it with "security"
- We'll respond publicly if appropriate, or privately if sensitive

## Policy Changes

This security policy may be updated from time to time. Check back periodically for changes.

---

**Last Updated**: November 2025

Thank you for helping keep tree-sitter-mermaid secure! 🔒
