#include<iostream> //*//
#include<vector>
using namespace std;

// int maxArea(vector<int> height){
//     int maxWater = 0;

//     for(int i=0; i<height.size(); i++){
//         for(int j=i+1; j<height.size(); j++){
//             int width = j - i;
//             int ht = min(height[i] , height[j]);
//             int currWater = width * ht;

//             maxWater = max(maxWater , currWater);
//         }
//     }

//     return maxWater;
// }

int maxArea(vector<int> height){
    int maxWater = 0; //ans
    int lp = 0, rp = height.size()- 1;

    while(lp < rp){
        int width = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = width * ht;

        maxWater = max(maxWater, currWater);

        
        height[lp] < height[rp] ? lp++ : rp--;
    }

    return maxWater;
}

int main(){
    vector<int> Height = {1, 8, 5, 66, 25, 98, 31, 46, 57};

    int ans = maxArea(Height);
    cout << "Area of water that contains most water is " << ans << endl;
    return 0;
}