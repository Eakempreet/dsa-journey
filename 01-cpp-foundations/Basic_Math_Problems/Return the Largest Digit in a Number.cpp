#include<bits/stdc++.h>
using namespace std;

// https://takeuforward.org/practice/dsa/return-the-largest-digit-in-a-number

int largestDigit(int n) {
    n = abs(n);
    int big = 0;
    
    while(n>0){
        int digit = n%10;
        big = max(big, digit);
        n = n/10;
    }
    return big;
}


int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Largest Digit: " << largestDigit(num);
    return 0;
}