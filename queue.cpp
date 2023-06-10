#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Declaration of a queue
	queue<int> q; 

	// Inserting elements to the back of the queue
	q.push(4); 
	q.push(5);
	q.push(3);
	// The queue now contains: 4 5 3

	// Removing the element at the front of the queue
	q.pop(); 
	// The queue now contains: 5 3

	// Printing the element at the front of the queue
	cout << q.front() << endl; // Output: 5
	
	// Printing the size of the queue
	cout << q.size() << endl; // Output: 2
	
	// Printing the element at the back of the queue
	cout << q.back() << endl; // Output: 3
	
	// Checking if the queue is empty
	if (q.empty())
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	// Output: No
}
