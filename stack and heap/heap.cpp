#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {40,13,33,12,20};
    make_heap(v.begin(),v.end());
    cout<<"Maximum element in the heap: "<<v.front()<<endl;
    v.push_back(50);
    push_heap(v.begin(),v.end());
    cout<< "maximum element of the heap after push 50:"<< v.front()<<endl;
   

    return(0);
}