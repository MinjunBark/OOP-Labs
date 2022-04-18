#include <iostream>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <string>

using namespace std;

// Write a program that keeps reading in positive integers and for each integer outputs the
// corresponding value in hexadecimal and binary format. Stop when -1 is read. No output
// should be generated for -1.


int main(){
    int user_input;
    stringstream sstream; 

    cout << "Enter a positive integer: " << endl;
    cin >> user_input;
    
    //converting int to hex 
    if(user_input > 0){
    cout << hex << user_input << endl;

    int binary[32];
    int remainder;
    int i =0;
    //converting int to binary
    while (user_input > 0){
        binary[i] = user_input % 2;
        user_input /= 2;
        i++;
    }
        for(int j = i -1; j >= 0; j--){
            cout << binary[j];
        }
    
    }
    else{
        cout << "You entered a negative number" << endl;
    }
    return 0;
}