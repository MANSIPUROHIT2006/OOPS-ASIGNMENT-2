// Implement a program that uses an inline function to calculate the sum of two numbers.
#include <iostream>
using namespace std;
inline int sum(int x, int y)
{
    return x + y;
}
int main()
{
    int x, y;
    cout << "Enter a number" << endl;
    cin >> x;
    cout << "Enter another number " << endl;
    cin >> y;
    cout << "The sum of " << x << " and " << y << " is " << sum(x, y) << endl;
    return 0;
}
