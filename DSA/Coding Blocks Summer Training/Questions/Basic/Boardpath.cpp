/*
Take as input N, a number. N is the size of a snakes and ladder board (without any snakes and ladders). Take as input M, a number. M is the number of faces of the dice.

a. Write a recursive function which returns the count of different ways the board can be traveled using the dice. Print the value returned.

b. Write a recursive function which prints dice-values for all valid paths across the board (void is the return type for function).

Input Format
Enter a number N (size of the board) and number M(number of the faces of a dice)

Constraints
M<=100
N<=100
M^N <=10^9

Output Format
Display the number of paths and print all the paths in a space separated manner

Sample Input
3
3
Sample Output
111 12 21 3
4
*/
#include <iostream>
#include <vector>
using namespace std;

vector<string> getBoardPath(int curr, int end, int M)
{
    if (curr == end)
    {
        vector<string> baseres;
        baseres.push_back("");
        return baseres;
    }
    vector<string> myres;
    for (int dice = 1; dice <= M && curr + dice <= end; dice++)
    {
        vector<string> rr = getBoardPath(curr + dice, end, M);

        for (string val : rr)
        {
            myres.push_back(to_string(dice) + val);
        }
    }
    return myres;
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<string> ans = getBoardPath(0, N, M);
    // cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    cout << ans.size() << endl;

    return 0;
}