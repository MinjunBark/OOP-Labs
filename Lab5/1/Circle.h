#ifndef Circle_h
#define Circle_h
#define pi 3.14159

#include <iostream>
using namespace std;


class Circle{
    private: 
        double x;
        double y;
        double r; // store radius 

    public: 
        double area; //area  
        // double radius;
        Circle(){ //circle constructor 
            x = 0.0;
            y = 0.0;
            r = 1.0;
            
            area = pi * r * r;
        }

        Circle(double xcord, double ycord, double rad){
            xcord = x;
            ycord = y;
            rad = r;
            area = pi * r * r;
        }

        //setter
        void setX(double xvar){
            x = xvar;
        }

        void setY(double yvar){
            y = yvar;
        }

        void setR(double rvar){
            r= rvar;
        }

        //getter
        double getX(){
            return x;
        }
        double getY(){
            return y;
        }
        double getR(){
            return r;
        }
};
#endif