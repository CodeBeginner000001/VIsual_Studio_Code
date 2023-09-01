/*
Take as input str, a string. Write a recursive function that checks if the string was generated using the following rules and returns a Boolean value:
1. the string begins with an 'a'
2. each 'a' is followed by nothing or an 'a' or "bb"
3. each "bb" is followed by nothing or an 'a' Print the value returned.

Input Format
Enter the String

Constraints
None

Output Format
Display the boolean result

Sample Input
abba
Sample Output
true
*/

#include <bits/stdc++.h>

using namespace std;

bool check(string str, int repo, char last)
{
    if (str[repo] == '\0')
        return true;
    if (repo == 0 && str[repo] == 'a')
        return check(str, repo + 1, 'a');
    if (str[repo] == 'b' && str[repo + 1] == 'b' && last == 'a')
        return check(str, repo + 2, 'b');
    if (last == 'b' && str[repo] == 'a')
        return check(str, repo + 1, 'a');
    if (last == 'a' && str[repo] == 'a')
        return check(str, repo + 1, 'a');
    return false;
}

int main()
{
    string str;
    cout << "Enter: ";
    cin >> str;

    if (check(str, 0, 'a'))
        cout << "true";
    else
        cout << "false";
}