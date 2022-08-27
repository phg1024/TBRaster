//
// Created by Peihong Guo on 8/26/22.
//

#include "Camera.h"

glm::fmat3x3 Camera::getIntrinsicMatrix() const {
  return glm::fmat3x3(glm::fvec3(focal_length.x, 0, 0),
                      glm::fvec3(0, focal_length.y, 0),
                      glm::fvec3(principal_point.x, principal_point.y, 1));
}

glm::fmat4x4 Camera::getExtrinsicMatrix() const { return extrinsics; }