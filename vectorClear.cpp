#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    vec.clear();  // deleting all those elements in the vector
                // size changes to 0 and capacity remains the same.

    for(int v : vec){
        cout << v << " ";  // prints nothing
    }

    cout << "vector size : " << vec.size() << endl;  // size : 0
    cout << "vector capacity : " << vec.capacity() << endl; // capacity : 5

    cout << "checking emptiness :  " << vec.empty() << endl; // True

    return 0;
}