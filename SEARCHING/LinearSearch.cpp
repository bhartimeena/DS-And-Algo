#include <iostream>
using namespace std;
void main()
{

    int arr[10], i, num, n, c = 0, pos;
    cout << "Enter the array size : ";
    cin >> n; // take input from user
    cout << "Enter Array Elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i]; // take the array from user
    }
    cout << "Enter the number to be search : ";
    cin >> num; // take input number which we want to search in array
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            c = 1;
            pos = i + 1;
            break;
        }
    }
    if (c == 0)
    {
        cout << "Number not found..!!";
    }
    else
    {
        cout << num << " found at position " << pos;
    }
}

/////////////// This is second method for Linear Search with Duplicate Element/////////////////
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[100], n, i, num, arrTemp[50], j=0, chk=0;
//     cout<<"Enter the Size for Array Size: ";
//     cin>>n;
//     cout<<"Enter "<<n<<" Array Elements: ";
//     for(i=0; i<n; i++)
//         cin>>arr[i];
//     cout<<"\nEnter the Number to Search: ";
//     cin>>num;
//     for(i=0; i<n; i++)
//     {
//         if(arr[i]==num)
//         {
//             arrTemp[j] = i;
//             j++;
//             chk++;
//         }
//     }
//     if(chk>0)
//     {
//         cout<<"\nNumber Found at Index No. ";
//         n = chk;
//         for(i=0; i<n; i++)
//             cout<<arrTemp[i]<<" ";
//     }
//     else
//         cout<<"\nNumber doesn't Found!";
//     cout<<endl;
//     return 0;
// }

// simple and short function for linear search

// int LinearSearch(int a[],int n,int e){
//     int i,index =-1;
//     for(int i=0; i<n;i++){
//         if(a[i]==e){
//             index=i;
//             break;
//         }
//     }
//     return index;
// }
