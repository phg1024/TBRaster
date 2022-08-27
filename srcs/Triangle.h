//
// Created by peiho on 8/26/2022.
//

#pragma once
#include "glm/glm.hpp"
#include <vector>

template <typename T, uint32_t D> struct Triangle {
  glm::vec<D, T> v[3];
};

using Triangle2DF = Triangle<float, 2>;
using Triangle3DF = Triangle<float, 3>;

template <typename T, uint32_t D> class Triangles {
public:
  Triangles() = default;
  Triangles(size_t num_triangles)
      : num_triangles(num_triangles), data(D * num_triangles) {}

  size_t getNumTriangles() const {
    return num_triangles;
  }

  const std::vector<T>& getData() const {
    return data;
  }

  std::vector<T>& getData() {
    return data;
  }

private:
  size_t num_triangles{0};
  std::vector<T> data;
};

using Triangles2DF = Triangles<float, 2>;
using Triangles3DF = Triangles<float, 3>;