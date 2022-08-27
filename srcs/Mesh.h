//
// Created by peiho on 8/26/2022.
//

#pragma once
#include "Defs.h"

struct Mesh {
  using MatrixX3i = MatrixX3<int>;
  using MatrixX3f = MatrixX3<float>;

  Mesh() = default;
  Mesh(const MatrixX3f &vertices, const MatrixX3i &faces)
      : vertices(vertices), faces(faces) {}

  MatrixX3f vertices;
  MatrixX3i faces;
};
