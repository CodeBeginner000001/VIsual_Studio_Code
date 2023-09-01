/*Insertion Sort

Given an array of  N integers, sort the array using the insertion sort algorithm.

The insertion sort algorithm works in passes such that in its each pass, we place the first
element in the un-sorted part of the array to its correct position in the sorted part of the array. */
#include <iostream>
using namespace std;
int main()
{
    int N, arr[100];

    cout << "Enter the amount of elements you want to add : ";
    cin >> N;

    // input from user
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    // display the entered elements
    for (int i = 0; i < N; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 1; i <= N - 1; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 & key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        /* code */
        arr[j + 1] = key;
    }

    for (int i = 0; i < N; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
}