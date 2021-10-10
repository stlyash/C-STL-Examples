#include<bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int>v1 = {3,1,2,5};
	vector<int>v2 = {4,1,8,9};
	vector<int>v3(10);
	
	merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
	
	for (int i = 0; i < v3.size(); i++)
		cout<<v3[i]<<" ";             // returns 3 1 2 4 1 5 8 9 0 0                  
	cout<<endl;
	
	return 0;
}
