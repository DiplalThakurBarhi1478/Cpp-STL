#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<string, int> m;
    
    m.insert({"a", 1});
    m.insert({"b", 2});
    m.insert({"c", 3});
    m.emplace("d", 0);

    for(auto i : m){
        cout << i.first << " " << i.second << endl;     // result into the random output, no order.
    }

    return 0;
}

