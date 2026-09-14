#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int> st;

    st.push(10); // {10}
    st.push(20); // {20, 10}
    st.push(30); // {30, 20, 10}
    st.emplace(5); // {5, 30, 20, 10}

    cout << st.top() << endl; // 30, the last one pushed
    st.pop(); // removes 30
    cout << st.top() << endl;; // now 20

    cout << st.size() << endl; // 4
    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);

    return 0;
}