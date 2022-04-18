#include <iostream>
using namespace std;
// Write a program that a user enters two integers. Create a pointer to each of the numbers.
// Multiply, add, subtract and divide the pointers together (remember to dereference them)
// and output the result to the console.

int main (){
    int number1;
    int number2;
    int *first;
    int *second;

    cout<< "Enter a 2 numbers: " << endl;
    cin >> number1 >> number2;

    cout << "You entered: " << number1 << " and " << number2 << endl;
    first = &number1; //storing address 
    second = &number2; 

    int addSum;
    int multiSum;
    int subSum;
    int divSum;

    addSum = *first + *second;
        cout << "Adding: " << addSum << endl;
    multiSum = *first * *second;
        cout << "Multipling: " << multiSum << endl;
    subSum = *first - *second;
        cout << "Subtracting: " << subSum << endl;
    divSum = *first / *second;
        cout << "Dividing: " << divSum << endl;

    return 0;
}