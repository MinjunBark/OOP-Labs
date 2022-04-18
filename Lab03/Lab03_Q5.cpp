#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Extend the program from the previous exercise in the following way: after all input strings are read, you will output
// for each non-empty entry of V the number of letters in that entry and the number of strings in that entry. In the
// following example the same input is used from the previous exercise, and the resulting outputs are pairs for each
// index in V. For the first output line, 1 and 1, means there is one string with length 1, for a total of 1 character.
// Whereas the fifth output line, there is a 15 and 3, because there are 3 strings that have length 5 for a total of
// 15 characters. The order of the output is similar to the previous exercise, except this time the output is the total
// characters instead of the strings.

//Steps:
//you will output for each non-empty entry of V the number of letters in that entry and the number of strings in that entry.
//1 and 1, means there is one string with length 1, for a total of 1 character. 
//15 and 3, because there are 3 strings that have length 5 for a total of 15 characters.

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
            for(int i = 0; i < V[N-1].size(); i++){
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
//output has to be in char to int to count 
    cout << "OUTPUT: " << endl;
    for(int i = 0; i < 10; i ++){
        if(!V[i].empty()){//check if theres an empty container in list
            int sum = 0; 
            for(int j = 0;j < V[i].size();j++){
                sum = sum + V[i][j].size();
            }
            cout << sum << " " << V[i].size() << endl;
        }
    }
    return 0;

}