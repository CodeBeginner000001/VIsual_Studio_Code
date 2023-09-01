/*Selection Sort

Given an array of  N integers, sort the array using the selection sort algorithm. */
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

    for (int i = 0; i < N - 1; i++)
    {
        int mid_index = i;
        for (int j = i + 1; j < N; j++)
        {
            if (arr[j] < arr[mid_index])
            {
                mid_index = j;
            }
        }
        swap(arr[i], arr[mid_index]);
    }

    for (int i = 0; i < N; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
}
