//
// Created by Peihong Guo on 8/26/22.
//

#pragma once

#include "glm/glm.hpp"

class Camera {
public:
  Camera() = default;
  Camera(glm::fvec2 focal_length, glm::fvec2 principal_point,
         glm::fmat4x4 extrinsics = glm::fmat4x4(1.f))
      : focal_length(focal_length), principal_point(principal_point),
        extrinsics(extrinsics) {}

  glm::fmat3x3 getIntrinsicMatrix() const;
  glm::fmat4x4 getExtrinsicMatrix() const;

private:
  glm::fvec2 focal_length;
  glm::fvec2 principal_point;
  glm::fmat4x4 extrinsics;
};