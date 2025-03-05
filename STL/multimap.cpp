#include<iostream>
#include<map>
using namespace std;


int main(){
    multimap<string,int> mum; 

    mum.emplace("tv",50);
    mum.emplace("tv",100);
    mum.emplace("tv",150);
    mum.emplace("tv",50);

    mum.erase(mum.find("tv")); //passing iterator to erase first "tv"
    mum.erase("tv"); //erases all "tv"s

    for(auto p : mum){
        cout << p.first << " = " << p.second << endl;
    }
    return 0; 
}