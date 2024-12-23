//Search in Rotated Sorted Array
//Whenever Search in Sorted Array => Binary Search - O(logn)
#include<iostream>
#include<vector>
using namespace std;

int rotSortedSearch(vector<int> arr, int target){
    int st = 0 , end = arr.size();

    while(st <= end){
        int mid = st + (end - st)/2;
        if(arr[mid] == target){
            return mid;
        }

        if(arr[st] < arr[mid]){ //left sorted
           if(arr[st] <= target && target >= arr[mid]){
            end = mid - 1;
           }else {
            st = mid + 1;
            }
        }else{
            if(arr[mid] <= target && target <= arr[end]){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int ans = rotSortedSearch(arr,target);
    cout << "Index of "<< target << " is " << ans << endl;
    return 0;
}