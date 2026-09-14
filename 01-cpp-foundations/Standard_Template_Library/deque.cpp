#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> dq = {10, 20, 30};

    dq.push_front(5); // {5, 10, 20, 30}
    dq.push_back(40); // {5, 10, 20, 30, 40}

    cout << dq[2]; // 20

    return 0;
}