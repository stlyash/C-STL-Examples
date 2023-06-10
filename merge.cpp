#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// Merging Vectors
	vector<int> v1 = {1, 2, 3, 4};
	vector<int> v2 = {4, 5, 6, 7};
	vector<int> v3(10); // Resultant vector with enough capacity to hold the merged elements

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	// Merging v1 and v2 into v3, with v3.begin() as the starting position for the merged range
	// v1.begin() and v1.end() specify the first input range (v1)
	// v2.begin() and v2.end() specify the second input range (v2)

	for (int i = 0; i < v3.size(); i++)
		cout << v3[i] << " ";
	// Output: 1 2 3 4 4 5 6 7 0 0
	cout << endl;

	// Merging Arrays
	int arr1[4] = {1, 2, 3, 4};
	int arr2[2] = {7, 8};
	int arr3[6]; // Resultant array with enough capacity to hold the merged elements

	merge(arr1+0, arr1+4, arr2+0, arr2+2, arr3+0);
	// Merging arr1 and arr2 into arr3, with arr3+0 as the starting position for the merged range
	// arr1+0 and arr1+4 specify the first input range (arr1)
	// arr2+0 and arr2+2 specify the second input range (arr2)

	for (int i = 0; i < 6; i++)
		cout << arr3[i] << " ";
	// Output: 1 2 3 4 7 8
	cout << endl;

	return 0;
}
