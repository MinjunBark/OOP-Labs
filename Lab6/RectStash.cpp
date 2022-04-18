#include <iostream>
#include "RectStash.h"
// #include "Rect.h"
using namespace std;

int main (){
    float x;
    float y;
    float width;
    float length;

    RectStash storage = RectStash();

    Rect* tempR;
    Vec tempV;


    while(1){ // stop reading once all 4 input = negative
        cin >> x; 
        cin >> y;
        cin >> width;
        cin >> length;
        tempR = new Rect(x,y,length,width);
        // storage.add(tempR);
        
        if(x < 0 && y < 0 && width < 0 && length < 0){
            break;
        }

        storage.add(tempR);
    }
    
    float newx;
    float newy;

    while(1){
        cin >> newx;
        cin >> newy;
        tempV = Vec(newx,newy);

        // storage.containsRstash(tempV);

        if(newx == -99 && newy == -99){
            break;
        }
        storage.containsRstash(tempV);
    }

    return 0;
}