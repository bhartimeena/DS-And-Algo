/*  google kick start problem
// test case : -                        10 7 4 6 8 10 11
differance of two continuus elememt:- -3 -3 2 2 2 1 
approach:- loop over the array and find the answer
maintain the followinng variables:
1. previous common difference(pd)
2. current arithmetic subarray length(curr)
3. max arithmetic subarray length(ans)
cases 2;
// 1. pd == A[i]-A[i-1]                2. pd != A[i]-A[i-1]
// > current ans increase by 1.         > update current ans to 2.
// > ans = max(ans,curr)
*/




#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = 2;
    int d = a[1]-a[0];
    int j=2;
    int curr = 2;
    while(j<n){
        if(a[j]-a[j-1]==d)
            curr++;
        else{
            d = a[j]-a[j-1];
            curr =2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<< ans <<endl;
    return(0);

    
}