#ifndef LA4_Animal_h
#define LA4_Animal_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
    string name;
    int age;
public:
    static int count; //static allows 
    Animal(){
        cout << "Creating Generic Animal\n";
        count++; //increment 
        name = "Generic Animal\n";
        age = 0;
    }
    
    void display (const vector<Animal*> & list){
        
    }
    
    string getName(){
        return name;
    }
    
    void setName(string name){
        this->name = name;
    }
    
    int getAge(){
        return age;
    }
    
    void setAge(int age){
        this->age = age;
    }
    
    ~Animal(){
        cout << "Deleting Generic Animal" << endl;
    }
    
    void feed(){
        cout << "Some food, please!" << endl;
    }
    // int count(){
    //     return count;
    // }
};

#endif