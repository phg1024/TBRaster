//
// Created by Peihong Guo on 8/26/22.
//

#include <catch2/catch_test_macros.hpp>
#include "../Camera.h"

TEST_CASE( "Camera Constructors", "[Camera]" ) {
  Camera camera;
  REQUIRE( camera.getIntrinsicMatrix().length() == 3);
  REQUIRE( camera.getExtrinsicMatrix().length() == 4 );
}