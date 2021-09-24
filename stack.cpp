#include<bits/stdc++.h>

using namespace std;

int main(){
	
    stack<int>s;   
    s.push(4);
    s.push(5);
    s.push(3);              // 4  5  3
	
    cout<<s.top()<<endl;    // returns 3
    cout<<s.size()<<endl;   // returns 3
    
    s.pop();
    cout<<s.top()<<endl;    // returns 5
	       
    if (s.empty())
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

    return 0;
}
