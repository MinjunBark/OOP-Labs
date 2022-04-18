#include "Stash.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;
// Your task is to write a program that declares an instance of Stash, fills
// it up with double numbers and then prints out the numbers. You have to use the Stash
// member functions to complete this exercise. Your program should read in these
// values, store them in a Stash object and print out the values. After the floating points
// values have been printed out, use the appropriate member function of Stash to free up the
// memory your object occupied.


int main(){
    Stash newstash = Stash();
    
    // ifstream inputfile; //initializing filename
    ifstream inputfile("input.txt");

    // struct Stash storage;//creating 
    newstash.initialize(sizeof(double)); //from stash.h

    string line;
    //read through the end of the file = eof
    double* num;
    // cin >> num;
    while(!inputfile.eof()){
        inputfile >> line;
        // cout << line << endl;
        *num = stod(line);
        newstash.add(num);

        //Pointer double* num; FIX
        // double num = strtof (&line.at(0), NULL); 
        // stringstream(line) >> num;
        // cout << "Output:" << endl;
        // for(int i = 0; i < newstash.count(); i++){
        //     cout << newstash.fetch(i) << endl;
        //}
    }

    for(int i = 0; i < newstash.count(); i++){
            cout << *(double*) newstash.fetch(i) << endl;
        }

    newstash.cleanup();//from shash.h
    return 0;
}