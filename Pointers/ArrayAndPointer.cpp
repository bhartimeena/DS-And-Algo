#include "bits/stdc++.h"
using namespace std;

int main()
{
    int  arr[] = {10,20,30};
    cout<<*arr<<endl;

    int *ptr = arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;
        // arr++; // illegal can't write like this 
    }
    return(0);
}