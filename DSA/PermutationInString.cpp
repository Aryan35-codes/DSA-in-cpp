#include<iostream> /**/ 
#include<string>
using namespace std;

bool isFreqSame(int freq[26], int windFreq[26]){
    for(int i=0; i<26; i++){
        if(freq[i] != windFreq[i]){
            return false;
        }
    }

    return true;
}

bool checkInclusion(string s1, string s2){
    int freq[26] = {0};
    for(int i=0; i<s1.length();i++){
        freq[s1[i] - 'a']++;
    }

    int windSize = s1.length();

    for(int i=0; i<s2.length();i++){
        int windidx = 0, idx = i;
        int windFreq[26] = {0};

        while(windidx < windSize && idx < s2.length()){
            windFreq[s2[idx] - 'a']++;
            windidx++;
            idx++;
        }

        if(isFreqSame(freq, windFreq)){
            return true;
        }
    }

    return false;
}

int main(){
    string s1 = "abcg";
    string s2 = "eidboaoojwdhugdggdvcdgabc "; 

    if(checkInclusion(s1,s2)){
        cout << "s2 has permutation of s1";
    }else{
        cout << "s2 doesn't have permutation of s1";
    }
    return 0;
}