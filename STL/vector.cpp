#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> vec ;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.emplace_back(6);
    vec.emplace_back(36);
    vec.emplace_back(9);
    vec.emplace_back(4);

    // for(int i = 0 ; i<vec.size() ; i++){
    //     cout << vec[i] << " ";
    // }
    // cout << endl;
    
    // vec.pop_back();
    // cout << vec.size() << " " << vec.capacity() << endl;
    // cout << vec.front() << " " << vec.back() << endl;

    // vector<int> vec2(vec);

    // vec2.erase(vec2.begin()+2,vec2.end()-2);
    // vec2.insert(vec2.begin()+1,55);

    // for(int i = 0 ; i < vec2.size() ; i++){
    //     cout << vec2[i] << " ";
    // }
    // cout << endl;
    // vec2.clear();

    //**// 
    vector<int> :: iterator it;

    for(it = vec.begin(); it!= vec.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    cout << "Here comes reverse" << endl;
    for(auto it = vec.rbegin(); it!= vec.rend(); it++){
        cout << *(it) << " ";
    }
    return 0;
}