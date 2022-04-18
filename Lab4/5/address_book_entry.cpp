#include <iostream>
#include "Entry.h"
#include <string>

int main(int argc, const char * argv[])
{
    string name, lastname, email;
    cout << "Name: " << endl;
    cin >> name;
    cout << "Last name: " << endl;
    cin >> lastname;
    cout << "Email: " << endl;
    cin >> email;
    
    Entry myEntry;
    
    myEntry.setName(name);
    myEntry.setLastname(lastname);
    myEntry.setEmail(email);
    
    myEntry.print();
    
    return 0;
}