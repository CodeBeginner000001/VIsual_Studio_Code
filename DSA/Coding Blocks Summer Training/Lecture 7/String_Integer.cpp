/*String to Integer

Given a string str, design a
recursive algorithm to convert
it to an integer.*/

/*0- 9 = 48-57
  A- Z = 65-90
  a- z = 97-122
*/
#include <iostream>
using namespace std;
int stringtointeger(string s, int n)
{
    // base case
    if (s == "")
    {
        return 0;
    }
    // recursive case
    string substring = s.substr(0, n - 1);     // finding substring and storing it in substring
    int A = stringtointeger(substring, n - 1); // storing the recursive return in A and passing the substring till n-1
    return A * 10 + (s[n - 1] - '0');          // when we subtract two string in ascii value we get a integer value
}
int main()
{
    string s = "123456";
    int n = s.size();
    int x = stringtointeger(s, n);
    cout << x << endl;
    cout << x + 1 << endl;
}
