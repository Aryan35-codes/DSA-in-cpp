#include <iostream>
using namespace std;

// void changeArray(int arr[], int size){
//     cout << "In function\n";
//     for(int i=0;i<size;i++){
//        arr[i] = 2 * arr[i]; 
//     }
// }

// int main(){
//     // // int marks[5] = {98,93,88,96,72};

//     // // cout << marks[3] << endl;

//     // int nums[] = {99, 23,006, 69, 43, 20};
//     // int size = 6;

//     // int smallest = INT8_MAX;
//     // int largest = INT8_MIN;
//     // int small_idx = 0;
//     // int large_idx = 0;

//     // for(int i=0;i<size;i++){
//     //     if(nums[i] < smallest){
//     //         smallest = nums[i];
//     //         small_idx = i+1;
//     //     }

//     //     // smallest = min (nums[i] , smallest);
//     //     // largest = max (nums[i] , largest);
//     // }

//     // for(int j=0;j<size;j++){
//     //     if(nums[j] > largest){
//     //         largest = nums[j];
//     //         large_idx = j+1;
//     //     }
//     // }

//     // cout << "Smallest = " << smallest << " at "<< small_idx << endl;
//     // cout << "Largest = " << largest << " at " << large_idx << endl;

//     int arr[] = {1, 2, 3};//(pointer->smthg that directs towards address of object or function)
//     changeArray(arr, 3);// in C++ arrays name is a pointer 

//     cout << "In main\n";
//     for(int i=0;i<3;i++){  
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
// int linearSearch(int arr[], int size, int target){
//     for(int i=0;i<size;i++){
//         if(arr[i] == target){
//             return i; //FOUND
//         }
//     }
//     return -1; //NOT FOUND
// }

// int main(){
//     //Linear Search Algorithm
//     int arr[] = {4, 2, 7, 6, 8, 2, 5, 8, 1};
//     int size = 9;
//     int target = 8;
    
//   int idx = linearSearch(arr, size, target);
//   cout << "8 found at " << idx+1 << endl;

//     return 0;
// }

void reverseArray(int arr[], int size){
    int start = 0, end = size - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    reverseArray(arr,size);

    for(int i=0;i<size;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;
}