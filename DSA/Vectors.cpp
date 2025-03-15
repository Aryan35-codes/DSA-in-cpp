#include <iostream>
#include <vector>
using namespace std;

int main() {
    //vector<char> vec = {'!','@','#','$'}; 
    // for (int i=0;i<3;i++){
    //     cout << vec[i] << "\t";
    //   }

    // for(char ch : vec){  // for each loops
    //     cout << ch << " ";
    // }

    // cout << "size = " << vec.size() << endl;
    // vec.push_back('+');
    // cout << "size after push_back = " << vec.size() << endl;//adds in an element
    // vec.pop_back();
    // cout << "size after pop_back = " << vec.size() << endl;//deletes last element
    // cout << vec.front() << endl; //returns first element
    // cout << vec.back() << endl; //returns last element
    // cout << vec.at(2) << endl; //returns element at index 
  
    // vector<int> vec;
    
    // vec.push_back(8);
    // vec.push_back(6);
    // vec.push_back(3);
    // vec.push_back(2);
    // vec.push_back(55);

    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;

    //Single Number //**// 

    vector <int> nums = {4, 1, 2, 1, 2, 6, 9, 6, 4};
    int ans = 0;
    for(int val : nums){
        ans = ans ^ val;
    }

    cout << "Unique value = " << ans << endl;
    return 0;
}