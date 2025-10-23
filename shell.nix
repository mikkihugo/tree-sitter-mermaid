{ pkgs ? import (fetchTarball "https://github.com/NixOS/nixpkgs/archive/nixos-24.05.tar.gz") {} }:

pkgs.mkShell {
  buildInputs = [
    pkgs.gcc
    pkgs.python3
    pkgs.nodejs
    pkgs.rustc
    pkgs.cargo
    pkgs.go
    pkgs.swift
    pkgs.tree-sitter
    pkgs.pkg-config
    pkgs.makeWrapper
    pkgs.gnumake
    pkgs.git
    pkgs.python3Packages.setuptools
    pkgs.python3Packages.wheel
    pkgs.nodePackages.node-gyp
  ];

  shellHook = ''
    echo "Nix shell loaded: C/C++, Python, Node.js, Rust, Go, Swift, tree-sitter, pkg-config, make, git, setuptools, wheel, node-gyp."
  '';
}
