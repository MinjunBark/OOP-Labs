#pragma once

#include "ADT.h"
#include <iostream>

using namespace std;

class Derived : public ADT{
    public:

    Derived(){


    }

    void doSomething(){
        cout << "I did something" << endl;
    }

    void doSomethingElse(){
        cout << "I did something else" << endl;
    }

    void dontDoThis(){

    }

};