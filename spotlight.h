#ifndef SPOTLIGHT_H
#define SPOTLIGHT_H
#include"image.h"
#include"PNG.h"

class spotlight : public Image
{
private:
    int xCenter;
    int yCenter;

public:
using Image::Image;
    spotlight(string file,int xCenter,int yCenter);
    void chnageSpotPoint(int xCenter,int yCenter);
};

#endif // SPOTLIGHT_H
