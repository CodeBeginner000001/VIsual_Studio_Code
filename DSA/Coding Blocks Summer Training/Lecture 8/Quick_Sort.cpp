/*Quick Sort

Given an array of N integers, sort it using the quick sort algorithm.

The quick sort algorithm operates as per the divide and conquer strategy and involves two steps to sort an array
partition the array into two subarray around the pivot such that
all the elements in the left partition are <  the pivot
all the element in the right partition are > the pivot
recursively sort the two sub-arrays */

#include <iostream>
using namespace std;
int pivot(int *a, int s, int e)
{
    int p = e;
    int j = s;
    int i = s - 1;
    while (j <= e - 1)
    {
        if (a[j] < a[e])
        {
            i++;
            swap(a[i], a[j]);
        }
        j++;
    }
    swap(a[i + 1], a[e]);
    return i + 1;
}
void quicksort(int *a, int s, int e)
{
    // base  case
    if (s >= e)
    {
        return;
    }
    // recursive case
    int p = pivot(a, s, e);
    quicksort(a, s, p - 1);
    quicksort(a, p + 1, e);
}
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

    quicksort(a, 0, n - 1);
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        /* code */
    }
}
