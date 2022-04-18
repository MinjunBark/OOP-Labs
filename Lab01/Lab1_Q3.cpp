#include <iostream>
#include <fstream>

using namespace std;

int main (){
    //count words in textfile
    int wordCount = 0;
    string ch;
    ifstream file;

    file.open("words.txt");
    
    if(file.is_open()){
        while(file >> ch){
            wordCount++;
        }
        cout << "Word count in .txt file = " << wordCount << endl;
    }
    file.close();
    return 0;
}

// int main (){
//     int spacecount = 0;
//     char ch;
//     ifstream file; //read file 

//     file.open("words.txt");

//     if(file.is_open()) {
//         while (file.get(ch)) {
//             if (ch == ' ') {
//                 spacecount++;
//             }
//         }
//         cout << "White space count in .txt file = " << spacecount << endl;
//     }
//     file.close();
//     return 0;
// }