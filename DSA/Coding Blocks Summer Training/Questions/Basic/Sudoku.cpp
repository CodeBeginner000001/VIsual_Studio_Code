
/*
Write a program to solve a Sudoku puzzle by filling the empty cells.

A sudoku solution must satisfy all of the following rules:

Each of the digits 1-9 must occur exactly once in each row.
Each of the digits 1-9 must occur exactly once in each column.
Each of the digits 1-9 must occur exactly once in each of the 9 (3x3) sub-boxes of the grid.
.

Input Format
First line contains a single integer N. Next N lines
contains N integers each, where jth integer int ith line denotes
the value at ith row and jth column in sudoku grid. This value is 0, if the cell is empty.

Constraints
N=9
At least one solution does exists for input matrix.

Output Format
Print N lines containing N integers each, where jth
integer int ith line denotes the value at ith row and jth
column in sudoku grid, such that all cells are filled.

Sample Input
9
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9
Sample Output
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
*/

#include <bits/stdc++.h>
using namespace std;

bool isSafe(int arr[][9], int i, int j, int k, int n)
{
    for (int a = 0; a < n; a++)
    {
        if (arr[i][a] == k || arr[a][j] == k) // change
            return false;
    }

    int key = sqrt(n);
    int p = (i / key) * key;
    int q = (j / key) * key;
    for (int a = p; a < p + key; a++)
    {
        for (int b = q; b < q + key; b++)
        {
            if (arr[a][b] == k)
                return false;
        }
    }
    return true;
}

bool solveSudoku(int arr[][9], int i, int j, int n)
{
    if (i == n)
    {
        for (int a = 0; a < n; a++)
        {
            for (int b = 0; b < n; b++)
            {
                cout << arr[a][b] << " ";
            }
            cout << endl;
        }
        return true;
    }

    if (j == n)
    {
        return solveSudoku(arr, i + 1, 0, n);
    }

    if (arr[i][j] != 0)
        return solveSudoku(arr, i, j + 1, n);

    else
    {
        for (int k = 1; k <= n; k++)
        {
            if (isSafe(arr, i, j, k, n))
            {
                arr[i][j] = k;

                if (solveSudoku(arr, i, j + 1, n))
                    return true;
            }
        }
        arr[i][j] = 0;
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[9][9] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    solveSudoku(arr, 0, 0, n);
    return 0;
}