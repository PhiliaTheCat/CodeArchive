cmake_minimum_required(VERSION 3.28)

project(CodeArchive)

set(CMAKE_CXX_STANDARD_REQUIRED 17)

add_subdirectory(../googletest GTest-build)

enable_testing()

add_executable(Modulus_Test test/Modulus_Test.cpp)

target_link_libraries(Modulus_Test GTest::gtest_main)

include(GoogleTest)
