// Create a program to demonstrate the use of function templates

#include <iostream>

using namespace std;

// Function template to find the maximum of two values
template <typename T>
T findMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int int1 = 10, int2 = 20;
    double double1 = 3.5, double2 = 2.7;
    float float1 = 5.6f, float2 = 7.8f;

    // Using the function template with different data types
    cout << "Max of " << int1 << " and " << int2 << " is: " << findMax(int1, int2) << endl;
    cout << "Max of " << double1 << " and " << double2 << " is: " << findMax(double1, double2) << endl;
    cout << "Max of " << float1 << " and " << float2 << " is: " << findMax(float1, float2) << endl;

    return 0;
}
