cmake_minimum_required(VERSION 3.23)
project(TBRaster)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(third_party/glm)
include_directories(third_party/glm)

include_directories(third_party/stb)

add_subdirectory(third_party/Catch2)

add_library(Camera STATIC srcs/Camera.cpp)
add_library(Image INTERFACE srcs/Image.hpp srcs/Pixel.h)
add_library(Triangle INTERFACE srcs/Triangle.h)

add_executable(TBRaster main.cpp)
target_link_libraries(TBRaster glm::glm Camera Image)

# Tests
add_executable(testCamera
        tests/testCamera.cpp)
target_link_libraries(testCamera PRIVATE Catch2::Catch2WithMain Camera)

add_executable(testImage
        tests/testImage.cpp)
target_link_libraries(testImage PRIVATE Catch2::Catch2WithMain Image)

add_executable(testTriangle
        tests/testTriangle.cpp)
target_link_libraries(testTriangle PRIVATE Catch2::Catch2WithMain Triangle)