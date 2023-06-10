#include<bits/stdc++.h>
using namespace std;

int main()
{	
    // binary_search([begin index],[end index],<element>)
    
    // For Vectors
    
    // Declaration and initialization of a vector
    vector<int> v = {1, 2, 3, 6, 8};

    // Checking if the element 3 is present in the vector
    if(binary_search(v.begin(), v.end(), 3))      
        cout << "Element is present" << endl;
    else
        cout << "Element is not present" << endl;  
    // Output: Element is present
    
//--------------------------------------------------------

    // For Arrays
    
    // Declaration and initialization of an array
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Checking if the element 9 is present in the array
    if(binary_search(arr + 0, arr + 4, 9))      
        cout << "Element is present" << endl;
    else
        cout << "Element is not present" << endl;  
    // Output: Element is not present
}
