#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<int> &A,int n){ //O(n^2)

    for(int i=1; i<n; i++){
        int curr = A[i];
        int prev = i-1;

        while(prev >= 0 && A[prev] > curr){ //To convert ascending to descending just change the comparing statement
            A[prev+1] = A[prev];
            prev --;
        }

        A[prev+1] = curr; 
    }
}

int main(){

    int n = 5;
    vector<int> A = {4, 1, 5, 2, 3};

    InsertionSort(A,n);

    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }

    return 0;
}