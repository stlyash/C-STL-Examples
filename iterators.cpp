#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{1,4,2,2,5,6,4,2,3}; // vector
    
    vector<int>::iterator ptr; // creating an iterator to a vector

    // .begin() gives the value of starting position of the container
    // .end() gives memory address which is after the end of the container

    for (ptr = v.begin(); ptr < v.end(); ptr++)  
    {
        cout<< *ptr << " ";  // 1 4 2 2 5 6 4 2 3 
    }
    cout<<endl;

    vector<int>::iterator itr = v.begin();  // iterator pointing to index 0
    advance(itr, 3);     // iterator pointing to index 3
    cout<< *itr <<endl;  // prints 2

    // pointing 2 indices after index 3 (where itr is pointing)
    auto itrnxt = next(itr, 2);

    // pointing 2 indices before index 3 (where itr is pointing)
    auto itrprv = prev(itr, 2);  

    cout<< *itrnxt <<" "<< *itrprv <<endl;  // 6 4
}

    // Iterators are pointers which are used to point memory addresses of STL containers
