//
// Created by peiho on 8/26/2022.
//

#pragma once
#include "Defs.h"
#include <vector>
#include "BoundingBox.h"

template <typename T, uint32_t D> struct Triangle {
  VectorX<D, T> v[3];

  bool overlaps(const BoundingBox<T, D>& bbox) const {
    return false;
  }
};

using Triangle2DF = Triangle<float, 2>;
using Triangle3DF = Triangle<float, 3>;