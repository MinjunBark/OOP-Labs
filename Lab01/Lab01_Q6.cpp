#include <string> 
#include <iostream> 
#include <fstream> 
#include <vector>
using namespace std;
//copied from Fillvector.cpp
//concataned as in squished code output? 
int main()
{
    vector<string> v;
    ifstream in("code.cpp");
    string line;
    while (getline(in, line)) //getline returns true if read successfully
    v.push_back(line); // Add the line to the end of v // Add line numbers:
    for(int i = 0; i < v.size(); i++)
        cout << v[i];

    // cout << "REVERSED" << endl;
    // //reverse the lines printed 
    // for(int i = v.size(); i <= v.size(); i--)
    //     cout << v[i];
}