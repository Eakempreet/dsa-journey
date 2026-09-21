#include <iostream>
#include <set> // sorted and unique
using namespace std;

int main(){

    set<int> s;
    s.insert(5); // {5}
    s.insert(3); // {3, 5}
    s.insert(8); // {3, 5, 8}
    s.insert(3); // ignored, 3 already exists
    s.emplace(1); // {1, 3, 5, 8}

    for(int x: s){
        cout << x << " "; // 3 5 8
    }
    cout << endl;

    auto it1 = s.find(8);
    cout << *it1 << endl; // value at the iterator given by find, gives 8

    auto it2 = s.find(5);
    cout << *it2 << endl; // 5

    auto it3 = s.end();
    if(it3 != s.end()){
        cout << *it3; // never reachged, since it is end() that is one step ahead after the last element 
    }                 // If elemnt not in the set always point to the s.end()
    else{
        cout << "Nothing here, end() is not a valud element." << endl;
    }

    s.erase(5); // erases 5 from the set  {1, 3, 8}

    int cnt = s.count(1);
    cout << cnt << endl;

    auto it4 = s.find(3); // {1, 8}
    s.erase(it4);

    s.insert(10); // {1, 8, 10}
    s.insert(-1); // {-1, 1, 8, 10}
    s.insert(15); // {-1, 1, 8, 10, 15}

    auto it5 = s.find(1);
    auto it6 = s.find(10);
    s.erase(it5, it6); // (start, end), erases 1, 8 (10 is NOT erased, since range is exclusive of it6)
                       // {-1, 10, 15}

    for(int x: s){
        cout << x << " ";
    }
    cout << endl;
    
    auto it7 = s.lower_bound(-1);
    auto it8 = s.upper_bound(15);


    // new set
    set<int> st = {1, 5, 8, 10, 15, 19};

    auto lb = st.lower_bound(8);
    auto up = st.upper_bound(8);

    cout << "Atleast 8 or greater: " << *lb << endl; // 8
    cout << "Strictly greater than 8: " << *up << endl; // 10




    return 0;
}