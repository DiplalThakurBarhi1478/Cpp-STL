#include<iostream>
#include<string>
#include<vector>

// pair is a utility library

using namespace std;

int main(){
    pair<int ,int> p1 = {3, 5};  // similar datatype

    cout << p1.first;
    cout << p1.second;

    cout << endl;

    pair<char, int> p2 = {'a' , 1};  // different datatypes
    
    cout << p2.first;
    cout << p2.second;

    cout << endl;

    pair<char, pair<int, int>> p3 = {'a', {2, 4}};  // pairs of pair

    cout << p3.first << " ";
    cout << p3.second.first << " ";
    cout << p3.second.second << endl;


    cout << endl;
    vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}}; // vector of pairs
    for(pair<int, int> p : vec){
        cout << p.first << " " << p.second << endl;
    }

    // using auto
    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }
    return 0;

}