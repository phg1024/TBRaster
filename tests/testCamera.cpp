//
// Created by Peihong Guo on 8/26/22.
//

#include "../srcs/Camera.h"
#include <catch2/catch_test_macros.hpp>

namespace {
template <uint32_t N, typename T>
bool matrix_diff(glm::mat<N, N, T> a, glm::mat<N, N, T> b) {
  bool passed = true;
  for(int i=0;i<N;++i) {
    passed &= a[i] == b[i];
  }
  return passed;
}
}

TEST_CASE("Camera Constructors", "[Camera]") {
  SECTION("Default constructor") {
    Camera camera;
    REQUIRE(camera.getIntrinsicMatrix().length() == 3);
    REQUIRE(camera.getExtrinsicMatrix().length() == 4);
  }

  SECTION("Regular constructor") {
    Camera camera(glm::fvec2(1.f, 1.f), glm::fvec2(2.f, 1.5f));
    REQUIRE(camera.getIntrinsicMatrix().length() == 3);
    REQUIRE(matrix_diff(camera.getIntrinsicMatrix(),
            glm::fmat3x3(1.f, 0.f, 0.f, 0.f, 1.f, 0.f, 2.f, 1.5f, 1.f)));
    REQUIRE(camera.getExtrinsicMatrix().length() == 4);
    REQUIRE(matrix_diff(camera.getExtrinsicMatrix(),
                        glm::fmat4x4(1.f, 0.f, 0.f, 0.f,
                                     0.f, 1.f, 0.f, 0.f,
                                     0.f, 0.f, 1.f, 0.f,
                                     0.f, 0.f, 0.f, 1.f)));
  }
}