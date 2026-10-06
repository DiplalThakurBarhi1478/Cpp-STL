#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6};

   //vec.begin()
   cout << *(vec.begin()) << endl;
   cout << *(vec.begin() + 1) << endl;

   //vec.end() --> does pionts to last element it points to garbage element
    cout << *(vec.end() - 1) << endl;
    cout << *(vec.end()) << endl;

    //iterator in a looop
    cout << endl << endl;

    vector<int> :: iterator it;  // telling the tye and we have to tell it is iterator
    for(it = vec.begin(); it != vec.end(); ++it){
        cout << *(it) << " ";
    }

    cout << endl << endl;

    vector<int> :: reverse_iterator rit;  // this is reverse iterator.
    for(rit = vec.rbegin(); rit != vec.rend(); rit++){
        cout << *(rit) << " ";

    }

    // for simplicity we can tell the compiler that "vector<int> :: iterator "  means auto-> this breaks type easily
    return 0;
}