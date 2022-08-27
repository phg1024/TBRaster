//
// Created by Peihong Guo on 8/26/22.
//

#pragma once

#include "Pixel.h"
#include "glm/glm.hpp"
#include <vector>

template <typename PixelType> class Image {
public:
  Image() = default;
  Image(int width, int height) : size(width, height) {
    pixels.resize(width * height);
  }
  glm::ivec2 getSize() const { return size; }

  std::vector<PixelType> &getPixels() { return pixels; }
  const std::vector<PixelType> &getPixels() const { return pixels; }

private:
  glm::ivec2 size;
  std::vector<PixelType> pixels;
};

using RGBImage = Image<RGBPixel>;
using RGBImageF = Image<RGBPixelF>;
using RGBAImage = Image<RGBAPixel>;
using RGBAImageF = Image<RGBAPixelF>;