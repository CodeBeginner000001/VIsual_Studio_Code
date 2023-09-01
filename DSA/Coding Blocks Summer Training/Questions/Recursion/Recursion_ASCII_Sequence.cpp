/*Take as input str, a string. We are concerned with all the possible ascii-subsequences of str. E.g. “ab” has following ascii-subsequences “”, “b”, “98”, “a”, “ab”, “a98”, “97”, “97b”, “9798”

a. Write a recursive function which returns the count of ascii-subsequences for a given string. Print the value returned.

b. Write a recursive function which prints all possible ascii-subsequences for a given string (void is the return type for function).

Input Format
Enter the string

Constraints
None

Output Format
Display the number of ASCII-subsequences and display all the ASCII- subsequences

Sample Input
ab
Sample Output
 b 98 a ab a98 97 97b 9798
9
*/
#include <bits/stdc++.h>

using namespace std;

void display(string str, int repo, string out[], int &outpos)
{
    if (str[repo] == '\0')
    {
        out[outpos++] = "";
        return;
    }
    display(str, repo + 1, out, outpos);
    for (int i = 0; i < outpos; i++)
        out[outpos + i] = str[repo] + out[i];
    int outqw = outpos;
    outpos *= 2;
    for (int i = 0; i < outpos; i++)
    {
        ostringstream ss;
        int num = str[repo];
        ss << num;
        out[i + outpos] = ss.str() + out[i];
    }
    outpos += outqw;
}

int main()
{
    string str;
    cin >> str;

    string out[10000];
    int outpos = 0;

    display(str, 0, out, outpos);
    for (int i = 0; i < outpos; i++)
        cout << out[i] << " ";
    cout << endl;
    cout << outpos << "\n";
}