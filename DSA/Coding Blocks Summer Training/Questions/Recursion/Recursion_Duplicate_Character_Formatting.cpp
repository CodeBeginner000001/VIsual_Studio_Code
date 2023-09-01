/*
Take an input str, a string. Write a recursive function which returns a new string in which all duplicate consecutive characters are separated by a ‘ * ’. E.g. for “hello” return “hel*lo”. Print the value returned

Input Format
Enter a String

Constraints
1<= Length of string <= 10^4

Output Format
Display the resulting string (i.e after inserting (*) b/w all the duplicate characters)

Sample Input
hello
Sample Output
hel*lo
Explanation
We insert a "*" between the two consecutive 'l' .
*/
#include <bits/stdc++.h>

using namespace std;

void edit(char str[], char current, int repo)
{
    if (str[repo] == '\0')
        return;
    if (str[repo] == current)
    {
        // cout<<"1";
        for (int i = strlen(str); i >= repo; i--)
            str[i + 1] = str[i];
        str[repo] = '*';
        current = '*';
    }
    else
        current = str[repo];
    edit(str, current, repo + 1);
}

int main()
{
    char str[1000];
    cout << "Enter: ";
    cin >> str;
    edit(str, '*', 0);
    cout << str;
}