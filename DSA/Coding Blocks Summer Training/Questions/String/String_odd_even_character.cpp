/*Take as input S, a string. Write a function that replaces every even character
with the character having just higher ASCII code and every odd character with the
character having just lower ASCII code. Print the value returned.

Input Format
String

Constraints
Length of string should be between 1 to 1000.

Output Format
String

Sample Input
abcg
Sample Output
badf */
#include <bits/stdc++.h>
using namespace std;
string g(string a)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (i % 2 != 0)
        {
            char x = a[i];
            x--;
            a[i] = x;
        }
        else
        {
            char x = a[i];
            x++;
            a[i] = x;
        }
    }
    return a;
}
int main()
{
    string s;
    cout << "Enter: ";
    cin >> s;
    string v = g(s);
    cout << v;
}
