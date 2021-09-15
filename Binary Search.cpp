#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{	
	// binary_search([begin index],[end index],<element to be searched>)
	
	// For Vectors
	
	vector<int>v={1,2,3,6,8};

	if(binary_search(v.begin(),v.end(),3))      
    	{
	    cout<<"Element is present"<<endl;
    	}
	else
	{
	    cout<<"Element is not present"<<endl;
	}
	
	
	// For Arrays
	
	int arr[5] = {1,2,3,4,5};
	if(binary_search(arr + 0, arr + 4,9))      
    	{
	    cout<<"Element is present"<<endl;
    	}
	else
	{
	    cout<<"Element is not present"<<endl;
	}


	return 0;
}
