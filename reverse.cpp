#include<bits/stdc++.h>
using namespace std;

int main()
{
    // For Vectors
    vector<int> v = {3, 1, 2, 5, 6, 0};

    // Reversing the elements in the vector
    reverse(v.begin(), v.end());
    
    // Printing the reversed elements of the vector
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    // Output: 0 6 5 2 1 3

    // For Arrays
    int arr[6] = {3, 1, 2, 5, 6, 0};

    // Reversing the elements in the array
    reverse(arr + 0, arr + 6);
    
    // Printing the reversed elements of the array
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    cout << endl;
    // Output: 0 6 5 2 1 3
}
