# Compression Basics

The goal of compression algorithms is to express the same information using fewer bytes. In engineering, tradeoffs are usually needed between compression ratio, compression speed, decompression speed, memory usage, implementation complexity, and format compatibility.

## Basic Loop of Lossless Compression

Lossless compression must satisfy:

```text
decompress(compress(input)) == input
```

Therefore, example programs should all include three actions: compress, decompress, and verify.

## Common Components

| Component | Purpose | Representative Algorithms |
| --- | --- | --- |
| Dictionary matching | Find repeated segments, reference historical content by distance and length | zlib, LZ4, ZSTD, LZMA |
| Entropy coding | Give shorter codes to more frequent symbols | zlib, ZSTD, Brotli |
| Context modeling | Predict symbol probabilities based on context | LZMA, Brotli |
| Block sorting | Rearrange data to cluster similar contexts | BSC |
| Checksum | Detect transmission or storage errors | zlib, ZSTD |

## Don't Just Look at Compression Ratio

Many beginners treat "smaller is better" as the only goal, but engineering typically considers multiple dimensions:

| Dimension | What Really Matters |
| --- | --- |
| Compression ratio | How much bandwidth, disk, and CDN traffic is saved |
| Compression speed | Whether write paths, offline tasks, or real-time services can handle it |
| Decompression speed | Whether read paths, startup paths, request paths will be slowed |
| Memory usage | Whether suitable for containers, edge devices, or concurrent tasks |
| Streaming capability | Whether can compress/decompress while reading, not load entire block |
| Format compatibility | Whether easy to integrate with existing tools, protocols, ecosystems |

## Data Characteristics Determine Results

The same algorithm may perform completely differently on different data:

- Data with many repeated segments and similar structure usually suits dictionary matching algorithms better.
- Natural language text and Web resources benefit more from static dictionaries or context modeling.
- Already compressed, near-random data often cannot be compressed further, and may even grow due to format headers and metadata.
- With many small files, container format, block size, and dictionary training often matter more than the "algorithm name" itself.

## Three Common Misconceptions

### Misconception 1: Treat benchmark rankings as absolute conclusions

Compression tests highly depend on dataset, compression level, CPU, thread count, and I/O environment. Talking about "algorithm X is stronger" without test conditions is usually meaningless.

### Misconception 2: Confuse compression speed with decompression speed

Many systems' real hot path is "read", not "write". For example, image pulls, service startup, HTTP responses, and log replay often care more about decompression overhead.

### Misconception 3: Ignore deployment and maintenance costs

Theoretically higher compression ratio isn't always more worthwhile. If introducing a new library increases compile complexity, deployment size, and cross-platform adaptation costs, overall benefit may actually decrease.

## Learning Suggestions

1. First understand how repeated data is referenced.
2. Then understand how probability models make common symbols shorter.
3. Finally compare different algorithms' tradeoffs in speed, ratio, and memory.
