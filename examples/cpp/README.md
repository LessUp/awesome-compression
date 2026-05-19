# C++ Compression Examples

Each example reads an input file, compresses it, decompresses it, and verifies the decompressed bytes match the original input.

## Build

```bash
cmake -S examples/cpp -B examples/cpp/build -DCMAKE_BUILD_TYPE=Release
cmake --build examples/cpp/build
```

## Run smoke tests

```bash
ctest --test-dir examples/cpp/build --output-on-failure
```

## Optional BSC

BSC is disabled by default because upstream build integration may vary by platform. Try enabling it with:

```bash
cmake -S examples/cpp -B examples/cpp/build -DAWESOME_COMPRESSION_ENABLE_BSC=ON
```
