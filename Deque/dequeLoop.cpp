#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main(){
    deque<int> d = {1, 2, 3, 4, 5, 6};

    deque<int> :: iterator it;

    for( it = d.begin(); it != d.end() ;  it++ ){
        cout << *(it) << " ";
    }

    return 0;
}