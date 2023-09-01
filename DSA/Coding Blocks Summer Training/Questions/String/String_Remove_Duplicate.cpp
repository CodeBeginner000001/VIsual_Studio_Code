/*
Take as input S, a string. Write a function that removes all consecutive duplicates. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000

Output Format
String

Sample Input
aabccba
Sample Output
abcba
Explanation
For the given example, "aabccba", Consecutive Occurrence of a is 2, b is 1, and c is 2.

After removing all of the consecutive occurences, the Final ans will be : - "abcba".
*/
#include <bits/stdc++.h>
using namespace std;
void duplicate(string s, int v)
{
    string g;
    for (int i = 0; i < v; i++)
    {
        if (s[i] != s[i + 1])
        {
            g += s[i];
        }
    }
    cout << g;
}
int main()
{
    char s[1000];
    cout << "Enter String : ";
    cin >> s;
    int a = strlen(s);
    duplicate(s, a);

} // namespace std;
