// Write a program to demonstrate the concept of recursive functions

#include <iostream>

using namespace std;

// Recursive function to calculate the factorial of a number
int factorial(int n)
{
    // Base case: if n is 0, return 1
    if (n == 0)
    {
        return 1;
    }
    else
    {
        // Recursive case: n * factorial of (n-1)
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;

    // Input from the user
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    // Output the factorial of the number
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    return 0;
}
