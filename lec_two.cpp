#include <iostream> //preprocessor director
using namespace std;

// int main() { // Boilerplate code -> Basic code without cout
//     cout << "Kya reyyy\n from Aryan " << "Hello World" << endl;
//     return 0;
// }

/* 8 Bits => 1 Byte
PRIMITIVE DATA TYPES
int - 4 Bytes
char - 1 Byte
(ASCII values : A->65,Z->90,a->97,z->122)
float - 4 Bytes(and a 'f/F' at end to indicate float)
bool - 1 Byte (true->1, false->0)
double - 8 Bytes
*/

//TYPE CONVERSION & CASTING
int main(){
    // char grade = 'a'; //small data type to big data type
    // int value = grade; //conversion[implicit]

    // cout << value << endl;

    // double price = 100.09; //big data type to small data type
    // int newprice = (int)price;//casting[explicit]

    // cout << newprice;

    int age;
    // cout << "Enter age : ";
    // cin >> age;
    // cout << "Your age is "<< age << endl;

    int ans = (5 / (double)2); //example of type conversion and castimg
    cout << ans << endl;
    return 0;
}