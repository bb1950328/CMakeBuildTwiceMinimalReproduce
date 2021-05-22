cmake_minimum_required(VERSION 3.19)
project(CMakeBuildTwiceMinimalReproduce)

set(CMAKE_CXX_STANDARD 14)

# uncomment the next line to add the files directly (without using target_sources)
add_library(Lib src/fibonacci.h src/fibonacci.cpp)

# uncoment the next two lines to add the files using target_sources (inside src/CMakeLists.txt)
#add_library(Lib)
#add_subdirectory(src)

add_executable(MainExecutable src/main.cpp)
add_executable(TestExecutable src/test.cpp)

target_link_libraries(MainExecutable Lib)
target_link_libraries(TestExecutable Lib)

message(STATUS ${CMAKE_VERSION})