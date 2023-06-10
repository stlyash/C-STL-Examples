#include<bits/stdc++.h>

using namespace std;

int main(){
	
    // Declare a stack of integers
    stack<int> s;   
    s.push(4);        // Push 4 into the stack
    s.push(5);        // Push 5 into the stack
    s.push(3);        // Push 3 into the stack
    // The stack now contains: 4 <- top, 5, 3
	
    // Print the top element of the stack
    cout<<s.top()<<endl;    // Output: 3
    
    // Print the size of the stack
    cout<<s.size()<<endl;   // Output: 3
    
    // Remove the top element from the stack
    s.pop();
    
    // Print the new top element of the stack
    cout<<s.top()<<endl;    // Output: 5
	       
    // Check if the stack is empty
    if (s.empty())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    // Output: No
}
