cmake_minimum_required(VERSION 3.20)
project(figuri_project)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(superprogrammFIGURI src/main.cpp src/figures.cpp)