//
// Created by Peihong Guo on 8/26/22.
//

#pragma once

#include "glm/glm.hpp"

class Camera {
public:
    Camera() = default;

    glm::fmat3x3 intrinsicsMatrix() const;
    glm::fmat4x4 extrinsicsMatrix() const;

private:
    glm::ivec2 resolution;
    glm::fvec2 focal_length;
};