//
// Created by Peihong Guo on 8/26/22.
//

#pragma once

#include "Pixel.h"
#include "Defs.h"
#include <vector>

template <typename PixelType> class Image {
public:
  using Vector2i = Vector2<int>;

  Image() = default;
  Image(int width, int height) : size(width, height) {
    pixels.resize(width * height);
  }
  Vector2i getSize() const { return size; }

  std::vector<PixelType> &getPixels() { return pixels; }
  const std::vector<PixelType> &getPixels() const { return pixels; }

private:
  Vector2i size;
  std::vector<PixelType> pixels;
};

using RGBImage = Image<RGBPixel>;
using RGBImageF = Image<RGBPixelF>;
using RGBAImage = Image<RGBAPixel>;
using RGBAImageF = Image<RGBAPixelF>;