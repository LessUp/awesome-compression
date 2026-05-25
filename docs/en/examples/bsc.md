# BSC C++ Example

Source: `examples/cpp/src/bsc_example.cpp`

BSC (Block Sorting Compression) is a high-performance compression library based on BWT (Burrows-Wheeler Transform). This example demonstrates basic compression and decompression flow using libbsc.

## Build and Run

BSC is an optional target that must be explicitly enabled:

```bash
cmake -S examples/cpp -B examples/cpp/build -DAWESOME_COMPRESSION_ENABLE_BSC=ON
cmake --build examples/cpp/build
examples/cpp/build/bsc_example examples/cpp/data/sample.txt
```

## Implementation Highlights

- Use `bsc_init()` to initialize the library with default features (fast mode + multithreading)
- Call `bsc_compress()` to compress, output buffer needs `n + LIBBSC_HEADER_SIZE` bytes
- Use `bsc_block_info()` to get compressed block info to determine decompression output size
- Call `bsc_decompress()` to decompress

## Notes

libbsc may fail to build on some platforms, so it's disabled by default. If you encounter compilation issues:
- Check CMake configuration output for libbsc-related warnings
- Verify whether your target platform is officially supported by libbsc
