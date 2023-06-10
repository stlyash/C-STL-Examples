#include<bits/stdc++.h>
using namespace std;

int main(){

	// List in C++ = Doubly Linked List
	
	// Declaring a list named 'l3' and initialize it with values
	list<int> l3 = {6, 6, 4, 5, 6, 8};

	// Printing the first and last elements of the list
	cout << l3.front() << " " << l3.back() << endl;   // 4 8
	
	// Functions to push integers in front and back
	l3.push_front(9);   // 9 4 5 6 8
	l3.push_back(6);    // 9 4 5 6 8 6

	// Removing all occurrences of the specified digit
	l3.remove(6);       // 9 4 5 8

	// Printing the elements of the list using a loop and iterator
	for(auto it = l3.begin(); it != l3.end(); it++)
		cout << *it << " ";   // 9 4 5 8
	cout << endl;

	// Emplace functions can also be used to insert elements
	l3.emplace_front(14);
	l3.emplace_back(16);
	for(auto it = l3.begin(); it != l3.end(); it++)
		cout << *it << " ";   // 14 9 4 5 8 16
	cout << endl;

	// Popping the first and last elements of the list
	l3.pop_front();
	l3.pop_back();
	for(auto it = l3.begin(); it != l3.end(); it++)
		cout << *it << " ";   // 9 4 5 8
	cout << endl;
}
