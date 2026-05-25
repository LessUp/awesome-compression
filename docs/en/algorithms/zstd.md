# ZSTD

Zstandard is a modern lossless compression algorithm designed for general-purpose scenarios, aiming to provide a wide tunable balance between high compression ratio and high speed.

## Core Idea

ZSTD combines dictionary matching and entropy coding. It supports multiple compression levels, with low levels suitable for real-time data pipelines and high levels suitable for archiving.

## How to Understand Its Internal Process

You can roughly view ZSTD as:

```text
find repeated segments -> generate sequences -> entropy encode -> pack into frame
```

Its advantage isn't just "compresses well", but allowing you to continuously tune from real-time to archival within one ecosystem.

## Engineering Tradeoffs

| Dimension | Characteristic |
| --- | --- |
| Compression speed | Tunable from very fast to slower |
| Decompression speed | Usually very fast |
| Compression ratio | Stable performance on general data |
| Memory | Increases with compression level |
| Streaming | Supported |

## Common Engineering Characteristics

- Supports frame format, suitable for files and streaming.
- Supports dictionary training, especially useful for many similar small objects.
- Low levels are often used as system default compression due to good overall balance.

## Suitable Scenarios

- Log compression
- Data pipelines
- Local caches
- Archival tasks with tunable compression levels

## What to Look at First When Tuning

1. **Compression level**: The most direct speed/ratio knob.
2. **Whether to enable dictionary**: Can have huge benefit for small text and short messages.
3. **Whether streaming**: Affects buffer and integration approach.

## Common Pitfalls

- Drawing conclusions after testing default level once, easily underestimating its tunable range.
- Comparing with already compressed data, results often have no reference value.
- Ignoring dictionary training, missing its advantage on "small and similar data".

## C++ Example

See [ZSTD C++ Example](/en/examples/zstd).
