/* Fibonacci Numbers

Given a non-negative number n, design a recursive algorithm
to compute the nth Fibonacci number. */
#include <iostream>
using namespace std;
int fibo(int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return n;
    }
    // recursive case
    int A = fibo(n - 1); // asking your friend to calculate n-1
    int B = fibo(n - 2); // asking your friend to calculate n-2
    return A + B;        // in fibonacci the next value depend on the last to elements
                         // so that is why we are findout the value of n-1 & n-2
}
int main()
{
    int n;
    cout << "Enter the number till you want to find factorial:";
    cin >> n;
    cout << fibo(n) << endl;
}
