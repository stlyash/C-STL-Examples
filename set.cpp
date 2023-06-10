#include<bits/stdc++.h>
using namespace std;

int main(){
    // Declare a set of integers
    set<int> s;
    
    // Insert elements into the set
    s.insert(10);
    s.insert(8);
    s.insert(1);
    s.insert(2);
    s.insert(10);
    
    // Declare another set of integers
    
    // Insert elements into the set
    s.insert(10);
    s.insert(8);
    s.insert(1);
    s.insert(2);
    s.insert(10);   

	// In C++, sets are sorted automatically      
	//  {10,8,1,2} => {1,2,8,10}
    
    // Remove an element from the set
    s.erase(10);
    
    // Print the size of the set
    cout<<s.size()<<endl;   // 4
    
    // Find an element in the set
    auto it=s.find(8);
    if(it!=s.end())
        cout<<"Present"<<endl;
    
    // Count the occurrences of an element in the set
    int count=s.count(1);  // return 1
    
    // Print the count
    cout<<count<<endl;
    
    // Print the elements of the set
    for(auto it=s.begin();it!=s.end();it++)
        cout<<*it<<endl;
    
    // Clear the set
    s.clear();
    
    // Check if the set is empty
    if(s.empty())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    
    // Print the size of the set
    cout<<s.size()<<endl;   // 4
    
    // Find an element in the set
    auto it=s.find(8);
    if(it!=s.end())
        cout<<"Present"<<endl;
    
    // Count the occurrences of an element in the set
    int count=s.count(1);  // return 1
    
    // Print the count
    cout<<count<<endl;
    
    // Print the elements of the set
    for(auto it=s.begin();it!=s.end();it++)
        cout<<*it<<endl;
    
    // Clear the set
    s.clear();
    
    // Check if the set is empty
    if(s.empty())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
