#include <iostream> //*// 
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n,int m, int maxAllowedPages){//O(n)
    int stu = 1, pages = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }

        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }else {
            stu ++;
            pages = arr[i];
        }
    }
    
    return stu > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m){//O(log(range)*n)
    if(m > n){ //m-> no. of ppl ; n-> no. of books
        return -1;
    }

    int sum = 0, ans = -1;
    for(int i=0; i<n; i++){//O(n)
        sum += arr[i];
    }

    int st = 0 , end = sum; //range of possible ans

    while(st <= end){//O(log(range)*n)
        int mid = st + (end-st)/2;

        if(isValid(arr, n, m, mid)){ //left
            ans = mid;
            end = mid - 1;
        }else { //right
            st = mid + 1;
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {15, 17, 20};// => no. of pages
    int n = 3, m = 2;// n=> no. of books , m=> no. of students

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}