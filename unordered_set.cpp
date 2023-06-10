#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// Declare an unordered set named 's' to store integers
	unordered_set<int> s;                 

	// Insert elements into the set
	s.insert(10);
	s.insert(8);                        
	s.insert(1);
	s.insert(2);
	s.insert(10);                      
	// We have the set {10,8,1,2}
	
	// Print the size of the set
	cout << s.size() << endl;              
	// Output: 4
	
	// Find element 8 in the set
	auto it = s.find(8);   
	
	// Check if the element is found and print the result
	if (it != s.end())
		cout << "Present" << endl;
	
	// Count the occurrences of element 1 in the set
	int count = s.count(1);            
	// Output: 1
	
	// Print the count
	cout << count << endl;
	
	// Print the elements of the set using a loop and iterator
	for (auto it = s.begin(); it != s.end(); it++)
		cout << *it << endl;
	
	// Clear the set by removing all elements
	s.clear();
	
	// Check if the set is empty and print the result
	if (s.empty())
		cout << "Yes" << endl;
	else
		cout << "No" << endl;                 
	// Output: Yes
}
