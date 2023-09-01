/*Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a
Explanation:
For the given input string, a appear 4 times. Hence, it is the most frequent character.*/
#include <bits/stdc++.h>
using namespace std;

char getMaxOccurringChar(char *str)
{
    // Create array to keep the count of individual
    // characters and initialize the array as 0
    int count[256] = {0};

    // Construct character count array from the input
    // string.
    int len = strlen(str);
    int max = 0; // Initialize max count
    char result; // Initialize result

    // Traversing through the string and maintaining
    // the count of each character
    for (int i = 0; i < len; i++)
    {
        count[str[i]]++;
        if (max < count[str[i]])
        {
            max = count[str[i]];
            result = str[i];
        }
    }

    return result;
}

// Driver program to test the above function
int main()
{
    char str[10000];
    cout << "Enter : ";
    cin >> str;
    cout << getMaxOccurringChar(str);
}