#ifndef GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H
#define GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H

#include <string>

class BitmapImage {
public:
    BitmapImage();

    ~BitmapImage();

    bool load(std::string name);
    bool resize(int width,int height);
    bool save();

private:
    int width, height;
    char* buffer;
    std::string name;
    char channel;
};


#endif //GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H
