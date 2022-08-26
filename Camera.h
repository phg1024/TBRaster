//
// Created by Peihong Guo on 8/26/22.
//

#pragma once

#include "glm/glm.hpp"

class Camera {
 public:
  Camera() = default;

  glm::fmat3x3 getIntrinsicMatrix() const;
  glm::fmat4x4 getExtrinsicMatrix() const;

 private:
  glm::ivec2 resolution;
  glm::fvec2 principal_point;
  glm::fvec2 focal_length;
  glm::mat4x4 extrinsics;
};