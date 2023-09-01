/*Binary Search

Given a sorted array of N integers & an integer T, implement the binary search algorithm to find the index of T in the given array.

note : output -1 if T is not present in the given array.*/
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
    int t;

    cout << endl;
    cout << endl;
    cout << "enter the element you want to search in the array entered:";
    cin >> t;
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int m = (s + e) / 2;
        if (a[m] == t)
        {
            cout << m;
            cout << endl;
            break;
        }
        else if (t < a[m])
        {
            e = m - 1;
            /* code */
        }
        else
        {
            s = m + 1;
        }
    }
}