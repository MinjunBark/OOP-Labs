#include <iostream>
#include "Sortable.h"
#include <fstream>
#include <string>

using namespace std;

// void printSortable(Sortable<> sorted) {
//     for (int i = 0; i < sorted.size(); i++) {
//         cout << sorted[i] << " ";
//     }
// }

/** 
 * Prints out a list of ints that are read from a text file. 
 */

void printIntsSortedFromFile() {
    fstream textFile;
    textFile.open("input1.txt");
    int output;
    Sortable<int> sortint;
    
    if(textFile.is_open()){
        while(!textFile.eof()){
            textFile >> output;
            sortint.push_back(output);
            // sortint.sort();
            // cout << sortint.size() << " ";
        }

            sortint.sort();

            for (int i = 0; i < sortint.size(); i++)
            {
                cout << sortint[i] << " ";
            }

        cout << endl;
        textFile.close();
    }
}

void printCharSortedFromFile(){
    fstream textFile2;
    textFile2.open("input2.txt");
    char output2;
    Sortable<char> sortchar;
    if(textFile2.is_open()){
        while(!textFile2.eof()){
            textFile2 >> output2;

            sortchar.push_back(output2);

        }

            sortchar.sort();

            for (int i = 0; i < sortchar.size(); i++)
            {
                cout << sortchar[i] << " ";
            }

        cout << endl;
        textFile2.close();

    }
}

void printStringSortedFromFile(){
    fstream textFile3;
    textFile3.open("input3.txt");
    string output3;
    Sortable<string> sortString;
    if(textFile3.is_open()){
        while(!textFile3.eof()){
            textFile3 >> output3;

            sortString.push_back(output3);

            // cout << output3 << " " << endl;
        }

        // cout << endl;

            sortString.sort();

            for (int i = 0; i < sortString.size(); i++)
            {
                cout << sortString[i] << " ";
            }

        cout << endl;
        textFile3.close();

    }
}



int main(){

    printIntsSortedFromFile();
    printCharSortedFromFile();
    printStringSortedFromFile();
    
    return 0;
}