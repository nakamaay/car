cmake_minimum_required(VERSION 3.5)

project(car LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(car main.cpp)

target_link_libraries(car -lglfw -lGLU -lGL)