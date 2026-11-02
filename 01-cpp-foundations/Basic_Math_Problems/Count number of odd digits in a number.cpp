#include <bits/stdc++.h>
using namespace std;

// https://takeuforward.org/practice/dsa/count-all-digits-of-a-number

int countDigit(int n) {
    if(n==0) return 0;
    n = abs(n);
    int count = 0;
    while(n>0){
        if ((n%10)%2!=0) count++; // checking if its odd. n%10 gives the last digit 
        n/=10;
    }
    return count;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Number of Odd Digits: " << countDigit(num);
    return 0;
}