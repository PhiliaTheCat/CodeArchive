cmake_minimum_required(VERSION 3.18)

project(CodeArchive)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)

include(CTest)

find_package(GTest 1.15.2 REQUIRED)

include_directories(include)

link_libraries(GTest::gtest_main)

add_executable(ModulusTest test/ModulusTest.cpp)
add_executable(SortTest test/SortTest.cpp)

add_test(NAME Modulus COMMAND ModulusTest)
add_test(NAME Sort COMMAND SortTest)
