#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v{1,4,2,2,5,6,4,2,3}; // vector
    for(int x : v)
        cout<< x <<" ";  // 1 4 2 2 5 6 4 2 3 
    cout<<endl;

    // rotate(v.begin(), v.begin() + n, v.end())
    // where, n = current position of the element which is going to be the first element after the rotation.

    // rotating the vector left by 2 position
    rotate(v.begin(), v.begin() + 2, v.end());  
            // we have to add 2 because 2nd index becomes the 0th index now
    for(int x : v)
        cout<< x <<" ";  // 2 2 5 6 4 2 3 1 4
    cout<<endl;

    // rotating the vector right by 3 positions
    rotate(v.begin(), v.begin() + v.size() - 3, v.end());
            // we have to add (v.size() - 3) because (v.size() - 3)th index becomes the 0th index now
    for(int x : v)
        cout<< x <<" ";  // 3 1 4 2 2 5 6 4 2 
    cout<<endl;
}
