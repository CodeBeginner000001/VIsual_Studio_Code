/*
Take as input N, the size of a chess board. We are asked to place N number of queens in it, so that no queen can kill other.

a. Write a recursive function which returns the count of different distinct ways the queens can be placed across the board. Print the value returned.

b. Write a recursive function which prints all valid configurations (void is the return type for function).

Input Format
Enter the number N(Size of the chessboard)

Constraints
None

Output Format
Display the number of possible ways of arranging N queens and print all the possible arrangements in a space separated manner

Sample Input
4
Sample Output
{1-2} {2-4} {3-1} {4-3}  {1-3} {2-1} {3-4} {4-2}
2
*/
#include <iostream>
#include <vector>
int count = 0;

using namespace std;

void nQueens(int n, vector<int> &pos, int r)
{

    if (r == n)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (pos[i] == j)
                {
                    cout << "{" << i + 1 << "-" << j + 1 << "} ";
                }
            }
        }
        count++;
        return;
    }

    for (int j = 0; j <= n - 1; j++)
    {

        bool canPlace = true; // assume jth column of row 'r' is a valid option to place Qr

        for (int i = 0; i <= r - 1; i++)
        {

            if (pos[i] == j || pos[i] == j - (r - i) || pos[i] == j + (r - i))
            {
                canPlace = false;
                break;
            }
        }

        if (canPlace)
        {
            // jth option is valid option
            pos.push_back(j);
            nQueens(n, pos, r + 1);
            pos.pop_back(); // backtracking
        }
    }
}

int main()
{

    int n;
    cin >> n;

    vector<int> pos;

    nQueens(n, pos, 0);
    cout << endl;
    cout << count << endl;
    return 0;
}