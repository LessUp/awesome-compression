# C++ 示例总览

`examples/cpp` 提供一组最小可运行示例。每个示例都遵循相同闭环：

```text
read input -> compress -> decompress -> verify
```

## 构建

```bash
cmake -S examples/cpp -B examples/cpp/build -DCMAKE_BUILD_TYPE=Release
cmake --build examples/cpp/build
ctest --test-dir examples/cpp/build --output-on-failure
```

## 输出格式

```text
zstd
input_bytes=...
compressed_bytes=...
ratio=...
verified=true
```

## 示例列表

- [ZSTD](./zstd)
- [LZMA](./lzma)
- [BSC](./bsc)
- [LZ4](./lz4)
- [zlib](./zlib)
- [Brotli](./brotli)
