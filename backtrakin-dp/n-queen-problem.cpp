#include <bits/stdc++.h>
using namespace std;
bool isSafe(int **arr, int x, int y, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i][y] == 1)
            return false;
    }
    int row = x, col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
            return false;
        row--;
        col--;
    }
    row = x;
    col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
            return false;
        row--;
        col++;
    }
    return true;
}
bool nQueen(int **arr, int x, int n)
{
    if (x >= n)
        return true;
    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;
            if (nQueen(arr, x + 1, n))
                return true;
        }
        arr[x][col] = 0;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=0;
        }
    }
    cout << endl;
    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}