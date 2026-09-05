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
    /*                   cols
    *****      row 1 -> star 5  -> sum = 1 + 5 = 6
    ****       row 2 -> star 4  -> sum = 2 + 4 = 6
    ***        row 3 -> star 3  -> sum = 3 + 3 = 6
    **         row 4 -> star 2  -> sum = 4 + 2 = 6
    *          row 5 -> star 1  -> sum = 5 + 1 = 6
    
    So number of stars to print in each line = 6 - row
                                             = 5 + 1 - i
                                             = n+1-i
    */
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void print6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print7(int n){
    
    for(int i=1; i<=n; i++){
        //space
        for(int j=1; j<=n-i; j++){
            cout << " " << " ";
        }
        //star
        for(int k=1; k<=2*i-1; k++){
            cout << "* ";
        }
        //space
        for(int l=1; l<=n-i; l++){
            cout << " " << " ";
        }
        cout << endl;
    }
}
void print8(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        //star
        for(int k=0; k<2*n-(2*i+1); k++){
            cout << "* ";
        }
        //space
        for(int l=0; l<i; l++){
            cout << "  ";
        }
        cout << endl;
    }
}
void print9(int n){

}


int main(){

    int j;
    cout << "Enter number of times to run: ";
    cin >> j;

    for(int i=1; i<=j; i++){
        int n;
        cout << "Enter: ";
        cin >> n;

        print9(n);

    }
    
    return 0;
}