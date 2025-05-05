// Implement a program with a function prototype for a function that returns maximum of three numbers

#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter three numbers" << endl;
    cin >> x >> y >> z;
    int max = 0;
    if (max < x)
    {
        max = x;
    }

    if (max < y)
    {
        max = y;
    }

    if (max < z)
    {
        max = z;
    }

    cout << max << " is the largest " << endl;
    return 0;
}
