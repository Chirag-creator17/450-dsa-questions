#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<char>> &board, int row, int col, int val)
{

    for (int k = 0; k < 9; ++k)
    {
        if (board[row][k] == val)
            return false;
        if (board[k][col] == val)
            return false;
        // 3. checking sub-grid of the board for value with the simple formula of calculating ROW && COL
        // Formula : ROW == (3 * (row / 3) + (k / 3))
        // Formula : COL == (3 * (col / 3) + (k % 3))
        if (board[3 * (row / 3) + k / 3][3 * (col / 3) + k % 3] == val)
            return false;
    }
    return true;
}

bool solve(vector<vector<char>> &board)
{

    for (int i = 0; i < board.size(); ++i)
    {
        for (int j = 0; j < board[0].size(); ++j)
        {
            if (board[i][j] == '.')
            {
                for (char val = '1'; val <= '9'; ++val)
                {
                    if (isSafe(board, i, j, val))
                    {
                        board[i][j] = val;

                        if (solve(board))
                            return true;
                        else
                            board[i][j] = '.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void solveSudoku(vector<vector<char>> &board)
{

    solve(board);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            v[i][j] = c;
        }
    }
    solveSudoku(v);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}