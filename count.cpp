#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[9] = {1,4,2,2,5,6,4,2,3}; // array
    cout << count(arr, arr + 9, 1) <<endl; 
                // returns number of times 1 is present in the array - arr ,i.e. 1
    
    vector<int> v{1,4,2,2,5,6,4,2,3}; // vector
    cout << count(v.begin(), v.end(), 2) << endl;
                // returns number of times 2 is present in the vector - v ,i.e. 3
    
    string s = "C++ STL Examples from github"; // string
    cout << count(s.begin(), s.end(), 'm') << endl;
                // returns number of times m is present in the string - s ,i.e. 2
}