#include <iostream>
#include <vector>
using namespace std;

int main(){
    // int n = 5;
    // int arr[n] = {1, 2, 3, 4, 5};

    // for(int st=0; st<n; st++){
    //     for(int end=st; end<n; end++){
    //         for(int i=st; i<=end; i++){
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // } // O(n^3)

    // int n = 4;
    // int arr[] = {8, 99, -66, 32};

    // int maxSum = INT8_MIN;

    // for(int st=0; st<n; st++){
    //     int currSum = 0;
    //     for(int end=st; end<n; end++){
    //         currSum += arr[end];
    //         maxSum = max(currSum , maxSum);
    //     }
    // } // O(n^2)

    // cout << "max subarray sum = " << maxSum << endl;

    //Kadane's Algorithm //**// 

    int n = 7;
    int arr[] = {3, 4, 5, 4, 1, 7, 8};

    int currSum = 0;
    int maxSum = INT8_MIN;
    
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum , maxSum);
        if(currSum < 0){ // logic : Negative number max toh hoga nahi , toh jab bhi negative number aaye sum ko 0 kar do
            currSum = 0;
        }
    } // O(n)

    cout << "max subarray sum = " << maxSum << endl;
    
    return 0;
}