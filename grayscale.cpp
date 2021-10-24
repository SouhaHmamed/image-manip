#include "grayscale.h"
#include "image.h"
#include "math.h"
Grayscale::Grayscale(string filename): Image()
{
    //lecture a partire du fichier
        readFromFile(filename);
        for(unsigned i=0; i<width();i++)
            for(unsigned j=0;j < height(); j++)
            {
                //obtenir le pixel  dans la position(i,j)
                HSLAPixel &P = getPixel(i,j);
                P.s=0;
}
}
