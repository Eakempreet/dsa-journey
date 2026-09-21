#include <iostream>
#include <set>
using namespace std;

int main(){

    multiset<int> ms;
    ms.insert(5);
    ms.insert(3);
    ms.emplace(8);
    ms.insert(3); //not ignored this time
    ms.insert(5);

    for(int x: ms){
        cout << x << " ";
    }
    cout << endl;

    cout << ms.count(3) << endl; //2

    ms.erase(3); // removes all 3
    for(int x: ms){
        cout << x << " ";
    }
    cout << endl;

    auto it = ms.find(5);
    ms.erase(it); // removes the first encountered 5

    for(int x: ms){
        cout << x << " ";
    }
    cout << endl;

    ms.erase(ms.find(5), ++(ms.find(5))); // remopves 5 and stop at 8 (start, end)
    for(int x: ms){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}