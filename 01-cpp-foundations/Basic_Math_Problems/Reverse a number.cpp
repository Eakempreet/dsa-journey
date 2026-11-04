#include<bits/stdc++.h>
using namespace std;23-0

void reverseNumber(int n) {
    if(n==0) return;
    while(n>0){
        int num = n%10;
        n = n/10;
        cout << num;
    }
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    reverseNumber(num);

    return 0;
}