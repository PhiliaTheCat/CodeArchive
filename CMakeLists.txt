cmake_minimum_required(VERSION 3.18)

project(CodeArchive C CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(../googletest GTest-build)

include_directories(include)

link_libraries(GTest::gtest_main)

add_executable(Modulus_Test test/Math/Modulus_Test.cpp)
add_executable(MergeSort_Test test/Sort/MergeSort_Test.cpp)
