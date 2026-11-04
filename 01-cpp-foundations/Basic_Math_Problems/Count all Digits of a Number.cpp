#include<bits/stdc++.h>
using namespace std;

// https://takeuforward.org/practice/dsa/count-all-digits-of-a-number

// int countDigits(int n) {
//     if(n==0) return 1;
//     n = abs(n);

//     int count = 0;
//     while(n>0){
//         count++;
//         n/=10;
//     }
//     return count;
    
// }

// Loop:     whole numbers only, no rounding risk, works for every input
// Formula:  floating point, edge cases to guard, only answers one question
// complexity: O(log10(n))

// Another way but less robust
int countDigits(int n) {
    if(n==0) return 1;
    n = abs(n);
    int count = (int)log10(n) + 1;
    return count;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Number of Digits: " << countDigits(num);
    return 0;
}
