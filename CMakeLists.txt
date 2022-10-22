cmake_minimum_required(VERSION 3.1)
project(srcCompileProject CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_subdirectory(./lib)

add_executable(main_app testmain.cpp)
target_link_libraries(main_app oreorelib)