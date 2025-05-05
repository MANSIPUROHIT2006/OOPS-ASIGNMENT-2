// Create a function that modifies the elements of an array using call by reference

#include <iostream>
using namespace std;
int *mod(int *ar, int size);
int main()
{
    cout << "Enter the size of the array" << endl;
    int size;
    cin >> size;
    cout << "Enter the elements of the array of size " << size << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    mod(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
int *mod(int *ar, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(ar + i) *= 2;
    }
}
