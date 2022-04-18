#include <iostream>
using namespace std; 
//Question 1: Write a program that reads in an integer and outputs ”POSITIVE” if the integer is positive
// and ”NEGATIVE” if it is negative, and ”ODD” if the integer is odd and ”EVEN” if the
// integer is even.


int main (){
    //need user input
    int user_input;
    //if statement saying if user_input > 0 = positive else negative 
    cout << "Please enter a number: ";
    cin >> user_input;

    if(user_input > 0){
        cout << "POSITIVE" << endl;
    }
    else{
        cout << "Negative" << endl;
    }

    if(user_input % 2){
        cout << "ODD" << endl;
    }
    else{
        cout << "EVEN" << endl;
    }

    //Also another if statment stating if the number is % 2 then odds else even

    return 0;
}