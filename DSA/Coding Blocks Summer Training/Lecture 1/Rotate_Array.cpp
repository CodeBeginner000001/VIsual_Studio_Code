/*Rotate Array
Given an array of N integers, design an algorithm to rotate the array once in the clockwise direction*/
#include <iostream>
using namespace std;
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
    // newline
    cout << endl;
    // create a vairable name temp to store last value of array
    int temp = a[n - 1];
    // for loop for rotating the elements by 1 toward right
    for (int i = n; i > 1; i--)
    {
        a[i - 1] = a[i - 2];
        /* code */
    }
    // save the last element in first array column
    a[0] = temp;
    // print array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";

        /* code */
    }
    cout << endl;
}