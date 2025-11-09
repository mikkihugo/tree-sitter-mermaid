# Agent Instructions

All files in this repository fall under the scope of this instruction set.

- Always refresh language-specific dependencies before running tests:
  - `npm install`
  - `cargo update` (or `cargo fetch` when pinned)
  - `python -m pip install -e .` (plus extras when required)
  - `(cd bindings/go && go get ./...)` to update Go modules as needed
  - `swift package resolve`
- After installing dependencies, run the full test matrix locally:
  - `npm test`
  - `cargo test`
  - `(cd bindings/go && go test ./...)`
  - `python -m pytest`
  - `swift test`
- Fail the task if any dependency refresh or test step cannot be completed successfully; do not skip steps without documenting the exact failure reason.
- Keep the Go binding (`bindings/go`) tracked and up to date in version control.
