/* You have a given sorted array of length N consisting of unique elements. Now your teacher rotates it for K times. Notice that rotating an array [a[0], a[1], a[2], …, a[n-1]] 3 times results in the array [a[n-3],a[n-2],a[n-1], a[0], a[1], a[2], …, a[n-4]].
For example, an array nums = [0,1,2,4,5,6,7] might become:

[4,5,6,7,0,1,2] if it was rotated K=4 times.
[0,1,2,4,5,6,7] if it was rotated K=0 times.
[7,0,1,2,4,5,6] if it was rotated K=8 times
You have this rotated sorted array now.Find the minimum element of this array.You must write an algorithm that runs in O(log n) time.
Input Format
Take an input N(size of array).
Next line takes N elements.

Constraints
1<=N<=10^10

-10^10<= arr[i] <=10^10
All the integers of arr are unique

Output Format
Find the minimum element in this array.

Sample Input
5
4 5 0 1 2
Sample Output
0
Explanation
Minimum element be 0.*/

#include <bits/stdc++.h>
using namespace std;

int findMin(int arr[], int low, int high)
{
    if (high < low)
        return arr[0];

    if (high == low)
        return arr[low];

    int mid = low + (high - low) / 2;

    if (mid < high && arr[mid + 1] < arr[mid])
        return arr[mid + 1];

    if (mid > low && arr[mid] < arr[mid - 1])
        return arr[mid];

    if (arr[high] > arr[mid])
        return findMin(arr, low, mid - 1);
    return findMin(arr, mid + 1, high);
}

// Driver program to test above functions
int main()
{
    int n, arr[15000];
    cout << "Enter: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    // Function call
    cout << "The minimum element is "
         << findMin(arr, 0, n - 1) << endl;

    return 0;
}
