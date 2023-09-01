/*Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, the size of second array and take M more inputs and store that in second array. Write a function that returns the sum of two arrays. Print the value returned.

Input Format
Constraints
Length of Array should be between 1 and 1000.

Output Format
Sample Input
4
1 0 2 9
5
3 4 5 6 7
Sample Output
3, 5, 5, 9, 6, END
Explanation
Sum of [1, 0, 2, 9] and [3, 4, 5, 6, 7] is [3, 5, 5, 9, 6] and the first digit represents carry over , if any (0 here ) .
*/
#include <bits/stdc++.h>
using namespace std;
void sumOfarray(int a[], int b[], int n, int m)
{
    int i = n - 1, j = m - 1, k = n - 1;
    int si[n];
    int c = 0;
    int s;
    while (j >= 0)
    {
        s = a[i] + b[j] + c;
        si[k] = s % 10;
        c = s / 10;
        k--;
        i--;
        j--;
    }

    while (i >= 0)
    {
        s = a[i] + c;
        si[k] = s % 10;
        c = s / 10;
        k--;
        i--;

        /* code */
    }
    if (c != 0)
    {
        cout << c << ", ";
    }
    for (int l = 0; l < n; l++)
    {
        cout << si[l] << ", ";
    }
    cout << "END";
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int a[1000], b[1000];
    cout << "Enter the size of array 1: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Enter the size of array 2: ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }

    cout << endl;
    if (n >= m)
    {
        sumOfarray(a, b, n, m);
    }
    else
    {
        sumOfarray(b, a, m, n);
    }
}