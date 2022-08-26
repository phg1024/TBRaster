cmake_minimum_required(VERSION 3.23)
project(TBRaster)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(third_party/glm)

add_library(Camera INTERFACE Camera.cpp)
target_include_directories(Camera INTERFACE third_party/glm)

add_executable(TBRaster main.cpp)
target_link_libraries(TBRaster glm::glm Camera)