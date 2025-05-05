// Create a function that calculates the power of a number with a default exponent of 2;

#include <iostream>
#include <cmath>
using namespace std;
int power(double base, int exp = 2)
{
    return pow(base, exp);
}
int main()
{
    double base = 5.0;

    cout << "Power of " << base << " with default exponent 2: " << power(base) << endl;

    int customExponent = 3;
    cout << "Power of " << base << " with exponent " << customExponent << ": " << power(base, customExponent) << endl;

    return 0;
}
