cmake_minimum_required(VERSION 3.23)
project(TBRaster)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(third_party/eigen-3.4.0)
include_directories(third_party/eigen-3.4.0)

add_subdirectory(third_party/glm)
include_directories(third_party/glm)

include_directories(third_party/stb)

add_subdirectory(third_party/Catch2)

add_library(Common INTERFACE srcs/Defs.h)
add_library(Camera STATIC srcs/Camera.cpp)
target_link_libraries(Camera Common)

add_library(Image INTERFACE srcs/Image.hpp srcs/Pixel.h)
target_link_libraries(Image INTERFACE Common)

add_library(Geometry INTERFACE srcs/Triangle.h srcs/BoundingBox.h srcs/Mesh.h)
target_link_libraries(Geometry INTERFACE Common)

add_executable(TBRaster main.cpp)
target_link_libraries(TBRaster glm::glm Camera Image)

# Tests
add_executable(testCamera
        tests/testCamera.cpp)
target_link_libraries(testCamera PRIVATE Catch2::Catch2WithMain Camera)

add_executable(testImage
        tests/testImage.cpp)
target_link_libraries(testImage PRIVATE Catch2::Catch2WithMain Image)

add_executable(testGeometry
        tests/testGeometry.cpp)
target_link_libraries(testGeometry PRIVATE Catch2::Catch2WithMain Geometry)