#ifndef LinkedList_h
#define LinkedList_h
#include <iostream>

using namespace std;

class Node{
    public:
        double data;
        Node* next;
        
        void initialize(double dat, Node* nxt) {
			data = dat; //value of node 
			next = nxt; // points to next node 
		}

// Node *head = NULL;
// };

    void insertNode(Node** pointertohead, double* newData){
        Node* temp = new Node();
        temp->data = *newData;
        temp->next = NULL; //when list is empty
        // *pointertohead = temp;
        if(*pointertohead != NULL){
            temp->next = *pointertohead;
        }
        *pointertohead = temp;
        
        // Node* temp2 = new Node();
    }

    void printNode(Node* head){
        if(head == NULL){
            cout<< endl;
        }else{
            cout << head->data << " ";
            head = head->next;
        }

    }
};
#endif