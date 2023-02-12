cmake_minimum_required(VERSION 3.24)
set(CMAKE_CXX_STANDARD 17)

project(custom-string)

include_directories(src)

file(GLOB_RECURSE main-sources "src/custom-string/*.cpp")

add_executable(custom-string src/main.cpp ${main-sources})

################################
# GTest
################################
find_package(GTest REQUIRED)

enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

################################
# Unit Tests
################################
include_directories(tests)

add_executable(custom-string-tests ${main-sources} tests/custom-string-tests/CustomStringTests.cpp)
target_link_libraries(custom-string-tests gtest gtest_main)

add_test(NAME CustomString COMMAND custom-string-tests)
