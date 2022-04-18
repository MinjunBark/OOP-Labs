#ifndef Entry_h
#define Entry_h

#include <iostream>
#include <string>


using namespace std;

class Entry{
    public:

    string set_name;
    string set_Last;
    string set_email;


    string setName(string name_entry){
        set_name = name_entry;
        return set_name;
    }

    string setLastname(string Lastname_entry){
        set_Last = Lastname_entry;
        return set_Last;
    }

    string setEmail(string email_entry){
        set_email = email_entry;
        return set_email;
    }

    void printEntry(){
        cout << "First Name: " << set_name << endl;
        cout << "Last Name: " << set_Last << endl;
        cout << "Email: " << set_email << endl;
    }

};
#endif