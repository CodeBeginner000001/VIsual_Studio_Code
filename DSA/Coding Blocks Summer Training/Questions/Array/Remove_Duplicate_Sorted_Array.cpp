/* Given a sorted array and you just need to remove the duplicates from the array

Input Format
First line contains integer N as size of array.
Next line contains a N integer as element of array.

Constraints
Length of the array is less than 150000
The array is in ascending order

Output Format
The first line prints the new reduced length The second line prints the elements of the array till the new length

Sample Input
3
1 1 2
Sample Output
2
1 2
Explanation
{ 1, 1, 2}
If there is an element that is already present in the array remove the element. Here 1 occurs twice in the array therefore remove one of them and return the reduced list with no duplicates.
The length is = 2 and the array is { 1, 2 }
*/
#include <iostream>
using namespace std;
int main()
{
    int n, a[15000];
    cout << "Enter: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << endl;
    int i = 0;
    int g[15000];
    int count = 0;
    for (int k = 0; k < n; k++)
    {
        if (a[k] != a[k + 1])
        {
            g[i] = a[k];
            i++;
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << g[i] << " ";
    }
}