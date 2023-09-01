/*Take as input S, a string.
Write a function that does basic string compression.
 Print the value returned. E.g. for input “aaabbccds”
 print out a3b2c2ds.

Input Format
A single String S.

Constraints
A string of length between 1 to 1000

Output Format
The compressed String.

Sample Input
aaabbccds
Sample Output
a3b2c2ds
Explanation
In the given sample test case 'a' is repeated 3 times consecutively,
'b' is repeated twice, 'c' is repeated twice. But, 'd' and 's' occurred
only once that's why we do not write their occurrence.*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cout << "Enter: ";
    cin >> str;

    int count = 1;
    char last_digit = str[0];
    cout << last_digit;
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == last_digit)
            count++;
        else if (count > 1)
        {
            cout << count;
            count = 1;
            last_digit = str[i];
            cout << last_digit;
        }
        else if (count == 1)
        {
            last_digit = str[i];
            cout << last_digit;
        }
    }
    if (count > 1)
        cout << count;
}