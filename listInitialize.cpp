#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

int main(){
    list<int> l = {1, 2, 3};

    for(int i : l){
        cout << i << " ";
    }
    
    return 0;
}