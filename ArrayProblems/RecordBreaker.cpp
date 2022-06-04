// Arrays Challenge-Record Breaker (Google kickstart)
// condition for record breaker day 1. strictly greacter than all the previous 2. strictly greater than following value
// sample test case: 1 2 0 7 2 0 2 2
// record breaker:   n y n y n n n n
// brute force: 1. iterate over all the element and chheck if it is record breakinf day or not.
// Note: to check if a[i] is a record breaking day, we have to iterate over a[0],a[1],...,a[i-1].
// time complexity for this operation O(n) and overall time complexity: O(n^2)

// Optimised Approach:
// Intuition:If we can optimise step(1),then we can optimise our overall solution.
// For step(1):We need to check ifa[i]>{a[i-1],a[i-2],...,a[0]},which is same as
//              a[i]>max(a[i-1],a[i-2],...,a[0])
// For this,we will keepavariable mx,which will store the maximum value tilla[i].Then we
// just need to check,
//                  a[i]>mx
//              _a[i]>a[i+1],{ifi+1<n}
//             and update mx,mx=max(mx,a[i])
// So step(1)time complexity reduces to0(1).
//              Overall time complexity:O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr[n] = -1;
    int ans = 0;
    int mx = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1])
            ans++;
        mx = max(mx,arr[i]);
    }
    cout<< ans << endl;

}