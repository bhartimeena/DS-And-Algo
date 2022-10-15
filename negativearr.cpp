#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-12, 11, -13, -5,6, -7, 5, -3, 11};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    int left =0, right=1;
    while (left <= right)
    {
        if (arr[left] < 0 && arr[right] < 0)
        {
            left++;
        }
        else if (arr[left] > 0 && arr[right] < 0)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[left] = temp;
        }
        else if (arr[left] < 0 && arr[right] > 0)
        {
            left++;
            right--;
        }
        else if (arr[left] > 0 && arr[right] > 0)
        {
            right--;
        }
        else
        {
            left++;
            right--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
        return (0);
    }
}