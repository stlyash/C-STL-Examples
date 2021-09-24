#include <bits/stdc++.h>
using namespace std;

int main(){
	
	// For vectors
	
	vector<int>v = {3,1,2,5,6,0};
	
	sort(v.begin(),v.end());                   // ascending order
	
	for(int i = 0; i < v.size(); i++)
	    cout<<v[i]<<" ";                       // returns 0 1 2 3 5 6
	cout<<endl;
	
	sort(v.begin(), v.end(), greater<int>());  // descending order            
	
	for(int i=0;i<v.size();i++)            
		cout<<v[i]<<" ";                   // returns 6 5 3 2 1 0
	cout<<endl;

	// For arrays

    	int arr[6] = {3,1,2,5,6,0};
	
	sort(arr + 0, arr + 6);                   // ascending order
	
	for(int i=0;i<6;i++)
	    cout<<arr[i]<<" ";                    // returns 0 1 2 3 5 6
	cout<<endl;
	
	sort(arr + 0, arr + 6, greater<int>() );  // descending order            
	
	for(int i = 0; i < 6; i++)
		cout<<arr[i]<<" ";                // returns 6 5 3 2 1 0

    	return 0;
}
