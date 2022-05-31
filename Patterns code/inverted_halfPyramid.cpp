// APNI KAKSHA DSA SERIES
// Print inverted Half Pyramid Pattern using Stars


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return(0);
}
