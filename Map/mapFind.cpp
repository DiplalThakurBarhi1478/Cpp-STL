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

    m.insert({"wifi", 900});             // insert required already built pair 
    m.emplace("laptop", 15000);          // emplace will pair the key and value pair together...


    if(m.find("camera") != m.end()){      // this is the logic of the find function
        cout << "Found" << endl;
    }
    else{
        cout << "Not found" << endl;   
    }

    return 0;
}