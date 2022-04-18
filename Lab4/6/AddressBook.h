#ifndef AddressBook_h
#define AddressBook_h

#include <iostream>
#include <vector>
#include <string>
#include "Entry.h"

using namespace std;


struct AddressBook{
    public:

    vector<Entry*> entryStorage;

    void add(Entry* addEntry){
        entryStorage.push_back(addEntry);
    }

    void printaddy(){
        for(int i = 0; i < entryStorage.size();i++){
            entryStorage[i]->Entry::printEntry(); //print func from entry
        }
    }
};
#endif