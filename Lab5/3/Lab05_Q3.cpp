#include <iostream>
#include "display.h"
#include "Animal.h"
#include "Dog.h"
#include <vector> 


using namespace std;

int main (){
    int size;
    string dogName;
    int dogAge;
    vector<Animal*> doglist; //from display.h
    char dogChar = ' ';

    cout << "how many dogs: " << endl;
    cin >> size;

    for(int i = 0; i < size; i++){

        // cout << "A = generic or D = a dog" << endl;
        // cin >> dogChar;

        // cout << "Enter the name: " << endl;
        // cin >> dogName;

        // cout << "Enter the age of the dog: " << endl;
        // cin >> dogAge;

        cin >> dogChar >> dogName >> dogAge;

        if(dogChar == 'A'){
            Animal* genericAnimal = new Animal();
            genericAnimal->setName(dogName);
            genericAnimal->setAge(dogAge);
            doglist.push_back(genericAnimal);
            int printonA = 0;
            for(int i = 0; i < printonA; i++){
                cout << "Creating Generic Animal" << endl;
            }
            cout << "\n";
        }
        if(dogChar == 'D'){
            Dog *creatingDog = new Dog(dogName, dogAge);
            creatingDog ->setName(dogName);
            creatingDog -> setAge(dogAge);
            doglist.push_back(creatingDog);
        }
    }
        display(doglist);

    return 0;
}