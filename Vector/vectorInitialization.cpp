#include<iostream>
#include<vector>

using namespace std;

int main(){
    cout << "intializing the vector " << endl;
    vector<int> vec = {1, 2, 3, 4, 5};  // intializing the vector 
    for(int v : vec){
        cout << v << " ";
    }

    cout << endl;

    cout << "creating a vector of size 3 and repeating the same value 10 three times." << endl;
    vector<int> vec1(3, 10); // creating a vector of size 3 and repeating the same value 10 three times.
                            //it is useful in dynamic programming to create tabulation Dp[][];

    for(int v1 : vec1){
        cout << v1 << " ";
    }
    
    cout << endl;
    cout << "initializing new vector using already build vector" << endl;
    vector<int> vec2(vec1);

    for(int v2 : vec2){
        cout << v2 << " ";
    }


    return 0;
}