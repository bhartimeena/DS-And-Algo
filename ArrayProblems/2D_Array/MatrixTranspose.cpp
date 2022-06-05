#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"transpose of the matrix is: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return(0);
}
/*
#include<iostream>
using namespace std;
int main() {
int N = 3;
int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
for(int i=0; i<N; i++) {
for(int j=i; j<N; j++) {
//swap
int temp = A[i][j];
A[i][j] = A[j][i];
A[j][i] = temp;
}
}
//print transpose
for(int i=0; i<N; i++) {
for(int j=0 ;j<N; j++) {
cout << A[i][j] << " ";
}
cout << "\n";
}
return 0;
}
*/