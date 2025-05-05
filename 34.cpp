// Implement a function that increments the value of an integer by 10 usng call by reference

#include <iostream>
using namespace std;
int inc(int *i);
int main()
{
    int n;
    cout << "Enter a number " << endl;
    cin >> n;
    cout << inc(&n);
    return 0;
}

int inc(int *i)
{
    int ans = (*i) + 10;
    return ans;
}
