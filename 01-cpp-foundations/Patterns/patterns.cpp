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

    // * * * * * * * * * 
    //   * * * * * * *   
    //     * * * * *     
    //       * * *       
    //         *         
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

    //      * 
    //     ***
    //    *****
    //   *******
    //  *********
    //  *********
    //   *******
    //    *****
    //     ***
    //      *

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " " << " ";
        }
        for(int k=0; k<2*i+1; k++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    for(int i=0; i<n; i++){
        for(int l=0; l<i; l++){
            cout << " " << " ";
        }
        for(int m=0; m < 2*n - (2*i+1); m++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void print10(int n){

    // *
    // * *
    // * * * 
    // * * * *
    // * * *
    // * *
    // *

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    for(int i=0; i<n-1; i++){
        for(int k=0; k<n-i-1; k++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void print11(int n){
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    int num = 1;
    for(int i=0; i<n; i++){
        if(i%2==0) num = 1;
        else num = 0;

        for(int j=0; j<=i; j++){
            cout << num << " ";
            num = 1 - num;
        }
        cout << endl;
    }
}
void print12(int n){
    // 1             1
    // 1 2         2 1
    // 1 2 3     3 2 1
    // 1 2 3 4 4 3 2 1

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << j+1 << " ";
        }
        for(int k=0; k < n-i-1; k++){
            cout << " " << " ";
        }
        for(int l=0; l < n-i-1; l++){
            cout << " " << " ";
        }
        for(int m=i+1; m > 0; m--){
            cout << m << " ";
        }
        cout << endl;

    }
}
void print13(int n){
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
     
    int num = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            num++;
            cout << num << " ";
        }
        cout << endl;
    }
}
void print14(int n){
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    // A-Z -> 65 to 90, n=5

    for(int i=0; i<n; i++){
        for(char j='A'; j< 'A' + i + 1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print15(int n){
    // ABCDE
    // ABCD
    // ABC
    // AB
    // A

    for(int i=0; i<n; i++){
        for(char j='A'; j< 'A' + (n-i); j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print16(int n){
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE

    char ch = 'A';
    for(int i=0; i<n; i++){
        ch = 'A' + i;
        for(int j=0; j < i + 1; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print17(int n){
    //     A
    //    ABA
    //   ABCBA
    //  ABCDCBA
    // ABCDEDCBA

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " "; 
        }
        for(char k='A'; k <'A' + i + 1; k++){
            cout << k;
        }
        for(char l='A'; l<'A'+i; l++){
            cout << l;
        }
        cout << endl;
    }
}
void print18(int n){
    // E 
    // D E 
    // C D E 
    // B C D E 
    // A B C D E
    // n=5

    for(int i=0; i<n; i++){
        char ch = 'A' + n;
        for(char j=ch; j<='A'; j--)
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

        print17(n); 
    }
    
    return 0;
}