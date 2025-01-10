cmake_minimum_required(VERSION 3.18)

project(CodeArchive)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)

include(CTest)

find_package(GTest 1.15.2 REQUIRED)

add_executable(ModulusTest test/ModulusTest.cpp)
add_executable(SortTest test/SortTest.cpp)

list(APPEND ExecTarget ModulusTest SortTest)

foreach (tar IN LISTS ExecTarget)
    target_compile_options(${tar} PRIVATE -Werror -pedantic-errors -Wall -Wextra)
    target_include_directories(${tar} PRIVATE include)
    target_link_libraries(${tar} PRIVATE GTest::gtest_main)
endforeach ()

add_test(NAME Modulus COMMAND ModulusTest)
add_test(NAME Sort COMMAND SortTest)
