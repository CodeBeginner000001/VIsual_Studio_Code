/*Generate Pairs

Given an array of N integers, design an algorithm to generate all of its pairs. */

#include <iostream>
using namespace std;
int main()
{
    int n, a[100];
    cout << "Enetr the size of array:";
    cin >> n;
    // allow user to enter the elemennt in an array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // print the entered array

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // generating pairs

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "(" << a[i] << "," << a[j] << "),";
        }
        cout << endl;
    }
    cout << endl;
}