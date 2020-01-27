cmake_minimum_required(VERSION 2.8.8)

project(ConsoleDisplay)

set(SOURCE_LIB ConsoleOutput.cpp)

include_directories(${PROJECT_SOURCE_DIR}/../headers/)

add_library(ConsoleDisplayLIB STATIC ${SOURCE_LIB})
