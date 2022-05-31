// APNI KAKSHA DSA SERIES
// Print 0-1 pattern

#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;
    for(int i=0;i<r;i++){
        for(int j=0;j<i;j++){
            if((i+j)%2==0)
            {
                cout<<"1 ";
            }else{

                cout<<"0 ";
            }
        }
        cout<<endl;
    }
return(0);

}

