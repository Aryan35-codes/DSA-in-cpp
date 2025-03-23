#include<iostream>
using namespace std;

void cal(int arr[], int size){
    int sum = 0;
    int product = 1;
    for(int i=0; i<size; i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout << "The sum of array is " << sum << endl;
    cout << "The product of array is " << product << endl;
}

void swapMaxAndMin(int arr[], int size){
    int largest = arr[0];
    int smallest = arr[0];
    int small_idx = 0;
    int large_idx = 0;

    for(int i=0; i<size; i++){
        if(arr[i] > largest){
            largest = arr[i];
            large_idx = i;
        }
        if(arr[i] < smallest){
            smallest = arr[i];
            small_idx = i;
        }
    }

    swap(arr[large_idx],arr[small_idx]);
}

int unique(int arr[], int size){
    
}
int main(){
    int arr[] = {4, 2, 11, 6, 23, 5};
    int size = 6;

    // cal(arr, size);
    // swapMaxAndMin(arr, size);

    // for(int i=0; i<size; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    return 0;
}