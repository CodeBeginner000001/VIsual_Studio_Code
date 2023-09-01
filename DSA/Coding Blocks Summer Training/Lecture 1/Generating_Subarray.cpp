/*Generate Sub-Arrays

Given an array of N integers, design an algorithm to generate all of its sub-arrays.

Note : We define a sub-array of an array as a contiguous part of the given array. */
#include <iostream>
using namespace std;
int main()
{
    int n, a[100];
    // Enter the size of array
    cout << "Enter the size of the array:";
    cin >> n;
    // enter the elements in the created array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        /* code */
    }
    // print the enter elements
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        /* code */
    }
    cout << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}