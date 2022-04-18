#include <iostream>
#include <fstream>

using namespace std;

int main (){
    //find specific words from the txt file and count 
    int wordCount = 0;
    string ch;
    string find;
    ifstream file;

    file.open("words.txt");
    cout << "Which words would you like to find? " << endl;
    cin >> find;
    if(file.is_open()){
        while(file >> ch){
            if(find == ch){
                wordCount++;
            }
        }
        cout << "Your word count in this file is: " << wordCount << endl;
    }
    file.close();
    return 0;
}