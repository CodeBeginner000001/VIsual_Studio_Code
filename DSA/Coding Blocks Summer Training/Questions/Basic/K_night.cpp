/*
Take as input N, the size of a chess board. We are asked to place N number of Knights in it, so that no knight can kill other.

a. Write a recursive function which returns the count of different distinct ways the knights can be placed across the board. Print the value returned.

b.Write a recursive function which prints all valid configurations (void is the return type for function).

Input Format
Enter the size of the chessboard N

Constraints
None

Output Format
Display the number of ways a knight can be placed and print all the possible arrangements in a space separated manner

Sample Input
2
Sample Output
{0-0} {0-1}  {0-0} {1-0}  {0-0} {1-1}  {0-1} {1-0}  {0-1} {1-1}  {1-0} {1-1}
6
*/
#include <iostream>
#include <vector>
#include <set>
using namespace std;

const int xInc[] = {-1, 1, -1, 1, -2, 2, -2, 2};
const int yInc[] = {-2, 2, 2, -2, -1, 1, 1, -1};
long long c = 0;
set<string> solutionSet;

bool isSafe(vector<vector<int>> &board, int x, int y, int n)
{
    for (int i = 0; i < 8; i++)
    {
        int x1 = x + xInc[i];
        int y1 = y + yInc[i];
        if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < n && board[x1][y1] == 1)
        {
            return false;
        }
    }
    return true;
}

void printSoln(vector<vector<int>> &board, int n)
{
    string s = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 1)
            {
                s += "{" + to_string(i) + "-" + to_string(j) + "} ";
            }
        }
    }
    solutionSet.insert(s);
}

void solve(vector<vector<int>> &board, int x, int y, int count, int n)
{
    if (board[x][y] == 0 && isSafe(board, x, y, n))
    {
        board[x][y] = 1;
        if (count == n - 1)
        {
            c++;
            printSoln(board, n);
            board[x][y] = 0;
            return;
        }
        for (int i = x; i < n; i++)
        {
            for (int j = y + 1; j < n; j++)
            {
                solve(board, i, j, count + 1, n);
            }
        }
        for (int i = x + 1; i < n; i++)
        {
            for (int j = 0; j <= y; j++)
            {
                solve(board, i, j, count + 1, n);
            }
        }
        board[x][y] = 0;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> board(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            solve(board, i, j, 0, n);
        }
    }
    for (const string &s : solutionSet)
    {
        cout << s << " ";
    }
    cout << "\n"
         << c << endl;
    return 0;
}