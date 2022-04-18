#include <iostream>
using namespace std;

int main (){
    double AreaofCircle; // sum 
    const double pi = 3.14;
    double radius; //user input 
    double radius_Squared;

    cout << "Enter the radius: " << endl;
    cin >> radius;

    radius_Squared = radius * radius;
    AreaofCircle = pi * radius_Squared;
    cout << "Area of circle = " << AreaofCircle << endl;


    return 0;
}