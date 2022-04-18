#include <iostream>
#include <fstream>
#include <string>
#include "Stack.h"
#include <sstream>

using namespace std;

int main(int argc, char const *argv[])
{

    Stack newStack = Stack();
    Stack tempStack = Stack();
    ifstream inputFile("input.txt");
    newStack.initialize();
    
    string line;

    while(!inputFile.eof()){
        inputFile >> line;
        double *num = new double;
        *num = stod(line); //stod = convert string -> double 
        newStack.push(num); //from stack.h
        //cout << num << endl;

    }

    while (newStack.head != NULL){
        cout<<*(double *)newStack.head->data <<"\n";
        newStack.head = newStack.head->next;
    }

    newStack.head = tempStack.head;
    
    while(newStack.head != NULL){
        newStack.pop();
    }
    

    newStack.cleanup();
    return 0;
}
