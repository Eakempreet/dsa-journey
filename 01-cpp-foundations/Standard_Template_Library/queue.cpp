#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(10); // {10}
    q.push(20); // {10, 20}
    q.push(30); // {10, 20, 30}

    cout << q.front() << endl; // 10
    q.pop();                   // remove 10
    cout << q.front() << endl; // 20

    cout << q.back() << endl; // newest = 30
    q.back() += 9;

    cout << q.back() << endl; //  30+9= 39

    return 0;
}