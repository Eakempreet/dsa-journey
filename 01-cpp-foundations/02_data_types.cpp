#include <bits/stdc++.h> //Includes almost all standard libraries at once
using namespace std;

int main(){
    // int
    int a = 10;
    // long
    long b = 15;
    // long long
    long long c = 238988989980000;

    // float, double 
    float x = 5.5f;
    float y = 5.5;   // automatically converts from double to float
    double z = 5.342;
    cout << x << endl << y << endl << z << endl;


    // string and getline
    string s1;
    string s2;
    // cin >> s1 >> s2;
    // cout << s1 << " " << s2; 

    getline(cin, s1);
    cout << s1 << endl;


    // char
    char ch;  // char ch = 'g'
    cin >> ch;
    cout << ch;

    return 0;
}