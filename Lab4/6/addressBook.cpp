#include <iostream>

#include "AddressBook.h"
#include "Entry.h"

using namespace std;

int main(int argc, const char * argv[])
{
    int n;
    
    cout << "how many entries:" << endl;
    cin >> n;
    
    string name, lastname, email;
    
    AddressBook myAddressBook;
      
    for (int i=0; i<n; i++){
        cout << "Name: " <<endl;
        cin >> name;
        cout << "Last name: " << endl;
        cin >> lastname;
        cout << "Email: " << endl;
        cin >> email;
        
        Entry *entry = new Entry();
        entry->setName(name);
        entry->setLastname(lastname);
        entry->setEmail(email);
        myAddressBook.add(entry);
    }
    
    myAddressBook.printaddy();
    
    return 0;
}
