#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480),channel(3) {
    buffer = new char[width * height * channel];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg" || fileExt=="png") {
        // load image file
        // decompress into buffer
        return true;
    }
    return false;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}

bool BitmapImage::save() {
    //...savefile..
    return true;
}

bool BitmapImage::resize(int width, int height) {
    this->width=width;
    this->height=height;
    return false;
}
