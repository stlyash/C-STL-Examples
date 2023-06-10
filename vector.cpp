#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// Declaring a vector named v to store integers
	vector<int> v;  
	
	// Adding elements to the end of the vector
	v.push_back(2);  
	v.push_back(4);
	v.push_back(6);
	
	// Printing the size of the vector, which is 3
	cout << v.size() << endl;  
	
	// Printing the elements of the vector using a simple loop
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
	
	// Removing the last element from the vector
	v.pop_back();  
	
	// Printing the elements of the vector using an iterator
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;
	
	// Taking user input to initialize a vector
	int n;

	// Reading the number of elements from the user
	cin >> n; 

	// Creating a vector v1 of size n, initialized with 0s
	vector<int> v1(n, 0);  

	// Reading the elements from the user to store them in the vector
	for (int i = 0; i < n; i++)
		cin >> v[i];  
	
	// Erasing elements from the vector
	// Erasing the fifth element of the vector (index 4)
	v.erase(v.begin() + 4);  
	// Erasing elements from the third element to the fifth element
	v.erase(v.begin() + 2, v.begin() + 5);  
	
	return 0;
}
