---
layout: home
---

<div class="home-header">
  <div>
    <span class="home-title">Awesome Compression</span>
    <span class="home-subtitle">Compression Algorithm Learning Map</span>
  </div>
  <div class="home-nav">
    <a href="./guide/compression-basics">Basics</a>
    <a href="./algorithms/zstd">Algorithms</a>
    <a href="./examples/cpp-overview">C++ Examples</a>
  </div>
</div>

<div class="home-intro">
This site contains learning notes on compression and coding algorithms. The initial release focuses on ZSTD, LZMA, BSC, LZ4, zlib, and Brotli, aiming to put algorithm concepts, engineering tradeoffs, and C++ API examples in a single maintainable knowledge base.
</div>

## Recommended Learning Path

1. Start with "Compression Basics" and "Coding Models" to build shared knowledge of dictionary matching, entropy coding, context modeling, and block sorting.
2. Then compare ZSTD, LZMA, LZ4, zlib, Brotli, and BSC horizontally to form basic intuition about "speed / ratio / memory / compatibility".
3. Finally, map abstract concepts to real API calls and output results via minimal programs in `examples/cpp`.

## Algorithm Map

| Direction | Representative | What You'll Learn |
| --- | --- | --- |
| General-purpose modern | ZSTD | How to tune wide range between ratio and throughput |
| High-ratio archiving | LZMA | Benefits and costs of large window, range coding, strong modeling |
| Ultra-fast low-latency | LZ4 | Why many systems trade ratio for throughput |
| Compatibility-first | zlib | Why DEFLATE ecosystem persists |
| Web text compression | Brotli | Static dictionary and text-scenario optimization |
| Transform / block sorting | BSC | "Transform first, then encode" approach |

## Learning Entry Points

<div class="feature-map">
  <div class="feature-card">
    <div class="feature-card-title">Compression Basics</div>
    <div class="feature-card-desc">Understand entropy, dictionary, sliding window, block sorting, context modeling, and checksums.</div>
    <a class="feature-tag" href="./guide/compression-basics">Start Learning</a>
  </div>
  <div class="feature-card">
    <div class="feature-card-title">Algorithm Notes</div>
    <div class="feature-card-desc">Organized notes on core ideas and usage boundaries of ZSTD, LZMA, BSC, LZ4, zlib, Brotli.</div>
    <a class="feature-tag" href="./algorithms/zstd">View Algorithms</a>
  </div>
  <div class="feature-card">
    <div class="feature-card-title">C++ Examples</div>
    <div class="feature-card-desc">Learn compression library APIs through minimal runnable programs.</div>
    <a class="feature-tag" href="./examples/cpp-overview">Run Examples</a>
  </div>
</div>
