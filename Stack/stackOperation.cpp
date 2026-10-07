#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    stack<int> s;
    s.push(1);  // pushing
    s.push(2);
    s.push(3);
    s.push(4);

    //swapping
    stack<int> s2;
    s2.swap(s);    // swaping

    cout << "s size : " << s.size() << endl;  // size
    cout << "s1 size : " << s2.size() << endl;

    while(!s2.empty()){
        cout << s2.top() << endl;  // top
        s2.pop();                  // pop
    }

    return 0;
}