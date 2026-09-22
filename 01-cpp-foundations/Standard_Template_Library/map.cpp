#include <iostream>
#include <map>
using namespace std;

int main(){

    map<int, int> map1;
    map<int, pair<int, int>> map2;
    map<pair<int, int>, int> map3;

    map<string, int> pb;
    pb["Eakem"] = 55555;
    pb["James"] = 32143;
    pb["Starbucks"] = 78766;

    // iterate - comes out as sorted by key automatically 
    for(auto& [name, number]: pb){
        cout << name << " : " << number << "\n";
    }

    //insertion
    map1[1] = 55;
    map1.insert({2, 66});
    map1.emplace(3, 1);
    for(auto& [num, value]: map1){
        cout << num << " : " << value << endl;
    }

    auto it = pb.find("Eakem");
    cout << it->first << " : " << it->second << endl; // Eakem : 55555

    cout << pb.count("Eakem") << endl; // 1
    cout << pb.count("hello") << endl; // 0

    pb.erase("James");
    for(auto& [name, number]: pb){
        cout << name << " : " << number << "\n";
    }
    // OR
    for(auto& it:map1){
        cout << it.first << " : " << it.second << endl;
    }


    cout << map1[1] << endl;
    cout << map1[2] << endl;
    cout << map1[3] << endl;
    cout << map1[4] << endl; // does not exist, gives 0

    map3[{2, 1}] = 3;
    cout << map3[{2, 1}] << endl;

    return 0;
}