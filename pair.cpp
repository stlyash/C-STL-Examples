#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Initialization of pairs
	pair<int, int> p1; // Default initialization
	p1 = {2, 4}; // Assigning values to the pair using curly braces
	
	pair<int, int> p2(5, 8); // Initialization with constructor
	
	pair<int, int> p3 = p1; // Copying the values of p1 into p3
	
	// Initialization using make_pair function
	pair<float, int> p4 = make_pair(3.4, 6); 
	
	// Accessing the values of pairs
	cout << p1.first << " " << p1.second << endl; // Output: 2 4
	cout << p2.first << " " << p2.second << endl; // Output: 5 8
	cout << p3.first << " " << p3.second << endl; // Output: 2 4
	cout << p4.first << " " << p4.second << endl; // Output: 3.4 6
				
				
	// Pair array
	pair<int, int> p5[4]; // Declaration of an array of pairs

	for (int i = 0; i < 4; i++)
	{
		// Taking user input for each pair in the array
		cin >> p5[i].first >> p5[i].second; 
	}
	
	for (int i = 0; i < 4; i++)
	{
		// Printing the values of each pair in the array
		cout << p5[i].first << " " << p5[i].second << endl;
	}
}
