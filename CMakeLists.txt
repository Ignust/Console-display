cmake_minimum_required(VERSION 2.8.8)

project(main)

set(SOURCE_EXE main.cpp)
set(SOURCE_TESTA tests/main.cpp tests/TestConsoleOutput.cpp)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(headers)
include_directories(source)

add_executable(${PROJECT_NAME} ${SOURCE_EXE})
add_subdirectory(source)
target_link_libraries(${PROJECT_NAME} ConsoleDisplayLIB)

add_executable(googlTest ${SOURCE_TESTA})
include_directories(test/googletest-master/googletest/include)
add_subdirectory(tests/googletest-master)
target_link_libraries(googlTest gtest)
target_link_libraries(googlTest ConsoleDisplayLIB)
