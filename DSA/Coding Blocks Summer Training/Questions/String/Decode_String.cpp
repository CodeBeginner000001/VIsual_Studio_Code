/*
Given an encoded string, return its decoded string.

The encoding rule is: k[encodedstring], where the encodedstring inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.

You may assume that the input string is always valid; No extra white spaces, square brackets are well-formed, etc.

Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k. For example, there won't be input like 3a or 2[4].

Input Format
First line contains the string s.

Constraints
None

Output Format
Print the decoded string

Sample Input
3[a]2[bc]3[ee]2[r]
Sample Output
aaabcbceeeeeerr
Explanation
None
*/
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string decodeString(string s)
{

    string result = "";

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != ']')
        {
            result.push_back(s[i]);
        }

        else
        {
            string temp = "";
            while (!result.empty() && result.back() != '[')
            {
                temp.push_back(result.back());
                result.pop_back();
            }

            reverse(temp.begin(), temp.end());

            result.pop_back();

            string num = "";
            while (!result.empty() && result.back() >= '0' && result.back() <= '9')
            {
                num.push_back(result.back());
                result.pop_back();
            }
            reverse(num.begin(), num.end());
            int int_num = stoi(num);

            while (int_num--)
            {
                result += temp;
            }
        }
    }

    return result;
}

int main()
{
    string str;
    cin >> str;
    cout << decodeString(str);
    return 0;
}
