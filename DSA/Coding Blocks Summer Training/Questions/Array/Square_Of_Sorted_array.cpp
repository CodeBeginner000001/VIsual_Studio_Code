/*
You are very fond of finding squares of a number. You want to sort an integer array after finding squares of each number.

You are given an integer array nums sorted in non-decreasing order, print an array of the squares of each number sorted in non-decreasing order.

Input Format
First Line contains an integer N (size of the array) .
Second Line contains an integer array.

Constraints
1 <= N <= 104
-104 <= Nums[i] <= 104
Output Format
Print squared-sorted array.

Sample Input
5
-3 -2 0 1 4
Sample Output
0 1 4 9 16
Explanation
Taking Square and then our Sorted array will look like : 0 1 4 9 16
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[15000];
    cout << "Enter: ";
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
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}