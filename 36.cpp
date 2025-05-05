// Write an inline function that calculates the square of a number;

#include <iostream>
using namespace std;
inline int sqr(int n);
int main()
{
    int n;
    cout << "Enter a number to get its square" << endl;
    cin >> n;
    cout << "The square of " << n << " is : " << sqr(n);
    return 0;
}

inline int sqr(int n)
{
    return n * n;
}
