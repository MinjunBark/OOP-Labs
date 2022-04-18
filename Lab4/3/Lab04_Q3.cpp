#include <iostream>
#include <string>
#include <fstream>
#include "LinkedList.h"
#include <vector>


using namespace std;
//created my own linked list and pasted in LinkedList.h 

int main(){
    Node* head= NULL; //list is empty
    Node* newhead = new Node();
    ifstream inputfile("input.txt");
    string line;

    while(!inputfile.eof()){
        inputfile >> line;
        double* temp = new double();
        *temp = stod(line); 
        // newhead->initialize(temp,&head);
        newhead->insertNode(&head,temp);
        // cout << "Output: ";
        newhead->printNode(head);
        cout << endl;
        // cout << line << endl;
    }


    return 0;
}
