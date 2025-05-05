// Write a function to swap two integers using call by reference
#include <iostream>
using namespace std;
int swapp(int *i, int *j);
int main()
{
    int x, y;
    cout << "Enter a number " << endl;
    cin >> x;
    cout << "Enter another number" << endl;
    cin >> y;
    cout << "The value of x and y before swaping : " << endl;
    cout << x << endl
         << y << endl;
    swapp(&x, &y);
    cout << "The value of x and y after swapping : " << endl;
    cout << x << endl
         << y << endl;
    return 0;
}

int swapp(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
    return 0;
}
