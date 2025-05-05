// Write a function prototype for that calculates tht=e factorial of a number;

#include <iostream>
using namespace std;
long long factorial(int n);

int main()
{
    int n;
    cout << "Enter a number to get its factorial" << endl;
    cin >> n;
    cout << "The factorial of " << n << " is : ";
    cout << factorial(n);
    return 0;
}

long long factorial(int n)
{
    if (n <= 0 || n == 1)
    {

        return 1;
    }

    return n * factorial(n - 1);
}
