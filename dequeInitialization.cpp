#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main(){
    deque<int> d = {1, 2, 3};
    for(int i : d){
        cout << i << " ";
    }

    cout << endl;

    cout << d[0] << endl;
    cout << d[1] << endl;
    cout << d[2] << endl;

    return 0;
}