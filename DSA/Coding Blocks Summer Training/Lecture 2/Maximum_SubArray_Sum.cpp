#include <iostream>
using namespace std;

// uncomment this code for better approach
// method 1:

// long long maxSubarraySum(int arr[], int n)
// {
//     long long maxi = LONG_MIN; // maximum sum
//     long long sum = 0;

//     for (int i = 0; i < n; i++)
//     {

//         sum += arr[i];

//         if (sum > maxi)
//         {
//             maxi = sum;
//         }

//         // If sum < 0: discard the sum calculated
//         if (sum < 0)
//         {
//             sum = 0;
//         }
//     }

//     // To consider the sum of the empty subarray
//     // uncomment the following check:

//     // if (maxi < 0) maxi = 0;

//     return maxi;
// }

// int main()
// {
//     int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     long long maxSum = maxSubarraySum(arr, n);
//     cout << "The maximum subarray sum is: " << maxSum << endl;
// }

// Method 2:

// int main()
// {
//     int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int csum[101];
//     csum[0] = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         csum[i] = csum[i - 1] + arr[i - 1];
//     }
//     for (int i = 0; i <= n; i++)
//     {
//         cout << csum[i] << " ";
//     }
//     cout << endl;

//     int maxsum = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = csum[j + 1] - csum[i];
//             if (sum > maxsum)
//             {
//                 maxsum = sum;
//             }
//         }
//     }
//     cout << maxsum << endl;
// }

// Method 3:
//  Kadan's Method

int main()
{
    int n, a[100];
    cout << "Enter the size of array:";
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

    int x = a[0];
    int max_sum = x;
    for (int i = 1; i < n; i++)
    {
        x = max(x + a[i], a[i]);
        max_sum = max(x, max_sum);
    }
    cout << max_sum << endl;
}
