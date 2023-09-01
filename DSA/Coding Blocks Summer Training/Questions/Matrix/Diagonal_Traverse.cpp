/*
Given an array of M x N elements (M rows, N columns), return all elements of the array in diagonal order .

Input Format
Two integers M(row) and N(column) and Second line contains N*M space separated integers denoting the elements of Array.

Constraints
The total number of elements of the given array will not exceed 10,000.

Output Format
display Diagonal

Sample Input
3 3
1 2 3 4 5 6 7 8 9
Sample Output
1 2 4 7 5 3 6 8 9
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter size: ";
    cin >> m >> n;
    int a[m][n];
    cout << "Enter element in array: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    bool rev = false;

    int row = 0;
    int col = 0;

    while (row < m and col < n)
    {
        if (rev)
        { // if rev is true
            while (col > 0 and row < m - 1)
            {
                cout << a[row++][col--] << " "; // print top to bottom
            }
            cout << a[row][col] << " ";
            if (row == m - 1)
                col++;
            else
                row++;
        }
        else
        {
            while (row > 0 and col < n - 1)
            {
                cout << a[row--][col++] << " "; // else print bottom to top
            }
            cout << a[row][col] << " ";
            if (col == n - 1)
            {
                row++;
            }
            else
                col++;
        }
        rev = !rev; // reverse everytime you print in one order
    }

    return 0;
}
