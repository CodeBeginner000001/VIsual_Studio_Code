/*Recursion

It is a kind of Reduction.
Suppose you are given a problem X for which you want to design a recursive algorithm then recursion says
If you can solve X directly then solve it directly. [Base Case]
Otherwise, reduce X into one or more smaller instances of
the same problem (sub-problem). [Recursive Case] */
#include <iostream>
using namespace std;
double fact(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    // recursive case
    double A = fact(n - 1);
    return n * A;
}
int main()
{
    double n;
    cout << "Enter the number to find factorial:";
    cin >> n;
    cout << fact(n) << endl;
}