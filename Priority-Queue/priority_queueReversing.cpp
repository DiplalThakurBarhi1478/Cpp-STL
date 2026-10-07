#include<iostream>
#include<queue>

using namespace std;

int main(){
    
    priority_queue<int, vector<int>, greater<int>> pq2; // to reverse the order

    pq2.push(1);
    pq2.push(5);
    pq2.push(3);
    pq2.push(0);

    while(!pq2.empty()){
        cout << pq2.top() << endl;
        pq2.pop();
    }

    return 0;
}