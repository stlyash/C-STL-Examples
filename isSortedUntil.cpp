#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v{1, 2, 3, 0, 5, 3, 2, 8, 9};

	auto it1 = is_sorted_until(v.begin(), v.end());
	auto it2 = is_sorted_until(v.begin() + 4, v.end(), greater<int>());
	
	auto difference1 = distance(v.begin(), it1);
	auto difference2 = distance(v.begin() + 4, it2);

	cout<< difference1 <<endl; // 3
	cout<< difference2 <<endl; // 3
}