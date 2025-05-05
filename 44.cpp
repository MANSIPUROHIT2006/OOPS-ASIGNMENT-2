// Write a function with default arguments to calculate the compound interest

#include <iostream>
#include <cmath> // For power function (pow)

// Function to calculate compound interest with default arguments
double compoundInterest(double principal, double rate = 5.0, int time = 1)
{
    // Calculate the amount after interest using the compound interest formula
    double amount = principal * pow(1 + (rate / 100), time);

    // Calculate compound interest
    double interest = amount - principal;

    return interest;
}

int main()
{
    double principal = 1000.0; // Example principal amount

    // Calculate compound interest using default rate (5%) and time (1 year)
    double interest = compoundInterest(principal);
    std::cout << "Compound Interest (Default Rate & Time): " << interest << std::endl;

    // Calculate compound interest with a custom rate and time
    double customRate = 7.0; // Custom rate of interest
    int customTime = 3;      // Custom time period (3 years)
    interest = compoundInterest(principal, customRate, customTime);
    std::cout << "Compound Interest (Custom Rate & Time): " << interest << std::endl;

    return 0;
}
