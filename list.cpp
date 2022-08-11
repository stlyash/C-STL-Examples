#include<bits/stdc++.h>
using namespace std;

int main(){

	// List in C++ = Doubly Linked List
	
	list<int>l3={6,6,4,5,6,8};
	cout<<l3.front()<<" "<<l3.back()<<endl;   // 4 8
	
	// Functions to push integers in front and back
	l3.push_front(9);   // 9 4 5 6 8
	l3.push_back(6);    // 9 4 5 6 8 6

	// Removing all occurances of specified digit
	l3.remove(6);       // 9 4 5 8

	for(auto it=l3.begin();it!=l3.end();it++)
	cout<<*it<<" ";   // 9 4 5 8
	cout<<endl;

	// Emplace functions can also be used
	l3.emplace_front(14);
	l3.emplace_back(16);
	for(auto it=l3.begin();it!=l3.end();it++)
	cout<<*it<<" ";   // 14 9 4 5 8 16
	cout<<endl;

	l3.pop_front();
	l3.pop_back();
	for(auto it=l3.begin();it!=l3.end();it++)
	cout<<*it<<" ";   // 9 4 5 8
	cout<<endl;
}
