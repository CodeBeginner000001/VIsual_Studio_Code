/*Reverse in Range

Given an array of N integers,  and two non-negative integers i and j where 0 <= i<j <= N-1
design an algorithm to reverse the subarray that starts at the ith index and ends at the jth index.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    int a[100];
    // enter the size of array
    cout << "Enter the size of array:";
    cin >> n;
    // enter the elements in array
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    // print the elements entered
    for (int i = 1; i <= n; i++)
    {
        /* code */ cout << a[i] << " ";
    }
    cout << endl;

    // initalizing i and j
    int i, j;
    // enter the the starting and ending range for the elements you want to swap
    cout << "enter the starting range you want to start swapping:";
    cin >> i;
    cout << "enter the ending range you want to end swapping:";
    cin >> j;
    // checks the enter range if in range
    if (j <= n)
    {
        while (i < j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    // out of range
    else
    {
        cout << "Error.....   Out of Range" << endl;
        return 0;
    }
    // print the final array after problem solve
    for (i = 1; i <= n; i++)
    {
        /* code */ cout << a[i] << " ";
    }
    cout << endl;
}