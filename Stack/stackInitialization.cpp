#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    stack<int> s;  // intialiazation of the stack

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "top element : " << s.top() << endl;
    cout << endl;

    // This type of loop will be useful a lot in the DSA
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }

    
    return 0;
}