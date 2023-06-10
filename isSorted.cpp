#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{5, 3, 2, 4, 9, 1};

    // Checking if the vector is sorted in ascending order
    cout << is_sorted(v.begin(), v.end()) << endl;
    // Output: 0 (vector is not sorted in ascending order)

    // Checking if the vector is sorted in descending order
    cout << is_sorted(v.begin(), v.end(), greater<int>()) << endl;
    // Output: 0 (vector is not sorted in descending order)

    // Sorting the vector in ascending order
    sort(v.begin(), v.end());
    // Resulting vector: 1 2 3 4 5 9

    // Checking if the vector is sorted in ascending order
    cout << is_sorted(v.begin(), v.end()) << endl;
    // Output: 1 (vector is sorted in ascending order)

    // Checking if the vector is sorted in descending order
    cout << is_sorted(v.begin(), v.end(), greater<int>()) << endl;
    // Output: 0 (vector is not sorted in descending order)

    // Sorting the vector in descending order
    sort(v.begin(), v.end(), greater<int>());
    // Resulting vector: 9 5 4 3 2 1

    // Checking if the vector is sorted in ascending order
    cout << is_sorted(v.begin(), v.end()) << endl;
    // Output: 0 (vector is not sorted in ascending order)

    // Checking if the vector is sorted in descending order
    cout << is_sorted(v.begin(), v.end(), greater<int>()) << endl;
    // Output: 1 (vector is sorted in descending order)
}
