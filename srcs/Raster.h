//
// Created by peiho on 8/26/2022.
//

#pragma once
#include "Camera.h"
#include "Image.hpp"
#include "Mesh.h"

class Raster {
public:
  RGBImageF rasterize(const Camera &camera, const Mesh &mesh);

private:
};
