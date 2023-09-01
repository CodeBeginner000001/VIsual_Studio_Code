/*
You are given an N*M grid. Each cell (i,j) in the grid is either blocked, or empty. The rat can move from a position towards left, right, up or down on the grid.
Initially rat is on the position (1,1). It wants to reach position (N,M) where it's cheese is waiting for. If a path exists-it is always unique. Find that path and help the rat reach its cheese.

Input Format
First line contains 2 integers N and M denoting the rows and columns in the grid.
Next N line contains M characters each. An 'X' in position (i,j) denotes that the cell is blocked and ans 'O' denotes that the cell is empty.

Constraints
1 <= N , M <= 10

Output Format
Print N lines, containing M integers each. A 1 at a position (i,j) denotes that the (i,j)th cell is covered in the path and a 0 denotes that the cell is not covered in the path.
If a path does not exits then print "NO PATH FOUND"

Sample Input
5 4
OXOO
OOOX
XOXO
XOOX
XXOO
Sample Output
1 0 0 0
1 1 0 0
0 1 0 0
0 1 1 0
0 0 1 1
*/

#include <iostream>
using namespace std;
int cnt = 0;
bool rat(char maze[][1000], int sol[][1000], int i, int j, int n, int m)
{
    if (i == n && j == m)
    {
        cnt++;
        sol[n][m] = 1;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
                cout << sol[i][j] << " ";

            cout << endl;
        }
        cout << endl;
        return true;
    }
    if (i > n || i < 0 || j > m || j < 0)
        return false;

    if (maze[i][j] == 'X')
        return false;

    if (cnt > 0)
        return false;

    sol[i][j] = 1;
    bool rtsuccess = 0;
    if (sol[i][j + 1] == 0)
        rtsuccess = rat(maze, sol, i, j + 1, n, m);

    bool dnsuccess = 0;
    if (sol[i + 1][j] == 0)
        dnsuccess = rat(maze, sol, i + 1, j, n, m);

    bool upsuccess = 0;
    if (sol[i - 1][j] == 0)
        upsuccess = rat(maze, sol, i - 1, j, n, m);

    bool ltsuccess = 0;
    if (sol[i][j - 1] == 0)
        ltsuccess = rat(maze, sol, i, j - 1, n, m);

    sol[i][j] = 0;
    if (rtsuccess || dnsuccess || upsuccess || ltsuccess)
        return true;

    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;
    char maze[1000][1000];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> maze[i][j];
    }
    int sol[1000][1000] = {0};
    bool ans = rat(maze, sol, 0, 0, n - 1, m - 1);
    if (!ans)
        cout << "NO PATH FOUND";

    return 0;
}