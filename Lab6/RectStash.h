#pragma once
#include <iostream>
#include "Rect.h"
// #include <cassert>
#include <vector>


// #include "Vec.h"
using namespace std;

class RectStash{
    public:

    vector<Rect*> storage; //new storage 

    void add(Rect* tempR){
        storage.push_back(tempR);
    }

    void containsRstash(Vec tempv){
        for(int i = 0; i < storage.size(); i++){
            if(storage[i] -> contains(tempv)){
                cout << "in\n";
            }else{
                cout << "out\n";
            }
        }
    }
};



// class RectStash{
//     public:



//     // // public:
//     // int size;      // Size of each space
// 	// int quantity;  // Number of storage spaces
// 	// int next;      // Next empty space
// 	// // int countingSize; //added
// 	// // int countincrement; //added 
// 	// // Dynamically allocated array of bytes:
// 	// unsigned char* storage;
//     // public:
//     // // Functions!
// 	// void initialize(int sz){
// 	// 	size = sz;
// 	// 	quantity = 0;
// 	// 	storage = 0;
// 	// 	next = 0;
// 	// 	// countingSize = 0; //added
// 	// 	// countincrement = 0; //added 
		
// 	// }
  
// 	// void cleanup(){
// 	// 	if(storage != 0) {
// 	// 	  std::cout << "freeing storage" << std::endl;
// 	// 	  delete []storage;
// 	// 	}
// 	// }
  
// 	// int add(const void* element){
// 	// 	if(next >= quantity) // Enough space left?
// 	// 	//   inflate(countingSize); //added 
//     //     inflate(100);
	  
// 	// 	// Copy element into storage,
// 	// 	// starting at next empty space:
// 	// 	int startBytes = next * size;
// 	// 	unsigned char* e = (unsigned char*)element;
	  
// 	// 	for(int i = 0; i < size; i++)
// 	// 	  storage[startBytes + i] = e[i];
// 	// 	next++;
	  
// 	// 	return(next - 1); // Index number
// 	// }

// 	// void* fetch(int index){
// 	// 	// Check index boundaries:
// 	// 	assert(0 <= index);
  
// 	// 	if(index >= next)
// 	// 		return 0; // To indicate the end
  
// 	// 	// Produce pointer to desired element:
// 	// 	return &(storage[index * size]);
// 	// }
  
// 	// int count() {
// 	// 	return next; // Number of elements in CStash
// 	// }
  
// 	// void inflate(int increase){ //re allocation 
// 	// 	assert(increase > 0);
		
// 	// 	int newQuantity = quantity + increase;
// 	// 	int newBytes = newQuantity * size;
// 	// 	int oldBytes = quantity * size;
// 	// 	unsigned char* b = new unsigned char[newBytes];
		
// 	// 	for(int i = 0; i < oldBytes; i++)
// 	// 		b[i] = storage[i]; // Copy old to new
		
// 	// 	delete []storage; // Old storage
// 	// 	storage = b; // Point to new memory
// 	// 	quantity = newQuantity;
// 	// 	// countincrement++; //added 
// 	// }

//     // RectStash(){
//     //     initialize(sizeof(Rect*));
//     // }
    

// };