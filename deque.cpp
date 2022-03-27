#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d = {2, 3, 4};
    
    d.push_front(1);
    d.pop_back();
    
    for(int x: d)
        cout<< x <<" ";  // 1 2 3
    cout<<endl;
    
    d.push_back(3);
    d.pop_front();
    
    for(int x: d)
        cout<< x <<" ";  // 2 3 3
    cout<<endl;
    
  }