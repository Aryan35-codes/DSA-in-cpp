#include <iostream>
#include <vector>
using namespace std;

void DNF(vector<int> &A, int n){ // O(n)
    int mid = 0, low = 0, high = n - 1;

    while(mid <= high){
        if(A[mid] == 0){ // case 1
            swap(A[low],A[mid]);
            low++;
            mid++;
        }else if(A[mid] == 1){ // case 2
            mid++;
        } else if(A[mid] == 2){ // case 3
            swap(A[mid],A[high]);
            high--;


        }       
    }
}

int main(){
    vector<int> A = {2,0,2,1,1,0,1,2,0,0};
    int n = A.size();
    
    DNF(A,n);

    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }


    return 0;
}