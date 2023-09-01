/*Square Root of a Number

Given a non-negative integer N, design an algorithm to find its square root.

Example

Input : N = 64
Output : 8

Input : N = 30
Output : 5.47 */

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int N;
    cout << "Enter the number for which you need to find the square root : ";
    cin >> N;

    // finding the perfect square root

    // int no = 0;
    // while (no * no <= N)
    // {
    //     no += 1;
    // }
    // no -= 1;
    // cout << "The Sqaure root of " << N << " is : " << no;
    // cout << endl;

    // Getting square root of any number wheather the number is perfect square or not
    int P;
    cout << " Enter the precision level: ";
    cin >> P;

    float no = 0; // number that will be incremented
    float e = 1;  // increment factor

    int i = 0; // loop variable declaration
    while (i <= P)
    {
        while (no * no <= N) // check if square of the number is less than then the number enetered
        {
            no += e; // increment number by incrementing factor
        }
        no -= e; // then decrement number by incrementing factor when loop is out

        i++;
        e = e / 10; // for incrementing in decimal
    }

    cout << "The square root of " << N << " is : " << no;
    cout << endl;
}