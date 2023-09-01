/*Bubble Sort

The bubble sort algorithm works in passes such that in its each pass,
we place the  largest  element in the un-sorted part of the array to its correct position.

Given an array of  N integers, sort the array using the bubble sort algorithm. */

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

    for (int i = 1; i <= n - 1; i++)
    {                      // flag is set to check the condition if exchange is done or not
        bool flag = false; // no change
        // loop to sort the array with each value of i
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = true; // swap took place
            }
        }
        if (flag == false)
        {
            cout << "array is already sorted....." << endl;
            break;
        }
    }
    // print the enter elements
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        /* code */
    }
    cout << endl;
}
