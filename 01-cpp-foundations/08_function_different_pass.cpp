#include <iostream>
#include <math.h>
using namespace std;

/*
Function can be passed in three ways:
1. Pass by pointer -> function gets a copy of an address, but can use that address to modify the original
2. Pass by reference -> function gets a direct alias to the original, no copying involved at all
3. Pass by value -> function gets a copy of the value, original is untouched
*/

// Pass By Value
// void doSomething(int num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// Pass by value (copy is made)
// ├── copy of a plain value (int, char, etc.) → can't affect original
// └── copy of an address (pointer) → CAN affect original, by reaching through
// void doSomething(string s){
//     s[0] = 't';
//     cout << s << endl;
// }

// Pass by reference
// void doSomething(string &s){  // & -> Get the address of the variable
//     s[0] = 't';
//     cout << s << endl;
// }

// Pass By Reference
void doSomething(int &num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}


int main(){
    int num = 10;
    doSomething(num);
    cout << num << endl;

    // string s = "Eakem";
    // doSomething(s);
    // cout << s << endl;
    // return 0;
}