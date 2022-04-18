#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


// Write a program that keeps reading in integer values. If an input value is positive, store it in a vector. If the input
// value is negative, you will remove all existing values in your vector with the same absolute value. When 0 is read
// output the number of entries that remained in the vector and the sum of all entries. Then stop. In the following
// example, a sequence of numbers beginning at 1 and ending at 6 are input, followed by a -5, and finally a 0 to stop
// reading. The result is the sequence of numbers with the number 5 removed because of the -5 from the input, then
// the sum of the remaining values, 16.

int main(){
    int values;
    vector<int> valuesList;
    int sum;
   
    while(1){
        cout << "Enter a value:" << endl;
        cin >> values;

        if(values == 0){
            break;
        }

        if(values > 0){
            valuesList.push_back(values);
        }
        
        if(values < 0){ //if negative 
            int tempvalues = abs(values); //-number -> +number
            for(int i = valuesList.size() - 1; i>=0 ; i--){
                if(valuesList[i]==tempvalues){
                    valuesList.erase(valuesList.begin() + i);
                }
            }
        }
    }
    //printing 
    cout << "Output: " << endl;

    for(int i = 0; i < valuesList.size();i++){ //print whats left 
        cout << valuesList[i] << " ";
    }

    for(int j = 0; j < valuesList.size();j++){ // sum
        sum = sum + valuesList[j];
    }
    cout << sum << endl;

    return 0;
}