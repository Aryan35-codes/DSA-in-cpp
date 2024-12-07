#include <iostream>
using namespace std;//func is used to avoid redundancy(repition)

//function definition
// int printHello() {
//     cout << "hello\n";
//     return 3;
// }

//Sum of 2 numbers
int sum(int a,int b){
    return a + b;
}

int main(){
    //function call/invoke
    // int val = printHello();
    // cout << "val = " << val << endl;
    // cout << printHello()  << endl;

    cout << sum(100,69) << endl;

    return 0;
}