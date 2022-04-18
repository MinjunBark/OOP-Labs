#include <iostream>
#include "Stash.h"

using namespace std;

int main(){
    Stash newStash = Stash();
    newStash.initialize(sizeof(int));
    char C = ' ';
    int N = 0; //(C,N)
    //-------to add size in inflate() Renamed due to confusion
    int countSize = 0;
    cout <<"enter total size: " << endl;
    cin >> countSize;
    newStash.countingSize = countSize;

    while(1){
        cout << "Enter a character: "<< endl;
        cin >> C;
        cout << "Enter a value of how many times to increment" << endl;
        cin >> N;


        char* tempPtr = new char();
        tempPtr = &C;

        if(N == 99 && C == '&'){ //quit
            break;
        }

        if(N > 0){ 
            for (int i =0; i < N; i++){
                newStash.add(tempPtr);
                // counting++;
            }
        }else{ //negatives turn into pos
            int newN;
            newN = abs(N);
            for(int j = 0; j < newN; j++){
                newStash.add(tempPtr);      
                // counting++;
            }
        }
        // counting++;
    }

    cout << "Output: " << endl;
    for(int i = 0; i < newStash.count(); i++){
        cout<<*(char *)newStash.fetch(i);
    }
    cout << endl;
    cout<< newStash.countincrement<<endl; //-99 because given inflate(100) <- as quantity size ? maybe need to change it in stash.h file
    cout<< newStash.quantity <<endl;
    newStash.cleanup(); 

    return 0;
}