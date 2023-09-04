cmake_minimum_required(VERSION 3.10)
project(trike)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB src ${CMAKE_SOURCE_DIR}/src/*)

add_executable(trike ${src})
