#include <iostream>
#include "Vec.h"
using namespace std;


class Rect{
    public:
        float Rectx;
        float Recty;
        float length;
        float width;

    Rect(){
        Rectx = 0;
        Recty = 0;
        length = 0;
        width = 0;
    }

    Rect(float tempx, float tempy, float templength, float tempwidth){
        Rectx = tempx;
        Recty = tempy;
        length = templength;
        width = tempwidth;
    }
    

    bool contains(Vec Rect){
        if(Rectx < Rect.x && (Rectx+width) > Rect.x && Recty > Rect.y && (Recty-length) < Rect.y){
            return true;
        }
        return false;
    }


};
