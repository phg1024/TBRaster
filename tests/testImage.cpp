//
// Created by Peihong Guo on 8/26/22.
//

#include <catch2/catch_test_macros.hpp>
#include "../Image.h"

TEST_CASE( "Image constructors", "[Image]" ) {
  Image image(640, 480);
  REQUIRE( image.getSize() == glm::ivec2(640, 480));
}