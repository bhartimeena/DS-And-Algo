#include<bits/stdc++.h> 
using namespace std;
int main()
{
        // Initializing a vector
    vector<int> v1 = {40, 30, 25, 35, 15};
      
    // Declaring heap iterator
    vector<int>::iterator it1;
      
    // Checking if container is heap
    // using is_heap()
    is_heap(v1.begin(), v1.end())?
    cout << "The container is heap ":
    cout << "The container is not heap";
    cout << endl;
      
    // using is_heap_until() to check position 
    // till which container is heap
    auto it = is_heap_until(v1.begin(), v1.end());
    
    // Displaying heap range elements
    cout << "The heap elements in container are : ";
    for (it1=v1.begin(); it1!=it; it1++)
      cout << *it1 << " ";
     
    return 0;

}