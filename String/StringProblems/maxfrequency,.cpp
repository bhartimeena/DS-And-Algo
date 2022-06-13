
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "abcacdade";
    int count[26];
    for(int i=0;i<26;i++){
        count[i] =0;
    }
    for(int i=0;i<str.size();i++){
        count[str[i]-'a']++;
        
    }
    char ans = 'a';
    int maxF = 0;

    for(int i=0;i<26;i++){
        if(count[i]>maxF){
            maxF = count[i];
            ans = i+'a';
        }
    }
    cout<< maxF <<" "<< ans <<endl;
    return(0);
    }