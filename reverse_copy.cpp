#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declare an array of integers with 9 elements
    int arr[9] = {1, 4, 2, 2, 5, 6, 4, 2, 3};
    
    // Declare a vector of integers and initialize it with values
    vector<int> v{1, 4, 2, 2, 5, 6, 4, 2, 3};
    
    // Create a vector to store the reversed copy of the array
    vector<int> arrRevCpy(9);
    
    // Create a vector to store the reversed copy of the vector
    vector<int> vRevCpy(9);

    // Copy the elements from the array arr to arrRevCpy in reverse order
    reverse_copy(arr, arr + 9, arrRevCpy.begin());

    // Copy the elements from the vector v to vRevCpy in reverse order
    reverse_copy(v.begin(), v.end(), vRevCpy.begin());

    // Print the elements of the reversed array copy
    for(int x : arrRevCpy)
        cout << x << " ";
    cout << endl;
    
    // Print the elements of the reversed vector copy
    for(int x : vRevCpy)
        cout << x << " ";
    cout << endl;
}
