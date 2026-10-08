#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s = "abc";
    next_permutation(s.begin(), s.end());  // next permutation  --> acb

    string a = "bca";
    prev_permutation(a.begin(), a.end());

    for(auto val : s){
        cout << val << " ";
    }

    cout << endl;

    for(auto val : a){
        cout << val << " ";
    }



    return 0;
}