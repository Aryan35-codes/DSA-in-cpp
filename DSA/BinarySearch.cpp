#include<iostream> 
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr ,int target) { //itteration
    int st = 0;
    int end = arr.size() - 1;
    
    while(st <= end){
        int mid = st + (end - st) / 2;

        if (target > arr[mid]){
            st = mid + 1;   
        }else if(target < arr[mid]){
            end = mid - 1;
        }else{
            return mid;
        }
    }    

    return -1;     
}

// int recBinarySearch(vector<int> arr, int tar, int st, int end){
//     if(st <= end){
//         int mid = st + (end - st)/2;

//     if(tar > arr[mid]){
//         return BinarySearch(arr,tar,mid+1,end);
//     }else if(tar < arr[mid]){
//         return BinarySearch(arr,tar,st,mid-1);
//     }else{
//         return mid;
//     }
//   }
// }

int main(){         //array needs to be sorted
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};//(odd) //working principle : reduce search space
    int target = 4;

    // int ans = recBinarySearch(arr1,target,arr.size());
    // cout << "Index of "<< target << " is " << ans << endl;

    int ans = BinarySearch(arr1 , target);
    cout <<"Index of "<< target << " is " << ans << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};//(even)
    int target1 = 5 ;      

    // int ans1 = recBinarySearch(arr2,target1,arr2.size());
    // cout << "Index of "<< target1 << " is " << ans1 << endl;

    int ans1 = BinarySearch(arr2 , target1);
    cout << "Index of "<< target1 << " is " << ans1 << endl; 

    return 0;
}