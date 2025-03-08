cmake_minimum_required(VERSION 3.20)

project(CPP_FLAT_SET_BENCHMARK)

set(CMAKE_CXX_STANDARD 23)

set(BENCHMARK_ENABLE_TESTING OFF)
add_subdirectory(vendor/google-benchmark)


file(GLOB_RECURSE FSB_SOURCES src/**.cpp)

add_executable(flat_set_benchmark ${FSB_SOURCES})

target_link_libraries(flat_set_benchmark benchmark::benchmark)