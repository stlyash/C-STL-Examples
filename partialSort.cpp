#include<bits/stdc++.h>
using namespace std;

// partial_sort(<start>, <middle>, <end>)
// partial sort will place sorted elements from the whole vector between <start> and <end> 
// but place sorted elements only starting from <start> to <middle> elements

int main()
{
	vector<int> v{1, 6, 3, 8, 3, 4, 5, 9, 0, 7};

	// Partial sort from the beginning to the element at index 4 (exclusive)
	partial_sort(v.begin(), v.begin() + 4, v.end());

	for(int x: v)
		cout << x << " ";  // Output: 0 1 3 3 8 6 5 9 4 7
	cout << endl;

	// Partial sort from the element at index 2 to the element at index 6 (exclusive)
	// Using greater<int>() as the comparison function for descending order
	partial_sort(v.begin() + 2, v.begin() + 6, v.end() - 3, greater<int>());

	for(int x: v)
		cout << x << " ";  // Output: 0 1 8 6 5 3 3 9 4 7
	cout << endl;	
}
