#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9] = {1, 4, 2, 2, 5, 6, 4, 2, 3}; // array

    // Count the number of occurrences of value 1 in the array 'arr'
    cout << count(arr, arr + 9, 1) << endl;
    // Output: 1
    // Returns the count of occurrences of 1 in the array, which is 1.

//----------------------------------------------------------------------

    vector<int> v{1, 4, 2, 2, 5, 6, 4, 2, 3}; // vector

    // Count the number of occurrences of value 2 in the vector 'v'
    cout << count(v.begin(), v.end(), 2) << endl;
    // Output: 3
    // Returns the count of occurrences of 2 in the vector, which is 3.

//----------------------------------------------------------------------

    string s = "C++ STL Examples from github"; // string

    // Count the number of occurrences of character 'm' in the string 's'
    cout << count(s.begin(), s.end(), 'm') << endl;
    // Output: 2
    // Returns the count of occurrences of 'm' in the string, which is 2.
}
