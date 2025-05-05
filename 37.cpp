// create an inline functiont that returns the cube of a number

#include <iostream>
using namespace std;
inline int cube(int n);
int main()
{
    int n;
    cout << "Enter a number to get its cube" << endl;
    cin >> n;
    cout << "The cube of " << n << " is : " << cube(n);
    return 0;
}

inline int cube(int n)
{
    return n * n * n;
}
