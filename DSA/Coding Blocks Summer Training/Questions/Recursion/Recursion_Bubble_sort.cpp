/*
Take as input N, the size of array. Take N more inputs and store that in an array. Write a recursive function which bubble sorts the given array. Print all the values in the sorted array.

Input Format
Enter a number N and input N more numbers and store it in the array

Constraints
None

Output Format
Display the values of the sorted array

Sample Input
3
3
2
1
Sample Output
1 2 3
*/

#include <bits/stdc++.h>

using namespace std;

void BubbleSort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    if (arr[s] > arr[s + 1])
    {
        swap(arr[s], arr[s + 1]);
    }
    BubbleSort(arr, s + 1, e);
    BubbleSort(arr, s, e - 1);
}

int main()
{
    int n;
    cin >> n;

    int a[n], i;
    for (i = 0; i < n; i++)
        cin >> a[i];
    BubbleSort(a, 0, n - 1);
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}
