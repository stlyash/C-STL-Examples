#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration and initialization of a singly linked list 
	// (forward_list) with values 2, 5, 6, 7
    forward_list<int> l1 = {2, 5, 6, 7};
    
    // Printing the first element of the forward_list
    cout << l1.front() << endl;   // Output: 2
    
    // Printing all elements of the forward_list using an iterator
    for(auto it = l1.begin(); it != l1.end(); it++)
        cout << *it << " ";   // Output: 2 5 6 7
    cout << endl;
    
    // Declaration of an empty forward_list
    forward_list<int> l2;
    
    // Assigning values to the forward_list after declaration
    l2.assign({3, 4, 5, 6});
    
    // Inserting an element at the front of the forward_list
    l2.push_front(4);   // Output: 4 3 4 5 6
    
    // Calculating the distance between the beginning and end of the forward_list
    cout << distance(l2.begin(), l2.end()) << endl;   // Output: 5
    
    // Printing all elements of the forward_list using an iterator
    for(auto it = l2.begin(); it != l2.end(); it++)
        cout << *it << " ";   // Output: 4 3 4 5 6
    cout << endl;
    
    // Removing the first element from the forward_list
    l2.pop_front();
    
    // Printing all elements of the forward_list after removing the first element
    for(auto it = l2.begin(); it != l2.end(); it++)
        cout << *it << " ";   // Output: 3 4 5 6
    cout << endl;
    
    return 0;
}
