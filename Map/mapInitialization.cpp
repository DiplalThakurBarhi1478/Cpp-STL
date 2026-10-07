#include<iostream>
#include<string>
#include<map>


using namespace std;

int main(){
    map<string, int> m;

    m["tv"] = 100;
    m["mobile"] = 2300;
    m["camera"] = 1500;
    m["headphones"] = 1200;
    m["watch"] = 5000;

    for(auto p : m){                      // looping into the key and value pair 
        cout << p.first << " " << p.second << endl;
    }

    m.insert({"wifi", 900});             // insert required already built pair 
    m.emplace("laptop", 15000);          // emplace will pair the key and value pair together...


    for(auto q : m){                     // inserting the key and value into the map
        cout << q.first << " " << q.second << endl;
    }

    cout << m.count("watch") << endl;   // counting the number of hte key of hte same name
    cout << m.erase("watch") << endl;   // erasing the key and value of the pair using the key
    cout << m.count("watch") << endl;

    return 0;
}