/*
ake as input S, a string. Write a function that toggles the case of all characters in the string. Print the value returned.

Input Format
String

Constraints
Length of string should be between 1 to 1000.

Output Format
String

Sample Input
abC
Sample Output
ABc
Explanation
Toggle Case means to change UpperCase character to LowerCase character and vice-versa.
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cout << "Enter: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        else
            str[i] -= 32;
        cout << str[i];
    }
}