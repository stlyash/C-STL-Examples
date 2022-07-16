#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// singly LL
	
	forward_list<int>l1={2,5,6,7};
	
	cout<<l1.front()<<endl;   // 2
	for(auto it=l1.begin();it!=l1.end();it++)
	cout<<*it<<" ";   // 2 5 6 7
	cout<<endl;

	// Values can also be assigned after declaring the forward_list
	forward_list<int>l2;
	l2.assign({3,4,5,6});
	
	l2.push_front(4);   // 4 3 4 5 6
	
	cout<<distance(l2.begin(),l2.end())<<endl;   //  5
	
	for(auto it=l2.begin();it!=l2.end();it++)
	cout<<*it<<" ";   // 4 3 4 5 6
	cout<<endl;

	l2.pop_front();
	for(auto it=l2.begin();it!=l2.end();it++)
	cout<<*it<<" ";   // 3 4 5 6
	cout<<endl;
}
