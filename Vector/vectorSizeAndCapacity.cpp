#include<iostream>
#include<vector>

using namespace std;

int main(){
    // size of vector
    vector<int> vec;
    cout << vec.size() << endl;  // size : 0, capacity : 0
    cout << vec.capacity() << endl;

    vec.push_back(1); // size : 1, capacity : 1
    cout << vec.size() << endl;  
    cout << vec.capacity() << endl;

    vec.push_back(2); // size : 2, capacity : 2
    cout << vec.size() << endl;  
    cout << vec.capacity() << endl;

    vec.push_back(3); // size : 3, capacity : 4
    cout << vec.size() << endl;  
    cout << vec.capacity() << endl;


    //printing the element of the vector
    for(int i{0}; i < vec.size(); ++i){
        cout << i + 1 << "th element is " << vec[i] << endl;
    }

    return 0;

}