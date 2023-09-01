/*
 Take an input N, a number. Take N more inputs and store that in an array. Take an input target, a number

a. Write a recursive function which prints subsets of the array which sum to target.

b. Write a recursive function which counts the number of subsets of the array which sum to target. Print the value returned.

Input Format
Take an input N, a number. Take N more inputs and store that in an array. Take an input target, a number

Constraints
None

Output Format
Display the number of subsets and print the subsets in a space separated manner.

Sample Input
3
1
2
3
3
Sample Output
1 2  3
2
Explanation
Add 2 spaces between 2 subset solutions
 */

#include <iostream>
#include <vector>
int count = 0;
using namespace std;

void generateCombinations(int t, vector<int> c, vector<int> &comb, int i)
{

    // base case

    if (t == 0)
    {
        for (int candidate : comb)
        {
            cout << candidate << " ";
        }
        cout << " ";
        count++;
    }

    int n = c.size();
    for (int j = i; j < n; j++)
    {
        if (t - c[j] >= 0)
        {
            comb.push_back(c[j]);
            generateCombinations(t - c[j], c, comb, j + 1);
            comb.pop_back();
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int f;
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        cin >> f;
        c.push_back(f);
        /* code */
    }

    int t;
    cin >> t;

    vector<int> comb; // to track the combination that sums up to 't'

    generateCombinations(t, c, comb, 0);
    cout << "\n"
         << count;
    return 0;
}