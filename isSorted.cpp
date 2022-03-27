#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v{5, 3, 2, 4, 9, 1};

	cout<< is_sorted(v.begin(), v.end()) << endl;  // 0
	cout<< is_sorted(v.begin(), v.end(), greater<int>()) <<endl;  // 0

	sort(v.begin(), v.end());  // 1 2 3 4 5 9
	
	cout<< is_sorted(v.begin(), v.end()) << endl;  // 1
	cout<< is_sorted(v.begin(), v.end(), greater<int>()) <<endl;  // 0

	sort(v.begin(), v.end(), greater<int>());  // 9 5 4 3 2 1
	
	cout<< is_sorted(v.begin(), v.end()) << endl;  // 0
	cout<< is_sorted(v.begin(), v.end(), greater<int>()) <<endl;  // 1
}