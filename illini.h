#ifndef ILLINI_H
#define ILLINI_H
#include "image.h"


class illini: public Image
{


public:
    using Image::Image;
    int color1=11;
    int color2=216;
    illini(string filename, int color1=11, int color2=216);
};

#endif // ILLINI_H
