#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    for(int v : vec){
        cout << v << " ";
    }

    cout << endl << endl;

    vec.erase(vec.begin()); // using erase function and passing a iterator to remove first element
    for(int v1 : vec){
        cout << v1 << " ";
    }

    
    cout << endl << endl;

    vec.erase(vec.begin() + 2); // using erase function and passing a iterator to remove third element
    for(int v2 : vec){
        cout << v2 << " ";
    }


    
    cout << endl << endl;

    vec.erase(vec.begin()+1, vec.begin() + 3); // using erase function and passing a iterator to remove elements in a range
    for(int v3 : vec){                         // range look like [closed, open)
        cout << v3 << " ";
    }

    return 0;
}