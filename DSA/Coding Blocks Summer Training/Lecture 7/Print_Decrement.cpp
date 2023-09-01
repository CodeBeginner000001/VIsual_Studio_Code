/*Print Decreasing

Given a positive integer N, design a recursive
algorithm to print numbers from N to 1 in the
decreasing order. */

#include <iostream>
using namespace std;
void inc(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // recursion case
    cout << n << " ";
    inc(n - 1);
}
int main()
{
    int n;
    cout << "Enter the number till you want decrement: ";
    cin >> n;
    inc(n);
}