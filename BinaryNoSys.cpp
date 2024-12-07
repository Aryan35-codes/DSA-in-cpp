#include <iostream>
using namespace std;

// // Decimal to Binary 
// int decToBinary(int decNum){
//     int ans = 0 , pow = 1;

// }
//     while (decNum > 0){
//         int rem = decNum % 2;
//         decNum /= 2;
//         ans += rem * pow;
//         pow *= 10; 
//     }
// return ans;

//Binary to Decimal
int binaryToDec(int binNum){
    int ans = 0 , pow = 1; //2^0
    while (binNum > 0){ // binNum = 1
        int rem = binNum % 10; // rem = 1
        binNum /= 10; // binNum = 0
        ans += rem * pow; // ans = 0+0+4
        pow *= 2;
    }
    return ans;
}    
    
int main(){
    // int decNum = 5;
    // int BinNum = decToBinary(decNum);
    // cout << BinNum << endl;

    // for(int i=0;i<=10;i++){
    //     cout << decToBinary(i) << endl;
    // }
    
    int binNum = 101100101;
    int decNum = binaryToDec(binNum);
    cout << decNum << endl;
    return 0;
} 