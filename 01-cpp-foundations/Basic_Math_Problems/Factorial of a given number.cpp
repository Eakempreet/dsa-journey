#include<bits/stdc++.h>
using namespace std;

// https://takeuforward.org/practice/dsa/factorial-of-a-given-number-i

// int factorial(int n) {
//     if(n==0) return 1;
//     return n * factorial(n-1);
// }

int factorial(int n){
    int fact=1;
    while(n>0){
        fact = fact * n;
        n--;
    }
    return fact;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial: " << factorial(num);
    return 0;
}