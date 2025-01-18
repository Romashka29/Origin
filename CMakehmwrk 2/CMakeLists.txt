cmake_minimum_required(VERSION 3.20)
project(figuri_project)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set (SOURCES 
    main.cpp
    figures.cpp
)

set (HEADERS 
    include/figures.h
)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(superprogrammFIGURI "${PROJECT_SOURCE_DIR}/src/main.cpp" "${PROJECT_SOURCE_DIR}/src/figures.cpp")