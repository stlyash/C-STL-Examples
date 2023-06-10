#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// Creating an unordered map with integer keys and values
	unordered_map<int, int> mp;
	
	// Inserting key-value pairs into the unordered map
	mp.insert(pair<int,int>(2,20));                      
	mp.insert(pair<int,int>(3,10));                      
	
	// Inserting a key-value pair into the unordered map
	mp[4] = 80;                                           
	
	// Printing the size of the unordered map
	cout << mp.size() << endl;   // 3
	
	// Checking if the unordered map is empty
	if (mp.empty())
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	// Iterating over the elements of the unordered map 
	// and printing key-value pairs
	for (auto it = mp.begin(); it != mp.end(); it++)
		cout << it->first << " " << it->second << endl;
	
	return 0;
}
