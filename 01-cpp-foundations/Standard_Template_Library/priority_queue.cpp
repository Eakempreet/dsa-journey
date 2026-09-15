#include <iostream>
#include <queue>
using namespace std;

int main(){

    priority_queue<int> pq;

    pq.push(10); // {10}
    pq.push(30); // {30, 10}
    pq.push(20); // {30, 20, 10}
    pq.emplace(1);  // {30, 20, 10, 1}

    cout << pq.top() << endl; // 30 largest
    pq.pop();         // removes 30
    cout << pq.top() << endl;  // 20 largest

    // size, swap, empty functions works same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(10); // {10}
    pq1.push(30); // {10, 30}
    pq1.push(20); // {10, 20, 30}
    pq1.emplace(1); // {1, 10, 20, 30}

    cout << pq1.top(); // 1
    return 0;
}