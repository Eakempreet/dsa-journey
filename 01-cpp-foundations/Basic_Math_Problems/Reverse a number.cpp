#include<bits/stdc++.h>
using namespace std;

// https://takeuforward.org/practice/dsa/reverse-a-number?tab=code
// https://leetcode.com/problems/reverse-integer/description/

// My way but not entirely correct
// void reverseNumber(int n) {
//     if(n==0) return;
//     while(n>0){
//         int num = n%10;
//         n = n/10;
//         cout << num;
//     }
// }

// Better way solution given as number only
// int reverseNumber(int n){
//     int rev = 0;
//     while(n>0){
//         int digit = n%10;
//         rev = rev * 10 + digit;
//         n = n/10;
//     }
//     return rev;
// }

// much better way
int reverse(int x) {
    long long n = abs((long long)x);
    long long rev = 0;
    while(n>0){
        int digit = n%10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    if(rev > INT_MAX) return 0;
    return x < 0 ? -rev: rev;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << reverseNumber(num);

    return 0;
}