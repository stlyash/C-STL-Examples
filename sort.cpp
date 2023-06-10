#include <bits/stdc++.h>
using namespace std;

int main(){
    // For vectors
    
    // Declare a vector of integers
    vector<int> v = {3,1,2,5,6,0};
    
    // Sort the vector in ascending order
    sort(v.begin(),v.end());
    
    // Print the sorted vector
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";                       
		// Output: 0 1 2 3 5 6
    cout<<endl;
    
    // Sort the vector in descending order
    sort(v.begin(), v.end(), greater<int>());          
    
    // Print the sorted vector
    for(int i=0; i < v.size(); i++)            
        cout<<v[i]<<" ";                   
		// Output: 6 5 3 2 1 0
    cout<<endl;

//----------------------------------------------

    // For arrays

    // Declare an array of integers
    int arr[6] = {3,1,2,5,6,0};
    
    // Sort the array in ascending order
    sort(arr + 0, arr + 6);
    
    // Print the sorted array
    for(int i=0; i < 6; i++)
        cout<<arr[i]<<" ";                    
		// Output: 0 1 2 3 5 6
    cout<<endl;
    
    // Sort the array in descending order
    sort(arr + 0, arr + 6, greater<int>());           
    
    // Print the sorted array
    for(int i = 0; i < 6; i++)
        cout<<arr[i]<<" ";                
		// Output: 6 5 3 2 1 0

    return 0;
}
