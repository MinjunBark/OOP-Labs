#include <iostream>
using namespace std; 

// Question 2: Modify the program just you wrote for the previous exercise so that it keeps reading integers
// and classifying them as ODD or EVEN and POSITIVE or NEGATIVE until the user inputs
// 0. Then the program ends. No classification should be produced for the 0.


int main (){
    //user_input 
    int user_input;
    int limit = 0;

    //while loop to keep to code running till user inputs 0
    while(user_input != limit){
        cout << "Enter a number: " << endl;
        cin >> user_input;

        if(user_input > 0){
            cout << "POSITIVE" << endl;
        }
        else{
            cout << "NEGATIVE" << endl;
        }

        if(user_input % 2 ){
            cout << "ODD" << endl;
        }
        else{
            cout << "EVEN" << endl;
        }
    }
    return 0;
}