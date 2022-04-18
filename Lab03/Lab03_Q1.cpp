#include <iostream>
#include <vector>
#include <string> 
using namespace std;

int isCapitialChar(char firstCharacter){ //capital check 
    //check if its capital 
    if(firstCharacter >= 'A' && firstCharacter <='Z'){
        return 1;//return true 
    }
    return 0; //else false (not capital)
} 

void printWordList(vector<string> wordList, char firstChar){ //printing the list 
    for(int i = 0; i < wordList.size(); i++){
        string word = wordList.at(i);

        if (tolower(word[0]) == firstChar) {
            cout << word << endl;
        }

    }
}

int main (){
    vector<string> wordList;
    string word;

    while(1){
        cout << "Enter a word to put in list(Must be capitalized): ";
        cin >> word;

        char firstCharacter = word[0];

        if(!isCapitialChar(firstCharacter)){ //if first char of word is not capital 
            cout << "Output: " << endl;
            printWordList(wordList, firstCharacter);
        } else {
            wordList.push_back(word);
        }

        if(word == "quit"){
            if(!wordList.empty())
            break;
        }
    }

    return 0;
}

