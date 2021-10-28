#include<bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int>v;  // vector declaration
	
	v.push_back(2);
	v.push_back(4);
	v.push_back(6);
	
	cout<<v.size()<<endl;
	
	// simple loop
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	cout<<endl;
	
	v.pop_back();
	
	// iterator
	for(auto it=v.begin();it!=v.end();it++)
	cout<<*it<<" ";
	cout<<endl;
	
	// taking user input
	int n;
	cin>>n;
	vector<int>v1(n,0);
	for(int i=0;i<n;i++)
	cin>>v[i];
	
	// Erasing
	v.erase(v.begin()+4);              // erases the fifth element of the vector v
	v.erase(v.begin()+2,v.begin()+5);  // erases all the elements from the third element to the fifth element.
	
	return 0;
}
