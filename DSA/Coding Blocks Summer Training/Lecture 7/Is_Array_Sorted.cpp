/*Is Array Sorted ?

Given an array of N integer, design a
recursive algorithm to check  if it
is sorted in the increasing order.

Example

Input
10 20 30 40 50
Output : True */

#include <iostream>
using namespace std;
bool f(int *a, int n, int i)
{
    // base case
    if (i == n - 1)
    {
        // checking if a[n-1.....n-1] is sorted or not
        return true;
    }
    // recursive case
    // check a[0]<a[1] & if friend is returning true value
    return a[i] < a[i + 1] & f(a, n, i + 1); // f(a,n,i+1) is returning true value
}
int main()
{
    int n, a[100];
    cout << "Enter the size of array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Is array Sorted: ";
    f(a, n, 0) ? cout << "true" << endl : cout << "false" << endl;
}