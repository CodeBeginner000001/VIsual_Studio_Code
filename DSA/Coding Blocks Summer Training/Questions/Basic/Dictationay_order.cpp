/*
Take as input str, a string. Write a recursive function
which returns all the words possible by rearranging the
characters of this string which are in dictionary order
smaller than the given string. The output strings must
be lexicographically sorted.

Input Format
Single line input containing a string

Constraints
Length of string <= 10

All characters are unique

Output Format
Display all the words which are in dictionary order
smaller than the string entered in a new line each.
The output strings must be sorted.

Sample Input
cab
Sample Output
abc
acb
bac
bca
Explanation
The possible permutations of string "cab" are
"abc" , "acb" ,"bac" , "bca" , "cab" and "cba" .
Only four of them are lexicographically less than "cab".
We print them in lexicographical order.
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool is_smaller(const string &a, const string &b)
{
    return a < b;
}

void generate_permutations(string current, const string &remaining, vector<string> &permutations)
{
    if (remaining.empty())
    {
        permutations.push_back(current);
        return;
    }

    for (size_t i = 0; i < remaining.size(); ++i)
    {
        string new_current = current + remaining[i];
        string new_remaining = remaining;
        new_remaining.erase(i, 1);
        generate_permutations(new_current, new_remaining, permutations);
    }
}

vector<string> get_smaller_words(const string &input_str, const vector<string> &permutations)
{
    vector<string> smaller_words;
    for (const string &word : permutations)
    {
        if (is_smaller(word, input_str))
        {
            smaller_words.push_back(word);
        }
    }
    return smaller_words;
}

vector<string> recursive_word_permutations(const string &input_str)
{
    string remaining_chars = input_str;
    sort(remaining_chars.begin(), remaining_chars.end());

    vector<string> permutations;
    generate_permutations("", remaining_chars, permutations);

    vector<string> smaller_words = get_smaller_words(input_str, permutations);

    return smaller_words;
}

int main()
{
    string input_str;
    // cout << "Enter the input string: ";
    cin >> input_str;

    vector<string> output = recursive_word_permutations(input_str);
    // cout << "Lexicographically smaller permutations: ";
    for (const string &word : output)
    {
        cout << word << endl;
    }
    cout << endl;

    return 0;
}