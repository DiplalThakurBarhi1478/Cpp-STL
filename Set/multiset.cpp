#include<iostream>
#include<string>
#include<set>


using namespace std;

int main(){
    multiset<int> s;
 
    s.insert(1);
    s.insert(5);
    s.insert(6);
    s.insert(4);
    s.insert(2);
    s.insert(1);  
    s.insert(2);
    s.insert(4);


    for(auto i : s){            // it prints the sorted order
        cout << i << " ";
    }

    return 0;
}