#include <iostream>
#include <unordered_set>
using namespace std;

int main(){

    unordered_set<int> us;

    us.insert(5);
    us.insert(3);
    us.emplace(8);
    us.insert(3);  // ignored, duplicate

    for(int x: us){
        cout << x << " ";
        // order is NOT guaranteed, could print 3 8 5, or 8 3 5, etc.
    }
    cout << endl;

    auto it = us.find(8);
    cout << "8 Found: " << *it << endl;

    if(us.find(5) != us.end()) cout << "5 Found!" << endl;

    us.erase(3);
    for(int x: us){
        cout << x << " ";
        // order is NOT guaranteed, could print 3 8 5, or 8 3 5, etc.
    }
    cout << endl;

    cout << us.size() << endl; // 2


    return 0;
}