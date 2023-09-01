/*Sum of Array

Given an array of N integer, design a
recursive algorithm to compute the
sum of array elements.

Example:
Input
10 20 30 40 50
Output : 150 */
#include <iostream>
using namespace std;

int f(int *a, int n, int i)
{
    // base case
    if (i == n - 1)
    {
        return a[n - 1]; // returning last number so that it can be added
    }
    // recursive case
    int A = f(a, n, i + 1); // friend is doing rest of the work
    return a[i] + A;        // adding only one number rest work is done by friend
}

int main()
{
    int n, a[100];
    cout << "Enter the size of array:";
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

    cout << f(a, n, 0); // print the returned value by function
}
