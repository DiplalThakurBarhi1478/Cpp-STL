#include<iostream>
#include<string>
#include<set>


using namespace std;

int main(){
    set<int> s;

    s.insert(1);
    s.insert(5);
    s.insert(6);
    s.insert(2);

    cout << *(s.lower_bound(4)) << endl;  // 5
    // it mean it will print 4 if it is exactly in the set otherwise it is going to print

    cout << *(s.lower_bound(7)) << endl;

    return 0;
}