#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;


int main(){
    unordered_map<string,int> um;

    um.emplace("rose",9);
    um.emplace("teddy",11);
    um.emplace("chocolate",8);
    um.emplace("promise",12);

    for(auto p : um){
        cout << p.first << " = " << p.second << endl;
    }


    return 0;
}