/*

*/

#include <iostream>
#include <string>
using namespace std;

int findPaths(int x, int y, int N1, int N2, string path)
{
    if (x == N1 - 1 && y == N2 - 1)
    {
        cout << path << " ";
        return 1;
    }
    int totalPaths = 0;

    if (x + 1 < N1)
    {
        totalPaths += findPaths(x + 1, y, N1, N2, path + "V");
    }
    if (y + 1 < N2)
    {
        totalPaths += findPaths(x, y + 1, N1, N2, path + "H");
    }
    if (x + 1 < N1 && y + 1 < N2)
    {
        totalPaths += findPaths(x + 1, y + 1, N1, N2, path + "D");
    }

    return totalPaths;
}

int main()
{
    int N1, N2;
    cin >> N1 >> N2;

    int totalPaths = findPaths(0, 0, N1, N2, "");
    cout << endl
         << totalPaths << endl;

    return 0;
}