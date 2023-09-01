/*Binary Search

Given a sorted array consisting of N distinct
integers and a target integer T, design a
recursive algorithm to find the index of
its occurrence in the array.

note : return -1 if T is not present in the given array.
Example
Input:

T = 20
10 20 30 40 50
Output : 1
*/
#include <iostream>
using namespace std;

int f(int *a, int t, int s, int e)
{
    // base case
    if (s > e)
    {
        // note : return -1 if T is not present in the given array.
        return -1;
    }
    // recursive case
    int m = s + (e - s) / 2; // find the mid index of the array
    if (a[m] == t)           // if value at that index is equal to the targeted value
    {
        return m;
    }
    else if (a[m] < t) // if value at that index is less than targeted value
    {
        return f(a, t, m + 1, e); // then starting index changes from m to m+1 ..... till e
    }
    else // (a[m]>t)    if value at that index is more than the targeted value
    {
        return f(a, t, s, m - 1); // then starting index is 0 .......m-1
    }
}
int main()
{
    int n, a[100], t;
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
    cout << "Enter the targeted value: ";
    cin >> t;
    cout << f(a, t, 0, n - 1);
}