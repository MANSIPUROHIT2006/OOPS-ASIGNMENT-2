// Write a program to illustrate the concept of function pointers and callback functions

#include <iostream>

using namespace std;

// A simple callback function that adds two numbers
int add(int a, int b)
{
    return a + b;
}

// Another callback function that multiplies two numbers
int multiply(int a, int b)
{
    return a * b;
}

// Function that accepts a callback function as a parameter
// This function will call the callback function with the arguments a and b
int performOperation(int a, int b, int (*operation)(int, int))
{
    return operation(a, b); // Calls the passed callback function
}

int main()
{
    int num1 = 10, num2 = 5;

    // Using the 'add' function as a callback
    cout << "Result of addition: " << performOperation(num1, num2, add) << endl;

    // Using the 'multiply' function as a callback
    cout << "Result of multiplication: " << performOperation(num1, num2, multiply) << endl;

    return 0;
}
