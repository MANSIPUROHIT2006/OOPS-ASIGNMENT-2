// Write a simple function that calculates the area of a circle.
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the radius of the circle" << endl;
    double rad;
    cin >> rad;
    double area = 3.14 * (rad * rad);
    cout << "The area of the circle with radius " << rad << " is : " << area << endl;
    return 0;
}
