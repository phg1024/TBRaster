//
// Created by Peihong Guo on 8/26/22.
//

#pragma once

#include "Defs.h"

class Camera {
public:
  using Vector2i = Vector2<int>;
  using Vector2f = Vector2<float>;
  using Matrix3x3f = Matrix<float, 3, 3>;
  using Matrix4x4f = Matrix<float, 4, 4>;

  Camera() = default;
  Camera(Vector2f focal_length, Vector2f principal_point,
         Matrix4x4f extrinsics = Matrix4x4f::Identity())
      : focal_length(focal_length), principal_point(principal_point),
        extrinsics(extrinsics) {}

  Matrix3x3f getIntrinsicMatrix() const;
  Matrix4x4f getExtrinsicMatrix() const;

private:
  Vector2f focal_length;
  Vector2f principal_point;
  Matrix4x4f extrinsics;
};