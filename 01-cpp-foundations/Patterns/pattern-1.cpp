#include <iostream>
using namespace std;



void print1(int n){

        /*
    *****
    *****
    *****
    *****
    *****
    */

    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << '*';
        }
        cout << '\n';
    }
}
void print2(int n){
    /*
    *
    **
    ***
    ****
    *****
    */
    for (int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << '*';
        }
        cout << '\n';
    }
}
void print3(int n){
    /*
    1
    12
    123
    1234
    12345
    */
    for (int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << j+1;
        }
        cout << '\n';
    }
}
void print4(int n){
    /*
    1
    22
    333
    4444
    55555
    */
    for (int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << i+1;
        }
        cout << '\n';
    }
}
void print5(int n){
    /*
    *****
    ****
    ***
    **
    *
    */
    for (int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << "* ";
        }
        cout << '\n';
    }
}

int main(){

    int j;
    cout << "Enter number of times to run: ";
    cin >> j;

    for(int i=1; i<=j; i++){
        int n;
        cout << "Enter: ";
        cin >> n;

        print5(n);

    }
    
    return 0;
}