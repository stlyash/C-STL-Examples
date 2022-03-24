#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[9] = {1,4,2,2,5,6,4,2,3}; // array
    
    vector<int> v{1,4,2,2,5,6,4,2,3}; // vector
    
    vector <int> arrRevCpy(9);
    vector <int> vRevCpy(9);

    reverse_copy(arr, arr + 9, arrRevCpy.begin());
        // copies array arr in the vector arrRevCpy in reverse order

    reverse_copy(v.begin(), v.end(), vRevCpy.begin());
        // copies vector v in the vector vRevCpy in reverse order

    // printing the copied vectors
    for(int x : arrRevCpy)
        cout<< x << " ";  // 3 2 4 6 5 2 2 4 1 
    cout<<endl;
    for(int x : vRevCpy)
        cout<< x << " ";  // 3 2 4 6 5 2 2 4 1 
    cout<<endl;
}