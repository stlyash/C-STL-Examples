#include<bits/stdc++.h>

using namespace std;

int main(){
	
	queue<int>q;             
								
	q.push(4);                                  
	q.push(5);
	q.push(3);                          // 4   5    3

	q.pop();                            // 5    3               
	
	cout<<q.front()<<endl;         // returns 5
	    
	cout<<q.size()<<endl;          // returns 2                        
	       
	cout<<q.back()<<endl;	       // returns 3
	
	if(q.empty())
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;

    	return 0;
}
