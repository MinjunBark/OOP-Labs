#include <iostream> 
#include <vector>
#include <string>

using namespace std;


// Write a program where you will have a vector V where each entry is a pointer to a vector of strings. This means
// that each entry in V points to a vector of strings. Your program will then read input strings. For each string, if the
// number of characters in the string is N, then add it to the string vector in entry V[N-1]. Be sure to allocate the string
// vector in each entry as needed. The input string will have a maximum of 10 characters so you can initialize V with
// 10 entries. Do not add repeated entries. Stop when string ”quit” is read. String ”quit” should not be processed.
// Then output the contents of each V entry in order from V[0] to V[9], separated by spaces within the same V entry
// and by a new line when switching to the next entry. Skip empty entries. In the following example a seqeuence of
// strings, each less than 10 characters, are read, followed by the string ”quit” to stop reading. The output prints the
// strings grouped by character lengths on the same line, starting with length 1, all the way to longest length string,
// ”happiness”, which has 9 characters.

//STEPS:
//create a list
//user inputs a list 
//N will determine the order of the list 
//output should be ordering the words corresponding to its size of the string 
//max of 10 inputs / max of 10 size string 
    //v[0] - v[9]
// print program when entered "quit "

//output: seperate by spaces and newline 
//rowss <---> right left
//columns ^||||V up down 

// void findVwords(vector< vector<string> > V, string Vwords){
//     int tempN = Vwords.size();
//     bool found = false;
//     for(int i = 0; i < V[tempN-1].size(); i++){
//         if(V[tempN-1][i] == Vwords){
//             found = true;
//             break;
//         }
//     }
// }

int main(){
    vector< vector<string> > V(10); //column has to be less than 10
    string words;

    while(1){
        cin >> words;
        int N = words.size();
        bool found = false;
        
        if(words == "quit"){
            break;
        }

        if(V[N-1].empty()){ //if list is empty push words in V 
            V[N-1].push_back(words);
        }else {
            for(int i = 0; i < V[N-1].size(); i++){ //matching the size of words in vector list 
                if(V[N-1][i] == words){
                found = true;
                break;
                }
            } 
            if(!found){
                V[N-1].push_back(words);
            }
        }
    }

    cout << "OUTPUT: " << endl;
    for(int i = 0; i < 10; i ++){
        if(!V[i].empty()){//check if theres an empty container in list
            for(int j = 0; j < V[i].size(); j++){
                cout << V[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;

}
