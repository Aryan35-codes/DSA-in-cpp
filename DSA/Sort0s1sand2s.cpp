#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> A = {2,0,2,1,1,0,1,2,0,0};
    int n = A.size();
    
    // sort(A.begin(),A.end());//Brute force approach => O(nlogn)

    int count0 = 0,count1 = 0,count2 = 0;//Optimized => O(2n) or O(n)

    for(int i=0; i<n; i++){ //O(n)
        if(A[i] == 0) count0++;
        else if(A[i] == 1) count1++;
        else if(A[i] == 2) count2++;
    }
    
    //O(n)
    int idx = 0;
    for(int i=0; i<count0; i++){
        A[idx++] = 0;
    }    
    for(int i=0; i<count1; i++){
        A[idx++] = 1; 
    }       
    for(int i=0; i<count2; i++){
        A[idx++] = 2;    
    }

    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }


    return 0;
}
