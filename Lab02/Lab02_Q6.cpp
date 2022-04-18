#include <iostream>
using namespace std;
// Write a program that reads in a decimal number ”n”. Convert the decimal number into
// binary format and prints out the number in binary format. Now, Write following functions
// to get, set and clear bit at the position ”index” and display the corresponding output given
// below. Please note that index 0 is the right most(least significant) bit.

void getBit(int n, int  index){
    // int pos;
    index = index + 1;
    
    cout <<  ((n & (1 << (index - 1))) >> (index- 1));

}
// int setBit(int n, int index){

// }
// int clearBit(int n, int index){

// }

int main(){
    int n;
    int index;

    cout << "Enter a number: " << endl;
    cin >> n;
    
    // int *ptr1;
    // ptr1 = &n; //? 

    cout << "Enter an index: " << endl;
    cin >> index;

    // int *ptr2;
    // ptr2  = &index; // ? 

    int binary[32];
    int remainder;
    int i =0;
    
    //converting int to binary
    cout << "Binary representation of " << n << " is: ";
    while (n > 0){
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
        for(int j = i -1; j >= 0; j--){
            cout << binary[j];
        }

    // getBit(n,index);

    cout << "\nGet bit at position " << index << " is: "; 
    getBit(n,index);


    cout <<"\nBinary Representation after setting bit at position " << index << ":" << endl;


    cout <<"\nBinary Representation after clearing bit at position " << index << ":" << endl;

    return 0;
}