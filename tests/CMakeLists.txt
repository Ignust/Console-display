cmake_minimum_required(VERSION 2.8.8)

project(Tests)

set(SOURCE_EXE main.cpp TestConsoleOutput.cpp)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(googletest-master/googletest/include)
add_subdirectory(googletest-master)

include_directories(../headers)


add_executable(${PROJECT_NAME} ${SOURCE_EXE})

target_link_libraries(${PROJECT_NAME} gtest)

