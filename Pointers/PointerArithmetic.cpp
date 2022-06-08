#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a = 10;
    char ch = 'a';
    int *aptr = &a;
    char *cptr = &ch;
    cout<<cptr<<endl;
    cptr++;
    cout<<cptr<<endl;
    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
    return(0);
}