#include<bits/stdc++.h>
using namespace std;

int main(){
	
	unordered_set<int>s;                 
	
	s.insert(10);
	s.insert(8);                        
	s.insert(1);
	s.insert(2);
	s.insert(10);                      // {10,8,1,2}
	
	cout<<s.size()<<endl;              // returns 4
	
	auto it = s.find(8);   
	if (it != s.end())
	cout<<"Present"<<endl;
	
	int count = s.count(1);            // returns 1
	
	cout<<count<<endl;
	
	for (auto it = s.begin(); it != s.end(); it++)
	cout<<*it<<endl;
	
	s.clear();
	if (s.empty())
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;                 // prints Yes
	

	
	return 0;
}
