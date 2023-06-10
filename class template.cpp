#include<bits/stdc++.h>
using namespace std;

// Define a template class Pair
template<typename T>
class Pair{
	T x; // Member variable of type T
	T y; // Member variable of type T
	
public:
	// Constructor that takes two parameters of type T
	Pair(T a, T b){
		x = a;
		y = b;
	}
	
	// Getter function to access the first element
	T getfirst(){
		return x;
	}
	
	// Getter function to access the second element
	T getsecond(){
		return y;
	}
};

int main(){
	
	// Create an instance of Pair with integer type
	Pair<int> p1(3, 5);

	cout << p1.getfirst() << " " << p1.getsecond() << endl;
	// Output: 3 5
	
	// Create an instance of Pair with float type
	Pair<float> p2(3.5, 7.8);
	cout << p2.getfirst() << " " << p2.getsecond() << endl;
	// Output: 3.5 7.8
	
	return 0;
}
