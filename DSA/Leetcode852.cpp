//Peak index in Mountain Array
#include<iostream>
#include<vector>
using namespace std;

int PeakIndex(vector <int>&arr){
    int st = 1;
    int end = arr.size() - 2;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            return mid;
        }  else if(arr[mid-1] < arr[mid]) { //search in right
                st = mid + 1;
        }  else{                      //search in left
            end = mid - 1;
        }
    }   


    return -1;   
}

int main(){
    vector <int>arr = {0,3,8,9,5,2};

    int peakidx = PeakIndex(arr);
    int peakValue = arr[peakidx];
    cout << "Peak index = " << peakidx << endl;
    cout << "Peak Value = " << peakValue << endl;
    return 0;
}