#pragma once

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace awesome_compression {

using Bytes = std::vector<std::uint8_t>;

Bytes read_file(const std::string& path);
void require_round_trip(const Bytes& original, const Bytes& restored);
void print_stats(const std::string& name, std::size_t input_size, std::size_t compressed_size);

} // namespace awesome_compression
