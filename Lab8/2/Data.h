#pragma once 
#include <iostream>
#include <vector>
using namespace std;

class Data {
    public:

    vector<int> storage;

    void add(int number){
        storage.push_back(number);
    }

    void print(){
        for(int i = 0; i < storage.size(); i++){
            cout << storage[i] << " ";
        }
        cout << "\n";
    }

    void sort(){
        int key;
        int j;
        for(int i = 0; i < storage.size(); i++){
            key = storage[i];
            j = i -1;

            while(j >= 0 && storage[j] > key){
                storage[j+1] = storage[j];
                j = j-1;
            }
            storage[j+1] = key;
        }
    }
};