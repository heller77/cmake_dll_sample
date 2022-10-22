cmake_minimum_required(VERSION 3.1)
project(srcCompileProject CXX)

# # srcフォルダー以下のcppファイル一覧をcppfilesという変数に格納
# file(GLOB_RECURSE cppfiles RELATIVE ${PROJECT_SOURCE_DIR} ./src/*.cpp)
# file(GLOB_RECURSE headerfiles RELATIVE ${PROJECT_SOURCE_DIR} ./src/*.h)
# message(${headerfiles})

# add_executable(main_app ${cppfiles})
# add_library(uftree STATIC ${cppfiles})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_subdirectory(./lib)

add_executable(main_app testmain.cpp)
target_link_libraries(main_app oreorelib)