#include<iostream>
#include<string>
#include<set>


using namespace std;

int main(){
    set<int> s;

    s.insert(1);
    s.insert(5);
    s.insert(6);
    s.insert(4);
    s.insert(2);

    cout << "initial set size : " << s.size() << endl;


    s.insert(1);  // this insert the same value already existed into the set so it makes no sense here using here.
    s.insert(5);
    s.insert(2);
    s.insert(4);

    cout << "after set size : " << s.size() << endl;


    for(auto i : s){            // it prints the sorted order and the unique value
        cout << i << " ";
    }

    return 0;
}