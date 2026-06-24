#include <iostream>
using namespace std;

int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << "Number entered are:" << endl;
    for(int i=0; i<5; i++){
        cout << arr[i] << endl;
    }

    return 0;
}