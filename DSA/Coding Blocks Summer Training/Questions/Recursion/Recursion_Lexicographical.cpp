/*
Take as input N, a number. Write a recursive function which prints counting from 0 to N in lexicographical order. In lexicographical (dictionary) order 10, 100 and 109 will be printed before 11.

Input Format
Enter a number N.

Constraints
None

Output Format
Display all the numbers upto N in a lexicographical order

Sample Input
10
Sample Output
0 1 10 2 3 4 5 6 7 8 9
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> lexicalOrder(int n)
{
    string a[n];
    for (int i = 1; i <= n; i++)
        a[i - 1] = to_string(i);
    sort(a, a + n);
    vector<int> ans;
    for (int i = 1; i <= n; i++)
        ans.push_back(stoi(a[i - 1]));
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> ans = lexicalOrder(n);
    cout << "0 ";
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    return 0;
}