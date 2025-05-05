// Create overloaded functions to print different data types(int, float , string)

#include <iostream>
#include <string>

// Overloaded function to print an integer
void print(int i)
{
    std::cout << "Integer: " << i << std::endl;
}

// Overloaded function to print a float
void print(float f)
{
    std::cout << "Float: " << f << std::endl;
}

// Overloaded function to print a string
void print(const std::string &s)
{
    std::cout << "String: " << s << std::endl;
}

int main()
{
    int i = 10;
    float f = 3.14f;
    std::string s = "Hello, World!";

    // Calling the overloaded print functions
    print(i); // Calls the int version
    print(f); // Calls the float version
    print(s); // Calls the string version

    return 0;
}
