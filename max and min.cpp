#include<bits/stdc++.h>
using namespace std;

int main()
{
	// For Vectors
	vector<int> v = {3, 1, 2, 5, 6, 0};

	// Find the maximum element in the vector
	auto it = max_element(v.begin(), v.end());
	cout << *it << endl; 
	// Print the maximum element - 6

	// Find the minimum element in the vector
	auto itr = min_element(v.begin(), v.end());
	cout << *itr << endl; 
	// Print the minimum element - 0

	// For Arrays
	int arr[5] = {1, 2, 3, 4, 5};

	// Find the maximum element in the array
	auto itra = max_element(arr + 0, arr + 5);
	cout << *itra << endl; 
	// Print the maximum element - 5

	// Find the minimum element in the array
	auto itre = min_element(arr + 0, arr + 5);
	cout << *itre << endl; 
	// Print the minimum element - 1

	return 0;
}
