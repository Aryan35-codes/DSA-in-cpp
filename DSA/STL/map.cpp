#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int>m;

    m["tv"] = 100;
    m["laptop"] = 50;
    m["headphones"] = 100;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera" , 25}); //insert or emplace
    m.erase("tv");
    m.erase("camera");


    for(auto p : m){
        cout << p.first << " = " << p.second << endl;
    }

    cout << "Count = " << m.count("laptop") << endl; //returns how many times key laptop is repeated

    if(m.find("camera") != m.end()){ //"find function" if found returns iterator if not returns m.end()
        cout << "found" << endl;
    }else{
        cout << "Camera not found" << endl;
    }

    return 0;
}
