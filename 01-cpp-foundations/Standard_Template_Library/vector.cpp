#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Declaration of vector 
    vector<int> v1;

    v1.push_back(1);
    v1.emplace_back(2);

    vector<pair<int, int>> v2;

    v2.push_back({1, 2});
    v2.emplace_back(1, 2);

    vector<int> v3(5, 100); // size, value

    vector<int> v4(5); // 5 value with 0 

    vector<int> v5(5, 20);
    vector<int> v6(v5); // copy of v5
    
    // TRAVERSING OF VECTOR
    vector<int>::iterator iter = v1.begin();
    iter++;
    cout << *iter << " " << endl;

    iter = iter + 2;   // only has 0 and 1 but here its 3
    cout << *iter << " Garbage Value" << endl;  // garbage value sitting at that memory location since it is out of index bound

    vector<int>::iterator it1 = v1.begin();
    vector<int>::reverse_iterator it2 = v1.rend();
    vector<int>::reverse_iterator it3 = v1.rbegin();

    cout << v1[0] << " " << v1.at(0) << endl;

    cout << v1.back() << " " << endl;

    
    for(vector<int>::iterator it = v5.begin(); it != v5.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for(auto it = v6.begin(); it != v6.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for(auto it: v1){
        cout << it << " ";
    }


    // Deletion of Vector
    vector<int> v = {10, 20, 12, 23, 35, 55, 5};

    v.erase(v.begin()+1);

    // {10, 12, 23, 35, 55, 5}
    v.erase(v.begin() + 2, v.begin() + 4); // {10, 12, 55, 5} 
                                           // erase(start, end)

    // Insert Function
    vector<int> v7(2, 100); // {100, 100}
    v7.insert(v7.begin(), 300); // {300, 100, 100}
    v7.insert(v7.begin()+1, 2, 10); // {300, 10, 10, 100, 100}
                                           
    vector<int> copy(2, 50); // {50, 50}
    v7.insert(v7.begin(), copy.begin(), copy.end()); // {50 , 50, 300, 10, 10, 100, 100}

    // {50 , 50, 300, 10, 10, 100, 100}
    cout << endl << v7.size() << endl;

    // {50 , 50, 300, 10, 10, 100, 100}
    v7.pop_back(); // {50 , 50, 300, 10, 10, 100}

    vector<int> a = {10, 20, 30};
    vector<int> b = {40 , 50};
    a.swap(b);
    // a = {40 , 50}
    // b = {10, 20, 30}


    v7.clear();
    cout << v7.empty();

    return 0;
}