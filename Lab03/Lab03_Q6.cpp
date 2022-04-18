#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//Steps:
// input >= 4 push in vector
//less than 3 use the first char to find words 
//input quit and output

vector<string> matchbysubstring(vector<string> wordsList, string substr){ //matching the function when word.size() <= 3
    vector<string> matches; //creating a new vector to match the words in wordslist
    // string words;
    for(int i = 0; i < wordsList.size(); i++){
        string words;
        words = wordsList.at(i);
        //converting words to lower case sensitive
        transform(words.begin(), words.end(), words.begin(), ::tolower);
        transform(substr.begin(), substr.end(), substr.begin(),::tolower);

        size_t found = words.find(substr); //size_t is a unsigned int iterator

        if(found != string::npos){ //npos = until end of string 
            matches.push_back(wordsList.at(i));
        }
    }
    return matches;
}

void printWordList(vector<string> words){
    for(int i =0; i < words.size(); i++){
        cout << words.at(i) << " ";
    }
}

int main(){
    vector<string> matches;
    vector<string> wordslist;
    string words;

    while(1){
        cin >> words;

        if(words.size() <= 3){
            matches = matchbysubstring(wordslist,words);
        }else{
            wordslist.push_back(words);
        }
        
        if(words == "quit"){
            if(!matches.empty()){
                break;
            }
        }

    }

    cout << "Output: " << endl;
    printWordList(matches);

    return 0;
}