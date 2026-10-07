#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

int main(){
    list<int> l;
    l.push_back(1);  // push_back()
    l.push_back(2);

    l.push_front(3); // push_front()
    l.push_front(4); 
    
    for(int i : l){
        cout << i << " ";   // 4 3 1 2
    }

    l.pop_front();  // pop_front()
    l.pop_back();
    
    l.insert(l.begin(), 3);  // insert()
    l.erase(l.begin()); // erase()

    cout << endl;

    for(int j : l){
        cout << j << " ";   // 3 1
    }

    l.clear();
    
    cout << endl;

    for(int k : l){
        cout << k << " ";   // 4 3 1 2
    }


    return 0;
}