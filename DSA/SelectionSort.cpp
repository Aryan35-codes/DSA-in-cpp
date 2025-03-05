#include <iostream>
#include <vector>
using namespace std;

void SelctionSort(vector<int> &A,int n){ // O(n^2)
    
    for(int i=0; i<n-1; i++){ //To choose first element of unsorted array 
        int smallIdx = i; //starting idx of unsorted part
        for(int j=i+1; j<n; j++){ //To compare above chose element with all elements in unsorted array
            if(A[j] < A[smallIdx]){
                smallIdx = j;
            }
        }

        swap(A[i],A[smallIdx]);
    }
} 

int main(){
    int n = 5;
    vector<int> A = {4, 1, 5, 2, 3};

    SelctionSort(A,n);

    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }

    return 0;
}