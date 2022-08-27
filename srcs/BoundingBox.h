//
// Created by peiho on 8/27/2022.
//

#pragma once
#include "Defs.h"

template <typename T, uint32_t D>
struct BoundingBox {
  VectorX<D, T> min;
  VectorX<D, T> max;
};
