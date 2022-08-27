//
// Created by peiho on 8/26/2022.
//
#include "../srcs/Mesh.h"
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

TEST_CASE("Mesh constructors", "[Mesh]") {
  Mesh mesh(MatrixX3<float>(4, 3), MatrixX3<int>(5, 3));
  REQUIRE(mesh.faces.rows() == 5);
  REQUIRE(mesh.faces.cols() == 3);
  REQUIRE(mesh.vertices.rows() == 4);
  REQUIRE(mesh.vertices.cols() == 3);
}