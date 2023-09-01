/*Spell Number

Given a positive integer N,
design a recursive algorithm
to spell it. */
#include <iostream>
using namespace std;
string sub[] = {"zero", "one", "two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

void spell(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // recursive case
    spell(n / 10);         // getting the divisor and passing it in recursive function
    int d = n % 10;        // getting the remainder and storing it in d
    cout << sub[d] << " "; // find the string stored in sub for the value of d
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    spell(n);
}