#include<iostream>
#include<string>
using namespace std;

string removeOccurences(string& s, string& part){
    while(s.length() > 0 && s.find(part) < s.length()){
        s.erase(s.find(part),part.length());
    }

}

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";

    removeOccurences(s,part);

    cout << s ;

    return 0;
}