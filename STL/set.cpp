#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;


int main(){
    unordered_multiset<int> s;

    s.emplace(35);
    s.emplace(6);
    s.emplace(77);
    s.emplace(14);
    s.emplace(53);

    
    s.emplace(35); //repeatative elements are not stored in set but are stored in  multiset
    s.emplace(6);
    s.emplace(77);

    cout << "Size = " <<s.size() << endl;
    // cout <<"Lower bound = " << *(s.lower_bound(54)) << endl; // lower bound gives iterator or immediate afters iterator,s.end() if element extends above the data in set
    // cout << "Upper bound = " << *(s.upper_bound(54)) << endl;

    for(auto val : s){
        cout << val << " "  ; 
    }
    cout << endl;

    return 0;
}