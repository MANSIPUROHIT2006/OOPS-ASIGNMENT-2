// create a function that prints the elements of an array
#include <iostream>
using namespace std;
int print_arr(int arr[], int size);
int main()
{
    int arr[5];
    cout << "Enter the elements of the array of size 5" << endl;
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    print_arr(arr, size);

    return 0;
}

int print_arr(int arr[], int size)
{
    cout << "The elements of array are as follows :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
