/*Take as input N, the size of array. Take N more inputs and store that in an array.
 Take N more inputs and store that in another array. Write a function which gives the
 intersection of two arrays in an ArrayList of integers and Print the ArrayList.

Input Format
First line contains N denoting the size of the two arrays. Second line contains
N space separated integers denoting the elements of the first array. Third line
contains N space separated integers denoting the elements of the second array.

Constraints
Length of Arrays should be between 1 to 100000.

Output Format
Display the repeating elements in a comma separated manner enclosed in square brackets.
The numbers should be sorted in increasing order.

Sample Input
7
1 2 3 1 2 4 1
2 1 3 1 5 2 2
Sample Output
[1, 1, 2, 2, 3]*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int a[size], b[size], c[size];
    cout << "Enter first array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Enter Second array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    sort(a, a + size);
    sort(b, b + size);

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < size && j < size)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {

            c[k] = a[i];
            k++;
            i++;
            j++;
        }
    }
    cout << "[";
    for (int m = 0; m < k - 1; m++)
    {
        cout << c[m] << ",";
    }
    cout << c[k - 1] << "]";
}
