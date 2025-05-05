// Write overloaded function to calculate the area of a circle ,rectangle , and triangle

#include <iostream>
#include <cmath> // For M_PI constant and math functions

// Overloaded function to calculate the area of a circle
double area(double radius)
{
    return M_PI * radius * radius; // Area = π * r^2
}

// Overloaded function to calculate the area of a rectangle
double area(double length, double width)
{
    return length * width; // Area = length * width
}

// Overloaded function to calculate the area of a triangle
double area(double x, double y, double z)
{
    // Check if the sides form a valid triangle (Triangle Inequality Theorem)
    if (x + y <= z || y + z <= x || z + x <= y)
    {
        std::cerr << "Error: Invalid triangle sides!" << std::endl;
        return 0; // Return 0 or handle the error as appropriate
    }

    // Semi-perimeter
    double s = (x + y + z) / 2;

    // Heron's formula for area of triangle
    double temp = s * (s - x) * (s - y) * (s - z);
    double ar = sqrt(temp);

    return ar;
}

int main()
{
    double radius = 5.0;
    double length = 4.0, width = 6.0;
    double x = 7.47, y = 6.4, z = 11.3; // Example invalid triangle sides

    // Calculating and printing areas
    std::cout << "Area of Circle: " << area(radius) << std::endl;
    std::cout << "Area of Rectangle: " << area(length, width) << std::endl;
    std::cout << "Area of Triangle: " << area(x, y, z) << std::endl;

    return 0;
}
