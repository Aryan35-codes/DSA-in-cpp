#include <iostream>
using namespace std;

// int sumOfDigits(int num){
//     int digitSum = 0;
//     while(num > 0){
//         int lastDigit = num % 10;
//         num /= 10;
//         digitSum += lastDigit;
//     } 
//     return digitSum;
// }

int Factorial(int num){
    int fact = 1;

    for(int i = 1; i<=num; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = Factorial(n);
    int fact_r = Factorial(r);
    int fact_nmr = Factorial(n-r);

    return fact_n / (fact_r * fact_nmr) ;
}

int main(){
    // cout << sumOfDigits(669) << endl;
    int n = 8 , r = 2;
    cout << nCr(n,r) << endl;
    return 0;
}