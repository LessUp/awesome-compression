# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

## [1.0.0] - 2026-05-22

### Added

- VitePress documentation site with Chinese-first content
- Compression learning guides:
  - Compression basics
  - Coding models (Huffman, LZ77, BWT)
  - Algorithm selection guide
- Algorithm notes for 6 compression libraries:
  - ZSTD
  - LZMA
  - BSC
  - LZ4
  - zlib
  - Brotli
- Comparison matrix and scenario-based algorithm selection
- C++17 compression examples with CMake build system
- GitHub Actions CI/CD workflows:
  - Documentation deployment to GitHub Pages
  - C++ build and test automation

### Changed

- Enriched algorithm notes with engineering insights and practical learning paths

### Fixed

- Optional BSC linking for cross-platform compatibility
- Temporary CMake build directories now properly gitignored

### Documentation

- Added C++ example usage documentation
- Clarified BSC example placeholder status

## [0.1.0] - 2026-05-19

### Added

- Initial project structure
- VitePress documentation scaffold
- C++ example project skeleton
- Basic compression examples for ZSTD, LZMA, LZ4, zlib, Brotli
- BSC placeholder example

[Unreleased]: https://github.com/LessUp/awesome-compression/compare/v1.0.0...HEAD
[1.0.0]: https://github.com/LessUp/awesome-compression/compare/v0.1.0...v1.0.0
[0.1.0]: https://github.com/LessUp/awesome-compression/releases/tag/v0.1.0
