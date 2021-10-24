#include "illini.h"
#include "image.h"
#include "math.h"
illini::illini(string filename, int color1, int color2):Image()
{
readFromFile(filename);
int a;
int b;
    for(unsigned i=0; i<width();i++)
        for(unsigned j=0;j < height(); j++)
        {
            //obtenir le pixel  dans la position(i,j)
            HSLAPixel &P = getPixel(i,j);
           /* int d1=abs(P.h-color1);
            int d2=abs(P.h-color2);

            if (d1>d2)
            {
                P.h=color2;
            }else{
                P.h=color1;
            }*/
            if(P.h>color1){
if(P.h-color1<360+color1-P.h)
    a=P.h-color1;
else
    a=360+color1-P.h;

            }
            else{
                if(-P.h+color1<360+color1+P.h)
                    a=-P.h+color1;
                else
                    a=360-color1+P.h;

            }
            if(P.h>color2){
if(P.h-color2<360+color2-P.h)
    b=P.h-color2;
else
    b=360+color1-P.h;

            }
            else{
                if(-P.h+color2<360+color2+P.h)
                    b=-P.h+color2;
                else
                    b=360-color2+P.h;

            }
            if(a<b)
                P.h=color1;
            else
                P.h=color2;
            }

}

