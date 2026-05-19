#include "common.hpp"

#include <stdexcept>

int main(int argc, char** argv) {
  if (argc != 2) {
    throw std::runtime_error("usage: bsc_example <input-file>");
  }

  const auto input = awesome_compression::read_file(argv[1]);
  awesome_compression::require_round_trip(input, input);
  awesome_compression::print_stats("bsc-placeholder", input.size(), input.size());
  return 0;
}
