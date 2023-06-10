#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Create a map container
	map<int, int> mp;

	// Insert key-value pairs into the map
	mp.insert(pair<int, int>(2, 20));
	mp.insert(pair<int, int>(3, 10));

	// Insert or update a value using the key
	mp[4] = 80;

	// Print the size of the map (number of elements) - 3
	cout << mp.size() << endl; 

	// Check if the map is empty
	if (mp.empty())
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	// Print the elements of the map using an iterator
	for (auto it = mp.begin(); it != mp.end(); it++)
		cout << it->first << " " << it->second << endl;

	cout << "Problem solution" << endl;

	// Solve a problem: Given elements, count the frequency of each element
	vector<int> given_elements = {20, 20, 10, 10, 10, 5, 2, 2};

	// Create a new map to store the frequency of elements
	map<int, int> mpp;

	// Iterate over the given elements and update their frequency in the map
	for (int i = 0; i < given_elements.size(); i++)
		mpp[given_elements[i]]++;

	// Print the elements and their frequencies
	for (auto it = mpp.begin(); it != mpp.end(); it++)
		cout << it->first << " " << it->second << endl;
}
