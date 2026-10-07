#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q;  // first in and first out
 
    q.push(1);     // push()
    q.push(2);
    q.push(3);
    q.push(4);

    // swaping the queue
    queue<int> q2;
    q2.swap(q);    // swap()

    cout << q.size() << endl; // 0  size()
    cout << q2.size() << endl; // 4  

    return 0;
}