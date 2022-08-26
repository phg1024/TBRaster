//
// Created by Peihong Guo on 8/26/22.
//

#ifndef TBRASTER__IMAGE_H_
#define TBRASTER__IMAGE_H_

#include "glm/glm.hpp"

class Image {
 public:
  Image() = default;
  Image(int width, int height) : size(width, height) {}
  glm::ivec2 getSize() const {
    return size;
  }

 private:
  glm::ivec2 size;
};

#endif //TBRASTER__IMAGE_H_
