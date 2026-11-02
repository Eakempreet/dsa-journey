#include<bits/stdc++.h>
using namespace std;

// https://takeuforward.org/practice/dsa/count-all-digits-of-a-number

int countDigits(int n) {
    if(n==0) return 1;
    n = abs(n);

    int count = 0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
    
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Number of Digits: " << countDigits(num);
    return 0;
}
