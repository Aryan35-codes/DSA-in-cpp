#include<iostream>
#include<vector>
using namespace std;

// int majorityElement(vector<int>& nums){
//     int n = nums.size();

//     for(int val : nums){
//         int freq = 0;

//         for(int el : nums){
//             if(el == val){
//                 freq++;
//             }
//         }
//         if(freq > n/2){
//             return val;
//         }
//     }
//      return -1;
// }

// Moore's Voting algorithm //*//

int majorityElement(vector<int>& nums){
    int ans = 0;
    int freq = 0;

    for(int i=0; i<nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else {
            freq--;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {1 , 2 , 2 , 1 , 1};

    int ans = majorityElement(nums);

    cout << "Majority Element =  " << ans << endl;
    return 0;
}