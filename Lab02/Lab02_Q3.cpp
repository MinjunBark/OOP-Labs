#include <iostream>
using namespace std;
//Question 3: Write a program that reads in an integer N and prints out all the prime numbers strictly
// less than N. These should be printed one per line.

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    //n = user_input 
    //has to be less than n 
    //print prime #'s < n  endl; 
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    for(int i = 2; i < n; i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }

    return 0;
}