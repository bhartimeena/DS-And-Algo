// Base Idea:
// To check if a element is repeating,we maintain an array idx[],which stores the first
// occurrence(index)ofaparticular elementa[i].
// •Initialise the idx[]with -1,and minidx with INT_MAX.
//           -1 -1 -1 -1 -1 -1 -1 -1
//           (0)(1)(1)(2)(3)(4)(4)(5)(5)(6)(7)
//   Keep updating idx[],while traversing the given array.
//  Given Array: 1 5 3 4 3 5 6
// ●At i=1:
//  Given Array: 1 5 3 4 3 5 6
//                 ↑
//     Idx[]:-1 0 -1 -1 -1 1 -1 -1
//          (0)(1)(2)(3)(4)(5)(6)(7)
// •At i=2:
//  Given Array:
//    Idx[]: 1 5 3 4 3 5 6
//               ↑
//            -1 0 -1 2 -1 1 -1 -1
//           (0)(1)(2)(3)(4)(5)(6)(7)
//                             


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N = 1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    int minidx = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]] !=-1){
            minidx = min(minidx,idx[arr[i]]);
        }
        else{
            idx[arr[i]] = i;

        }

    }
    if(minidx == INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx + 1<<endl;
    }
    return(0);

}