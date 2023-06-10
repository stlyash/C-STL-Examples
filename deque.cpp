#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration and initialization of a deque with values 2, 3, 4
    deque<int> d = {2, 3, 4};
    
    // Inserting element 1 at the front of the deque
    d.push_front(1);
    
    // Removing the element at the back of the deque
    d.pop_back();
    
    // Printing the elements of the deque after the operations
    for(int x: d)
        cout<< x <<" ";  // Output: 1 2 3
    cout<<endl;
    
    // Inserting element 3 at the back of the deque
    d.push_back(3);
    
    // Removing the element at the front of the deque
    d.pop_front();
    
    // Printing the elements of the deque after the operations
    for(int x: d)
        cout<< x <<" ";  // Output: 2 3 3
    cout<<endl;
    
    return 0;
}
