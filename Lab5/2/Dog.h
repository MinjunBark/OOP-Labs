#ifndef Dog_h
#define Dog_h
#include "Animal.h"
#include <string>

#include <iostream>
using namespace std;

class Dog: public Animal{
   
    public:
        string dogName;
        int dogAge;

        Dog(string D_name, int D_age){
            dogName = D_name;
            dogAge = D_age;
            cout << "Creating Dog" << endl;
        }


        int getAge(){
            return dogAge;
        }

        string getName(){
            return dogName;
        }

        void feed(){
            cout << "A small bone, please!\t";
        }

        ~Dog(){
            cout << "Deleteing dog" << endl;
        }
};
#endif