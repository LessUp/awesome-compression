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

## 这些示例刻意保持“最小闭环”

它们不是性能 benchmark，也不是完整 SDK 封装，而是用来帮助你看清三件事：

1. 一个压缩库最基础的 buffer API 长什么样。
2. 压缩和解压分别需要哪些输入 / 输出缓冲区。
3. 为什么任何学习示例都应该显式校验 round-trip 正确性。

## 阅读示例时建议关注什么

| 关注点 | 说明 |
| --- | --- |
| 输入如何读入 | 示例统一从文件读入字节数组 |
| 压缩缓冲区如何分配 | 多数库都需要先估算上界 |
| 解压输出大小如何确定 | 有的库能从 frame 获取，有的需要调用方自己知道 |
| 错误码如何处理 | 示例统一在失败时直接抛出异常 |
| 结果如何验证 | 统一比较原始字节和恢复字节 |

## 为什么 BSC 还是占位示例

当前仓库已经支持把 BSC 作为可选目标构建，但文档仍然把它当作“学习构建接入和占位接口”的示例。  
原因不是它不重要，而是不同平台对上游构建和链接方式更敏感，后续更适合基于真实目标平台继续深化。

## 示例列表

- [ZSTD](./zstd)
- [LZMA](./lzma)
- [BSC](./bsc)
- [LZ4](./lz4)
- [zlib](./zlib)
- [Brotli](./brotli)
