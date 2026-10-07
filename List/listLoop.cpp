#include<iostream>
#include<list>
#include<string>

using namespace std;

int main(){
    list <int> l = {1, 2, 3, 4, 5, 6};

    list<int> :: iterator it;

    for( it = l.begin(); it != l.end() ;  it++ ){
        cout << *(it) << " ";
    }

    return 0;
}