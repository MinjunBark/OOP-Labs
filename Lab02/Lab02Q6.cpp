#include <iostream>
using namespace std;

void convertbinary(int n){
    int binary[32];
    int i =0;
    while (n > 0){
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    for(int j = i -1; j >= 0; j--){
        cout << binary[j];
    }
}

int  getbit(int n, int index){
    return ((n&index)!=0); //retrieve bit from binary(n) 
}

void setbit(int n, int index){
    int temp =((1<<index) | n);
    convertbinary(temp);
}
void clearbit(int n, int index){
    int temp = (n & (~(1 << (index))));
    convertbinary(temp);
}

int main(){
    int n, index;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "Enter index: " << endl;
    cin >> index;

    convertbinary(n); //converted to binary 
    cout << endl;
    //STEPS:

    int temp = getbit(n,index);
    cout << "Get bit at position " << index << " : " << temp;
    cout << endl;

    cout << "Binary representation after setting bit at position " << index << " : ";
    setbit(n,index);

    cout <<"\nBinary representation after clearing bit at position " << index << " : ";
    clearbit(n,index);
    cout << endl;

    


    return 0;
}