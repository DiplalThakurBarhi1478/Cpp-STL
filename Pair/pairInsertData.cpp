#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}};

    vec.push_back({7, 8});  // push_back()  --> it assumes that already the pair has been made so just insert
    for(auto v1 : vec){
        cout << v1.first << " " << v1.second << endl;
    }
    cout << endl;

    vec.pop_back();   // pop_back()

    for(auto v2 : vec){    
        cout << v2.first << " " << v2.second << endl;
    }

    cout << endl;

    vec.emplace_back(7, 8);  // emplace_back  --> it automatically makes the pair it assumes pair is not created 
    // so pair is created and then inserted.
    for(auto v3 : vec){
        cout << v3.first << " " << v3.second << endl;
    }

    return 0;
}