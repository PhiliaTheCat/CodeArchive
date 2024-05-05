cmake_minimum_required(VERSION 3.28)

project(CodeArchive)

set(CMAKE_CXX_STANDARD_REQUIRED 17)

add_subdirectory(../googletest GTest-build)

include_directories(include)

link_libraries(GTest::gtest_main)

add_executable(Modulus_Test test/Math/Modulus_Test.cpp)
add_executable(MergeSort_Test test/Sort/MergeSort_Test.cpp)
