# 场景选型

## 日志和数据管道

优先考虑 ZSTD 或 LZ4。ZSTD 提供更好的压缩率和可调级别，LZ4 更适合极低延迟路径。

## 长期归档

优先考虑 LZMA 或 ZSTD 高级别。如果数据偏 Web 文本资源，也可以比较 Brotli。

## Web 内容

优先考虑 Brotli 和 zlib。Brotli 更适合现代浏览器环境，zlib/gzip 兼容性更强。

## 嵌入式或低资源环境

优先关注内存和解压实现复杂度。LZ4 和 zlib 通常比高压缩率算法更容易控制资源。

## 学习算法思想

- 字典匹配：LZ4、zlib、ZSTD、LZMA
- 熵编码：zlib、ZSTD、Brotli
- 上下文建模：LZMA、Brotli
- 块排序：BSC
