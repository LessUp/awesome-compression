# BSC C++ 示例

源码：`examples/cpp/src/bsc_example.cpp`

BSC 默认作为可选目标。首版保留可构建占位示例，后续可在目标平台验证 libbsc 构建方式后替换为真实压缩调用。

```bash
cmake -S examples/cpp -B examples/cpp/build -DAWESOME_COMPRESSION_ENABLE_BSC=ON
```
