#include <iostream>
using namespace std;


// *containing 1 char and 1 double
// • 2 chars and 1 double
// • 3 chars and 1 double
// • 4 chars and 1 double
// • an empty struct
// • 1 char, followed by 1 int and then 1 char
// • 2 chars followed by 1 int

struct test1{
    char x;
    double y;
};
struct test2{
    char x;
    char x2;
    double y;
};
struct test3{
    char x;
    char x2;
    char x3;
    double y;
};
struct test4{
    char x;
    char x2;
    char x3;
    char x4;
    double y;
};
struct test5{
    
};
struct test6{
    char x;
    int z;
    char x2;
};
struct test7{
    char x;
    char x2;
    int z;
};


int main(){
    cout << sizeof(test1) << " bits" << endl;
    cout << sizeof(test2) << " bits" << endl;
    cout << sizeof(test3) << " bits" << endl;
    cout << sizeof(test4) << " bits" << endl;
    cout << sizeof(test5) << " bits" << endl;
    cout << sizeof(test6) << " bits" << endl;
    cout << sizeof(test7) << " bits" << endl;


    return 0;
}