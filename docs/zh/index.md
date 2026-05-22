---
layout: home
---

<div class="home-header">
  <div>
    <span class="home-title">Awesome Compression</span>
    <span class="home-subtitle">压缩算法学习地图</span>
  </div>
  <div class="home-nav">
    <a href="./guide/compression-basics">基础知识</a>
    <a href="./algorithms/zstd">算法笔记</a>
    <a href="./examples/cpp-overview">C++ 示例</a>
  </div>
</div>

<div class="home-intro">
这个站点用于沉淀压缩和编码算法的学习笔记。首版聚焦 ZSTD、LZMA、BSC、LZ4、zlib、Brotli，目标是把算法思想、工程取舍和 C++ 调用示例放在同一个可维护的知识库中。
</div>

## 推荐学习路径

1. 先读「压缩基础」和「编码模型」，建立字典匹配、熵编码、上下文建模、块排序这些共通知识。
2. 再横向比较 ZSTD、LZMA、LZ4、zlib、Brotli、BSC，形成“速度 / 压缩率 / 内存 / 兼容性”的基本直觉。
3. 最后结合 `examples/cpp` 中的最小程序，把抽象概念映射到真实 API 调用和输出结果。

## 算法地图

| 方向 | 代表算法 | 你会重点学到什么 |
| --- | --- | --- |
| 通用现代压缩 | ZSTD | 如何在压缩率与吞吐之间做宽范围调节 |
| 高压缩率归档 | LZMA | 大窗口、范围编码、较强模型带来的收益和代价 |
| 极速低延迟 | LZ4 | 为什么很多系统宁愿牺牲压缩率也要换吞吐 |
| 兼容性优先 | zlib | DEFLATE 生态为何长期存在 |
| Web 文本压缩 | Brotli | 静态字典和文本场景优化 |
| 变换 / 块排序学习 | BSC | “先变换，再编码”的思路 |

## 学习入口

<div class="feature-map">
  <div class="feature-card">
    <div class="feature-card-title">压缩基础</div>
    <div class="feature-card-desc">理解熵、字典、滑动窗口、块排序、上下文建模和校验这些基础概念。</div>
    <a class="feature-tag" href="./guide/compression-basics">开始学习</a>
  </div>
  <div class="feature-card">
    <div class="feature-card-title">算法笔记</div>
    <div class="feature-card-desc">按统一结构整理 ZSTD、LZMA、BSC、LZ4、zlib、Brotli 的核心思想和使用边界。</div>
    <a class="feature-tag" href="./algorithms/zstd">查看算法</a>
  </div>
  <div class="feature-card">
    <div class="feature-card-title">C++ 示例</div>
    <div class="feature-card-desc">通过最小可运行程序学习各压缩库的 API 调用方式。</div>
    <a class="feature-tag" href="./examples/cpp-overview">运行示例</a>
  </div>
</div>
