//
// Created by Peihong Guo on 8/26/22.
//

#include "../srcs/Camera.h"
#include <catch2/catch_test_macros.hpp>
#include <iostream>
namespace {
template <typename T> bool matrix_diff(const T &a, const T &b) {
  return (a - b).norm() < 1e-6;
}
} // namespace
TEST_CASE("Camera Constructors", "[Camera]") {
  SECTION("Default constructor") {
    Camera camera;
    REQUIRE(camera.getIntrinsicMatrix().rows() == 3);
    REQUIRE(camera.getIntrinsicMatrix().cols() == 3);
    REQUIRE(camera.getExtrinsicMatrix().rows() == 4);
    REQUIRE(camera.getExtrinsicMatrix().cols() == 4);
  }

  SECTION("Regular constructor") {
    Camera camera(Vector2<float>(1.f, 1.f), Vector2<float>(2.f, 1.5f));
    REQUIRE(camera.getIntrinsicMatrix().rows() == 3);
    REQUIRE(camera.getIntrinsicMatrix().cols() == 3);

    Matrix<float, 3, 3> ref_intrinsics;
    ref_intrinsics << 1.f, 0.f, 2.0f, 0.f, 1.f, 1.5f, 0.f, 0.f, 1.f;
    REQUIRE(matrix_diff(camera.getIntrinsicMatrix(), ref_intrinsics));
    REQUIRE(camera.getExtrinsicMatrix().rows() == 4);
    REQUIRE(camera.getExtrinsicMatrix().cols() == 4);

    Matrix<float, 4, 4> ref_extrinsics = Matrix<float, 4, 4>::Identity();
    REQUIRE(matrix_diff(camera.getExtrinsicMatrix(), ref_extrinsics));
  }
}