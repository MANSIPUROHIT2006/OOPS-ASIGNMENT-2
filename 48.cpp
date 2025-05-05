// Implement a program that uses an array of function pointers

#include <iostream>

using namespace std;

// Function declarations for basic arithmetic operations
double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
}

int main()
{
    // Define an array of function pointers for the arithmetic operations
    double (*operations[4])(double, double) = {add, subtract, multiply, divide};

    double num1, num2;
    int choice;

    // User input for two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Displaying the operation choices
    cout << "Select an operation:\n";
    cout << "0 - Addition\n";
    cout << "1 - Subtraction\n";
    cout << "2 - Multiplication\n";
    cout << "3 - Division\n";
    cout << "Enter your choice (0-3): ";
    cin >> choice;

    // Checking if the choice is valid
    if (choice >= 0 && choice <= 3)
    {
        // Call the selected function via the function pointer array
        double result = operations[choice](num1, num2);
        cout << "Result: " << result << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
