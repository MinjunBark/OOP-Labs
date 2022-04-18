// #ifndef Vec.h
// #define Vec.h
#include <iostream>

using namespace std;

class Vec{
    public:
    float x;
    float y;
    static Vec null; //static member Vec called null 

    Vec(){//default constructor
        x = 0;
        y = 0;
    }
    
    Vec(float tempx, float tempy){ //construcor from two coordinates
        x = tempx;
        y = tempy;
    }

    void addVec(Vec temp){
        x = x + temp.x;
        y = y + temp.y;
    }

    void printVec(){
        cout << x << endl;
        cout << y << endl;

    }
};
Vec Vec::null = Vec(); // Vec of vec called null (0,0) coordinates 