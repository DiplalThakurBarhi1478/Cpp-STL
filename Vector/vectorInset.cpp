#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    vec.insert(vec.begin() + 2, 3); // inserting a value in the vector. it looks like (position, value);  Note: position is passed using iterators

    for(int v : vec){
        cout << v << " ";
    }

    return 0;
}