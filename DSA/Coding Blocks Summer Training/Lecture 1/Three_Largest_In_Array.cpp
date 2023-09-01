/*Three Largest Elements
Given an array of  N  integers, design an algorithm to find the three largest elements present inside the given array */
#include <iostream>
using namespace std;
int main()
{
    int n, a[100];
    int fl = INT_MIN;
    int sl = INT_MIN;
    int tl = INT_MIN;
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
    // newline
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > fl)
        {
            tl = sl;
            sl = fl;
            fl = a[i];
        }
        else if (a[i] > sl)
        {
            tl = sl;
            sl = a[i];
            /* code */
        }
        else if (a[i] > tl)
        {
            tl = a[i];
            /* code */
        }
    }
    cout << fl << " " << sl << " " << tl;
    cout << endl;
}