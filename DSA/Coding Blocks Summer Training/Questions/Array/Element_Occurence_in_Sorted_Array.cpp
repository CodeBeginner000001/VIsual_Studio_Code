/*
Given a sorted array of integers, find the number of occurrences of a given target value.
If the target is not found in the array, return -1.
Note:
Your algorithm must have runtime complexity in the order of O(log n).

Input Format
An integer n followed by n elements of array and an integer x to be searched.

Constraints
1<=n<=10^5
-109<=arr[i]<=109 where arr[i] is any element of array.

Output Format
total occurrences of x

Sample Input
6
1 2 2 3 3 3
2
Sample Output
2
Explanation
Here 2 exists 2 times
*/
#include <bits/stdc++.h>
using namespace std;

int count(int arr[], int x, int n)
{
    int *low = lower_bound(arr, arr + n, x);

    if (low == (arr + n) || *low != x)
        return -1;

    int *high = upper_bound(low, arr + n, x);

    return high - low;
}

int main()
{
    int arr[100000];
    int x, n;
    cout << "Enter the Size: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    cout << "Enter the target: ";
    cin >> x;

    int c = count(arr, x, n);
    cout << c;
    return 0;
}
