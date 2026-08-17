/*
#include <iostream>
using namespace std;
// 1D array
int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << "Number entered are:" << endl;
    for(int i=0; i<5; i++){
        cout << arr[i] << endl;
    }

    arr[3] = 100;
    cout << arr[3];

    return 0;
}
*/
/*
#include <iostream>
using namespace std;
// 2D array
int main(){
    int arr[3][5];  //3 rows and 5 columns

    arr[1][3] = 78;
    cout << arr[1][3] << endl;
    cout << arr[0][0] << endl; // not initialized, so will store Garbadge value
    cout << arr[1][2] << endl;
    return 0;
}
*/

#include <iostream>
using namespace std;

int main(){
    string s = "Hello! world...";
    int len = s.size();

    cout << len << endl;
    s[len-1] = 'x';
    cout << s[len-1];
    return 0;
}