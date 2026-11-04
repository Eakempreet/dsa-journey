#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/palindrome-number/description/

bool isPalindrome(int x) {
    if (x < 0) return false;
    long long n = abs((long long)x);
    long long rev = 0;
    while(n>0){
        int digit = n%10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    if(rev > INT_MAX) return false;
    return rev==x;
}


int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << isPalindrome(num);

    return 0;
}