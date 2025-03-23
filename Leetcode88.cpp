#include <iostream>
#include <vector>
using namespace std;

void Merge2SortedArrays(vector<int> &A,vector<int> &B,int m, int n){// O(1) => Sc
    int idx = n + m - 1, i = m - 1, j = n - 1 ;

    while(i >= 0 && j >= 0){
        if(A[i] > B[j]){
            A[idx--] = A[i--]; //First assigns value than decreases by 1
            //idx--, i--;
        }else{
            A[idx--] = B[j--];
        }
    }    

    while(j >= 0){
        A[idx--] = B[j--];
    } 
}

int main(){
    vector<int> A = {1,2,3,0,0,0};
    m = 3;
    vector<int> B = {2,5,6};
    n = 3;

    return 0;
}