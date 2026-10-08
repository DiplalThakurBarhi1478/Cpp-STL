#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2){        // custome comparator
    if(p1.second < p2.second){
        return true;
    }if(p1.second > p2.second){
        return false;
    }
    if(p1.first < p2.first) {
        return true;
    }else{
        return false;
    }
}

int main(){
    vector<pair<int, int>> vec = {{1,2}, {4,9}, {5,6}, {2, 2}};

    sort(vec.begin(), vec.end(), comparator);

    for(auto val : vec){
        cout << val.first << " " << val.second << endl;
    }

    return 0;
}