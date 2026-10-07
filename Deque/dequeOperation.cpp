#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main(){
    deque<int> d;

    d.push_back(1); // push_back()
    d.push_back(2);

    d.push_front(3); // push_front()
    d.push_front(4);

    d.emplace_front(5);
    d.emplace_back(7);

    for(int i : d){
        cout << i << " ";
    }

    cout << endl;

    d.insert(d.begin() + 6, 19);
    d.erase(d.begin());

    for(int j : d){
        cout << j << " ";
    }

    return 0;
}