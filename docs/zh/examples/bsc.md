# BSC C++ 示例

源码：`examples/cpp/src/bsc_example.cpp`

BSC (Block Sorting Compression) 是基于 BWT (Burrows-Wheeler Transform) 的高性能压缩库。本示例演示 libbsc 的基本压缩与解压流程。

## 构建与运行

BSC 作为可选目标，需要显式启用：

```bash
cmake -S examples/cpp -B examples/cpp/build -DAWESOME_COMPRESSION_ENABLE_BSC=ON
cmake --build examples/cpp/build
examples/cpp/build/bsc_example examples/cpp/data/sample.txt
```

## 实现要点

- 使用 `bsc_init()` 初始化库，启用默认特性（快速模式 + 多线程）
- 调用 `bsc_compress()` 执行压缩，输出缓冲区需要 `n + LIBBSC_HEADER_SIZE` 字节
- 使用 `bsc_block_info()` 获取压缩块信息以确定解压输出大小
- 调用 `bsc_decompress()` 执行解压

## 注意事项

libbsc 在某些平台可能构建失败，因此默认禁用。如遇到编译问题，可尝试：
- 检查 CMake 配置输出中的 libbsc 相关警告
- 确认目标平台是否受 libbsc 官方支持
