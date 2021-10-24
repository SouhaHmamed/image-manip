#include "spotlight.h"
#include"image.h"
#include"PNG.h"
#include"math.h"
spotlight::spotlight(string file,int xCenter,int yCenter):Image()
{
readFromFile(file);



    for(unsigned i=0; i<width();i++)
        for(unsigned j=0;j < height(); j++)
        {
            //obtenir le pixel  dans la position(i,j)
            HSLAPixel &P = getPixel(i,j);
                double dis= sqrt((i-xCenter)*(i-xCenter)+(j-yCenter)*(j-yCenter));
                if(dis>=160){
                    P.l=0.2*P.l;
                }else{
                    P.l=abs(P.l-dis*0.005*P.l);
                }

        }
}

