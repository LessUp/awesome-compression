# C++ Examples Overview

`examples/cpp` provides a set of minimal runnable examples. Each example follows the same loop:

```text
read input -> compress -> decompress -> verify
```

## Build

```bash
cmake -S examples/cpp -B examples/cpp/build -DCMAKE_BUILD_TYPE=Release
cmake --build examples/cpp/build
ctest --test-dir examples/cpp/build --output-on-failure
```

## Output Format

```text
zstd
input_bytes=...
compressed_bytes=...
ratio=...
verified=true
```

## These Examples Deliberately Stay "Minimal Loop"

They are not performance benchmarks, nor complete SDK wrappers, but help you see three things:

1. What the most basic buffer API of a compression library looks like.
2. What input/output buffers are needed for compression and decompression.
3. Why any learning example should explicitly verify round-trip correctness.

## What to Focus on When Reading Examples

| Focus Point | Description |
| --- | --- |
| How input is read | Examples uniformly read byte array from file |
| How compression buffer is allocated | Most libraries need to estimate upper bound first |
| How decompression output size is determined | Some can get from frame, some require caller to know |
| How error codes are handled | Examples uniformly throw exceptions on failure |
| How results are verified | Uniformly compare original and restored bytes |

## About BSC Example

BSC is supported as an optional build target. It demonstrates real compression using libbsc's block sorting approach. Note that libbsc may have build issues on some platforms, so it's disabled by default.

## Example List

- [ZSTD](./zstd)
- [LZMA](./lzma)
- [BSC](./bsc)
- [LZ4](./lz4)
- [zlib](./zlib)
- [Brotli](./brotli)
