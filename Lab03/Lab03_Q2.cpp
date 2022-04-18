#include <iostream>
#include <vector> 
using namespace std;
// Write a simple run-length encoder: you will read a sequence of pairs containing a character and a number. For each
// pair (C,N), output the character N times without spaces. When a pair has number -1 print a newline, if the number
// is -2 then stop. In the following example, the user enters the first pair, ”h” and 3, which results in the letter ”h”
// printing 3 times. The second pair, ”b” and -1, results in a newline being printed. The third pair, ”a” and 2, results
// in the letter ”a” printing twice. Finally, the pair ”f” and -2 exits the program


// Steps:
// -two vectors  <int> <char>
// -create a method to print all at once 


//create a method to print

void printAction(int action, char characters){
    switch (action){
        case -1:
            cout << endl;
            break;
        default: 
            for(int i = 0; i < action; i++){
                cout << characters;
            }
    }

}


int main(){
    vector<char> charHolder;
    vector<int> actionHolder;
   
    while(1){
        int action; //numbers if -2 end/ -1 newline / else print numbers of amount 
        char characters;

        cout << "Enter a character: " << endl;
        cin >> characters;
        cout << "Enter a number: " << endl;
        cin >> action;

        if(action == -2 ){
            break;
        }
        else{
        charHolder.push_back(characters);
        actionHolder.push_back(action);
        }
    }

    cout << "Output: " << endl;
    for(int i = 0; i < charHolder.size(); i++ ){
        printAction(actionHolder.at(i),charHolder.at(i));
    }

    return 0;
}