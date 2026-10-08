#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    // Ascending order sorting
    int arr[5] = {1, 2, 3, 4, 5};            // integer array

    sort(arr, arr + 5);                      // formula to sort in ascending order

    for(int val : arr){
        cout << val << " ";
    }                                                                   
    //---------------------------------------------------------------------------------------
    cout << endl;

    vector<int> vec = {1, 2, 3, 4, 5};       // vector array

    sort(vec.begin(), vec.end());            // formula to sort in ascending order

    for(int vecVal : vec){
        cout << vecVal << " ";
    }
    //----------------------------------------------------------------------------------------
    cout << endl;

    // Descending order sorting
    int arra[5] = {1, 2, 3, 4, 5};            // integer array

    sort(arra, arra + 5, greater<int>());     // formula to sort in a descending order

    for(int val : arra){
        cout << val << " ";
    }       
    //----------------------------------------------------------------------------------------
    cout << endl;

    // sorting pair datatype based on first element of the pair

    vector<pair<int, int>> v = {{1,2}, {8,2}, {3, 7}, {5,9}};

    sort(v.begin(), v.end());

    for(auto i : v){
        cout << i.first << " " << i.second << endl;
    }

    //---------------------------------------------------------------------------------------


    return 0;
}