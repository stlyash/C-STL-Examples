#include<bits/stdc++.h>

using namespace std;

int main()
{
	// For Vectors
	vector<int>v={3,1,2,5,6,0};

	auto it= max_element(v.begin(),v.end());
	cout<< *it<<endl;                       //returns 6

	auto itr=min_element(v.begin(),v.end());
	cout<< *itr<<endl;                      //returns 0

	// For Arrays
	int arr[5] = {1, 2, 3, 4, 5};

	auto itra= max_element(arr+0, arr+5);
	cout<< *itra<<endl;                     //returns 5

	auto itre=min_element(arr+0, arr+5);
	cout<< *itre<<endl;                     //returns 1


	return 0;
}
