#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "abc";
    string s2 = "xyz";
    string s="aaaa";
    string s3 = "ninhhhh";
    string s4 = s3.substr(3,2);
    string s5 = "7557";
    int x = stoi(s1);
    int x1 = 877;
    cout<< to_string(x1) + "2"<<endl;
    cout<< x+2 <<endl;
    cout<< s4 << endl;
     cout<<s3.find("hhh")<<endl;
    s3.erase(3,3);
    s3.insert(2,"lol");
    cout<< s1.size()<<endl;
    cout<< s3 <<endl;
    cout<< s3 <<endl;
    if(s1.compare(s2)==0){
        cout<<"Strings are eqal"<<endl;
    }
    else{
        cout<<"not eqaul"<<endl;
    }
    s.clear();
    if(s.empty()){
        cout<<"string is empty"<<endl;
    }
    if(!s.empty()){
        cout<<"string is not empty"<<endl;
    }
    return(0);

}