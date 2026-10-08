#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    multimap<string, int> m;    // initializing the key multimap of the string and int. 

    m.insert({"router", 100});
    m.insert({"cellPhone", 20000});
    m.emplace("tv", 40000);
    m.emplace("mobile", 1000);

    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }

    m.erase("tv");   // erasing all the pair having the key name tv.

    cout << endl;
    
    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    

    return 0;
}