#include<iostream>
#include<vector>
using namespace std;


int main(){
    // vector<int> vec = {3,55,84,69,12};
    vector<pair<int,int> vec = {{3,5},{5,8},{4,6},{9,1},{2,9}};


    sort(vec.begin(),vec.end()); //default : sorts in ascending order
    sort(vec.begin(),vec.end(),greater<int>()); //greater<int>() is called a comparator it prints in des. order

    for(auto val : vec){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}