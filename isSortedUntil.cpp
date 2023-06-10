
#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v{1, 2, 3, 0, 5, 3, 2, 8, 9};

	// Finding the iterator pointing to the first unsorted element (0)
	auto it1 = is_sorted_until(v.begin(), v.end());

	// Finding the iterator pointing to the first descending unsorted element (8) in the range
	auto it2 = is_sorted_until(v.begin() + 4, v.end(), greater<int>()); 

	// Calculating the distance between the beginning of the vector and the iterator it1
	auto difference1 = distance(v.begin(), it1); 

	// Calculating the distance between the element at index 4 and the iterator it2
	auto difference2 = distance(v.begin() + 4, it2); 

	// Printing the difference1, which represents the number of 
	// sorted elements at the beginning of the vector
	cout << difference1 << endl;	

	// Printing the difference2, which represents the number of 
	// descending sorted elements in the range from index 4 onwards	
	cout << difference2 << endl; 
}
