#include<iostream>
#include<vector>
using namespace std;

// void changeA(int *ptr){
//     *ptr = (20-5)*88;
// }

void changeA(int &b){ // pass by referrence using alias
    b = 20;
}

int main(){
    // int a = 10;
    // int* ptr = &a;

    // float price = 100.25;
    // float *ptr1 = &price; // & -> Address of operator

    // cout << ptr << endl;
    // cout << &a << endl;

    // cout << endl;

    // cout << ptr1 << endl;
    // cout << &price << endl;

    // int a = 10;
    // int* ptr = &a;

    // int** parPtr = &ptr;

    // cout << &ptr << endl;
    // cout << parPtr << endl;

    // cout << *(&a) << endl; // * -> Dereferrence operator
    // cout << *(&ptr) << endl;
    // cout << **(parPtr) << endl;

    // int** ptr = NULL; // null pointer

    // cout << ptr << endl;

    // int a = 10;
    // changeA(a);

    // cout << "inside main fn : " << a << endl;

    // int arr[] = {1, 2, 3, 4, 5};

    // int a = 15;
    // arr = &a; // wrong code , This pointer is constant

    // int a = 10;
    // int* ptr = &a;

    // cout << ptr << endl;//In hexadecimal after 9 (a,b,c,d....)begins            
    // ptr++;              // after 08 next address is 0c (9,a,b,c)
    // cout << ptr << endl; // 2 integer space
    // ptr -= 2;            
    // cout << ptr << endl;

    // int arr[] = {1,2,3,4,5};

    // cout << *arr << endl;//1
    // cout << *(arr+2) << endl;//3
    return 0; 
}