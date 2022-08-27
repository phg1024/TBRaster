//
// Created by peiho on 8/26/2022.
//
#include "../srcs/Triangle.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("2D Triangle constructors", "[Triangle]") {
  Triangle2DF tri;
  REQUIRE(tri.v[0].size() == 2);
  REQUIRE(tri.v[1].size() == 2);
  REQUIRE(tri.v[2].size() == 2);
}

TEST_CASE("3D Triangle constructors", "[Triangle]") {
  Triangle3DF tri;
  REQUIRE(tri.v[0].size() == 3);
  REQUIRE(tri.v[1].size() == 3);
  REQUIRE(tri.v[2].size() == 3);
}