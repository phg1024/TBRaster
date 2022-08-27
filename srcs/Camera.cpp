//
// Created by Peihong Guo on 8/26/22.
//

#include "Camera.h"

Camera::Matrix3x3f Camera::getIntrinsicMatrix() const {
  Matrix3x3f matrix = Matrix3x3f::Zero();
  matrix << focal_length[0], 0, principal_point[0],
            0, focal_length[1], principal_point[1],
            0, 0, 1;
  return matrix;
}

Camera::Matrix4x4f Camera::getExtrinsicMatrix() const { return extrinsics; }