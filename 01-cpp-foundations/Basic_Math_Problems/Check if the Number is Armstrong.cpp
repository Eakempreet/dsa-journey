#include<bits/stdc++.h>
using namespace std;

// https://takeuforward.org/practice/dsa/check-if-the-number-if-armstrong

int digits(int n){
    int count = 0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}

bool isArmstrong(int x) {
    int n = x;
    int digit = digits(n);
    int sum = 0;
    while(n>0){
        int ld = n%10;
        sum = sum + int(round(pow(ld, digit)));
        n = n/10;
    }
    if(sum==x) return true;
    else return false;
}


int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << isArmstrong(num);

    return 0;
}