/*Print Increasing

Given a positive integer N, design a recursive
algorithm to print numbers from 1 to N in the
increasing order. */
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
    inc(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter the number till you want increment:";
    cin >> n;
    inc(n);
}
