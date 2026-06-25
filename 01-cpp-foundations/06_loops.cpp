/*
FOR LOOP
#include <iostream>
using namespace std;

int main(){

    int i;
    for(i=10; i>0; i--){
        cout << "Hello World!" << endl;
    }
    cout << i << endl;
    return 0;
}
*/

/*
WHILE LOOP
#include <iostream>
using namespace std;

int main(){

    int i = 1;
    while(i<=5){
        cout << "Hello, World! " << i << endl;
        i = i + 1;
    }
    cout << i << endl;
    return 0;
}
*/

/**DO WHILE LOOP */
#include <iostream>
using namespace std;

int main(){

    int i = 1;
    do{
        cout << "Hello, World! " << i << endl;
        i++;
    }while(i<=5);
    cout << i << endl;
    return 0;
}