//Single element in sorted array
#include <iostream>
#include <vector>
using namespace std;
//Even => If mid element matches with left search space ,array will be divided in odd and even part , left search space will be odd which means
//         there'll be pairs and 1 single element(answer),so search in left
//Odd => If mid element matches with left search space ,array will be divided in odd and even part , left search space will be even which means
//         only pairs and no single element(answer),so search in right
int singleElement(vector <int>&A){
    int n = A.size();

    i(n == 1) return A[0];

    int st = 0, end = n - 1;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(mid == 0 && A[0] != A[1]) return A[mid];
        if(mid == n-1 && A[n-1] != A[1]) return A[mid];

        if(A[mid-1] != A[mid] && A[mid] != A[mid+1] ){
            return A[mid];

            if(mid % 2 == 0){ //even
                if(A[mid-1] == A[mid]){ //left
                    end = mid - 1;
                }else{              //right
                    st = mid + 1;
                }
            }else{             //odd
                if(A[mid-1] == A[mid]){//right
                    st = mid + 1;
                }else{                 //left
                    end = mid - 1;
                }
            }
        }   
    }


    return -1;
}

int main(){
    vector <int>arr = {1,1,2,3,3,4,4,8,8} //{3,3,7,7,10,11,11}; 

    int ans = singleElement(arr);

    cout << "Element that appears only once in sorted array is " << ans << endl;
    return 0;
}
