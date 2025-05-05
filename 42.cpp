// Implement overloaded functions to find the maximum of two and three numbers

#include <iostream>

// Overloaded function to find the maximum of two numbers
double max(double a, double b)
{
    return (a > b) ? a : b; // Return a if a is greater, else return b
}

// Overloaded function to find the maximum of three numbers
double max(double a, double b, double c)
{
    // First compare a and b, then compare the result with c
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main()
{
    double num1 = 5.6, num2 = 3.4, num3 = 7.8;

    // Find the maximum of two numbers
    std::cout << "Maximum of " << num1 << " and " << num2 << " is: " << max(num1, num2) << std::endl;

    // Find the maximum of three numbers
    std::cout << "Maximum of " << num1 << ", " << num2 << " and " << num3 << " is: " << max(num1, num2, num3) << std::endl;

    return 0;
}
