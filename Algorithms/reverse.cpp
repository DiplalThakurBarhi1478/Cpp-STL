#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5,6};

    reverse(vec.begin(), vec.end());   // reversing the vector

    for(auto val : vec){
        cout << val << " ";
    }

    return 0;
}