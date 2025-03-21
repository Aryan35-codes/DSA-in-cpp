#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isAlphaNumeric(char ch){
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }else{
        return false;
    }
}

bool isPallindrome(string s){
    int st= 0, end = s.length()-1;

    while(st < end){
        if(!isAlphaNumeric(s[st])){
            st++;
            continue;
        }
        if(!isAlphaNumeric(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }else {
            st++;
            end--;
        }
    }
    return true;
    
}

int main(){

    string s = "Ac$3e3&ca";

    if(isPallindrome(s)){
        cout << "It's a Pallindrome";
    }else{
        cout << "It's not a Pallindrome";
    }

    return 0;

}