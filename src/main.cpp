#include <benchmark/benchmark.h>

// Define another benchmark
static void BM_StringCopy(benchmark::State &state) {
  std::string x = "hello";
  for (auto _ : state)
    std::string copy(x);
}

BENCHMARK(BM_StringCopy);

BENCHMARK_MAIN();