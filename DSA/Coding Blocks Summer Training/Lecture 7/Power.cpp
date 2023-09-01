/*Power

Given two non-negative integers x and y,
design a recursive algorithm to compute x^y. */

#include <iostream>
using namespace std;

// method 1

// int pow(int x, int y)
// {
//     // base case
//     if (y == 0)
//     {
//         return 1;
//     }
//     // recursive case
//     int A = pow(x, y - 1);
//     return x * A;
// }

// method 2
int pow(int x, int y)
{
    // base case
    if (y == 0) // x^0=1
    {
        return 1;
    }
    // recursive case
    int A = pow(x, y / 2); // recursively calling the function to give me pow(x,y/2)
    if (y % 2 == 0)        // X^(y/2)  .  X^(y/2)
    {
        return A * A;
    }
    else
    {
        return x * A * A; //  X^(y/2)  .  X^(y/2)  . X
    }
}

int main()
{
    int x, y;
    cout << "Enter the base number: ";
    cin >> x;
    cout << "Enter the power number: ";
    cin >> y;
    cout << pow(x, y) << endl;
}
