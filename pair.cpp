#include<bits/stdc++.h>

using namespace std;

int main()
{
	// initialization
	pair<int,int>p1;
	p1={2,4};
	
	pair<int,int>p2(5,8);
	
	pair<int,int>p3=p1;
	
	pair<float,int>p4=make_pair(3.4,6);
	
	// accessing the values
	cout<<p1.first<<" "<<p1.second<<endl;
	cout<<p2.first<<" "<<p2.second<<endl;
	cout<<p3.first<<" "<<p3.second<<endl;
	cout<<p4.first<<" "<<p4.second<<endl;
				
				
	// pair array 
	pair<int,int>p5[4];

	for(int i=0;i<4;i++)
	{
		// Taking user input inside the pair array
		cin>>p5[i].first>>p5[i].second; 
	}
	
	for(int i=0;i<4;i++)
	{
		cout<<p5[i].first<<" "<<p5[i].second<<endl;
	}
	
	
}
