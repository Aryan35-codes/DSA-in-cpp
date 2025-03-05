#include <iostream>
#include <vector>
using namespace std;

void BubbleSort (vector<int> &A,int n){ //O(n^2)
    bool isSwap = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(A[j] > A[j+1]){
                swap(A[j], A[j+1]);
                isSwap = true;
            }
        }
        if(isSwap){ //To avoid loop from running even if it's sorted
            return ;
        }
    }
}

void PrintArray(vector<int> &A, int n){

    for(int i=0; i<n; i++){
        cout << A[i] << " " ;
    }
}

int main(){
    vector<int> A = {4, 5, 1, 3, 2};
    int n = A.size();

    BubbleSort(A,n);
    PrintArray(A,n);

    return 0;
}