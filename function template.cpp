#include<bits/stdc++.h>
using namespace std;

// Template function to find the maximum value between two values of type T
template<typename T>
T maxi(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    // Calling the template function with int arguments
    cout << maxi<int>(3, 6) << endl;
    // Output: 6 (maximum of 3 and 6)

//----------------------------------------------------------

    // Calling the template function with float arguments
    cout << maxi<float>(3.5, 6.2) << endl;
    // Output: 6.2 (maximum of 3.5 and 6.2)

    return 0;
}
