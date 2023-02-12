cmake_minimum_required(VERSION 3.24)
set(CMAKE_CXX_STANDARD 17)

project(custom-string)

include_directories(src)

file(GLOB_RECURSE main-sources "src/*.cpp")

add_executable(custom-string src/main.cpp)

################################
# GTest
################################
find_package(GTest REQUIRED)

enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
