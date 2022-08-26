cmake_minimum_required(VERSION 3.23)
project(TBRaster)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(third_party/glm)
include_directories(third_party/glm)

include_directories(third_party/stb)

add_subdirectory(third_party/Catch2)

add_library(Camera INTERFACE Camera.cpp)
add_library(Image INTERFACE Image.cpp)

add_executable(TBRaster main.cpp)
target_link_libraries(TBRaster glm::glm Camera)

# Tests
add_executable(testCamera
        tests/testCamera.cpp
        Camera)
target_link_libraries(testCamera PRIVATE Catch2::Catch2WithMain)

add_executable(testImage
        Image tests/testImage.cpp)
target_link_libraries(testImage PRIVATE Catch2::Catch2WithMain)