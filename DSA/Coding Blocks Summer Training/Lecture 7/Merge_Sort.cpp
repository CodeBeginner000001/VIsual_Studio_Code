/*Merge Sort
Given an array of N integers, sort it using the merge sort algorithm.

Example:

50 40 30 20 10

10 20 30 40 50

The merge sort algorithm operates as per the divide and conquer strategy and involves three steps to sort an array
1.divide the array into two subarray around the mid-points
2.recursively sort the two sub-arrays
3.merge the two sorted subarrays */

#include <iostream>
using namespace std;
void merge(int *a, int m, int s, int e)
{
    int i = s;
    int j = m + 1;
    int k = s;
    int c[101];
    while (i <= m && j <= e)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else if (a[i] > a[j])
        {
            c[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= m)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j <= e)
    {
        c[k] = a[j];
        j++;
        k++;
    }
    for (int l = s; l <= e; l++)
    {
        a[l] = c[l];
    }
}

void mergesort(int *a, int s, int e)
{

    if (s == e)
    { // Sort the a[s...s]or a[e......e]
        return;
    }
    // recursive case
    // 1. divide the a[] around mid point
    int m = s + (e - s) / 2;
    // 2. recursivly , sort the array a[s....m] & a[m+1.......e]
    mergesort(a, s, m);
    mergesort(a, m + 1, e);
    // 3. merge the two sorted subarray so that merged array is sorted
    merge(a, m, s, e);
}

int main()
{
    int n, a[100];
    cout << "enter the size of the element: ";
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
    mergesort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}