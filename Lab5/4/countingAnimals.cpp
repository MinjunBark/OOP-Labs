#include <iostream>
#include "Animal.h"

using namespace std;

int Animal::count = 0;

int main(int argc, const char * argv[])
{
    //calls animal twice 
    Animal myAnimal; 
    Animal anotherAnimal;
    
    cout << Animal::count << endl; //count should be 2 due to the increments of calling 
    return 0;
}