#include<bits/stdc++.h>
using namespace std;

int main(){
	// Declaration of a multiset container
	multiset<int> s; 
	
	// Inserting elements into the multiset
	s.insert(10); 
	s.insert(8);
	s.insert(1);
	s.insert(2);
	s.insert(10); 
	// Multiple elements with the same value can be inserted
	
	cout << s.size() << endl; 
	// Output: 5 (Number of elements in the multiset)
	
	auto it = s.find(8); // Searching for an element in the multiset
	if (it != s.end())
	    cout << "Present" << endl; 
	// Output: Present (Element found in the multiset)
	
	// Counting the occurrences of an element in the multiset
	int count = s.count(10); 
	cout << count << endl; 
	// Output: 2 (Number of occurrences of 10 in the multiset)
	
	// Erasing an element from the multiset
	s.erase(10); 
	
	for (auto it = s.begin(); it != s.end(); it++)
	    cout << *it << endl; 
	// Output: 1 2 8 (Elements of the multiset in ascending order)
	
	// Clearing the multiset (removing all elements)
	s.clear(); 
	
	if (s.empty())
	    cout << "Yes" << endl; 
	else
	    cout << "No" << endl;
	// Output: Yes (Multiset is empty)
}
