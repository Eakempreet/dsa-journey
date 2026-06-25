#include <iostream>
using namespace std;

// Arrays decay into a pointer to their first element when passed to a function
// So technically this is pass by pointer, not true pass by reference
// Effect looks similar (original can be modified), but mechanism is different

void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}

int main(){
    int n=5;
    int arr[n];

    for(int i=0; i<=n-1; i++){
        cin >> arr[i];
    }

    for(int i=0; i<=n-1; i++){
        cout << arr[i] << endl;
    }

    doSomething(arr, n);

    cout << "Value inside int main: " << arr[0] << endl;
}