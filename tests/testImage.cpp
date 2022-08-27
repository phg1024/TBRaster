//
// Created by Peihong Guo on 8/26/22.
//

#include "../srcs/Image.hpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Image constructors", "[Image]") {
  RGBImage image(640, 480);
  REQUIRE(image.getSize() == glm::ivec2(640, 480));
  REQUIRE(image.getPixels().size() == 640 * 480);
}