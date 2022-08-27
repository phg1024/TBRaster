//
// Created by peiho on 8/26/2022.
//
#include "../srcs/Triangle.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("2D Triangle constructors", "[Triangle]") {
  Triangle2DF tri;
  REQUIRE(tri.v[0].length() == 2);
  REQUIRE(tri.v[1].length() == 2);
  REQUIRE(tri.v[2].length() == 2);
}

TEST_CASE("3D Triangle constructors", "[Triangle]") {
  Triangle3DF tri;
  REQUIRE(tri.v[0].length() == 3);
  REQUIRE(tri.v[1].length() == 3);
  REQUIRE(tri.v[2].length() == 3);
}

TEST_CASE("Triangles constructors", "[Triangles]") {
  SECTION("Default constructor") {
    Triangles2DF tris;
    REQUIRE(tris.getNumTriangles() == 0);
  }

  SECTION("Regular constructor") {
    Triangles2DF tris(100);
    REQUIRE(tris.getNumTriangles() == 100);
  }
}