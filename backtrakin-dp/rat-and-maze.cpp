#include <bits/stdc++.h>
using namespace std;
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
        return true;
    return false;
}
bool ratMaze(int **arr, int x, int y, int n, int **solArr)
{
    if ((x == (n - 1)) && (y == (n - 1)))
    {
        solArr[x][y] = 1;
        return true;
    }
    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        if (ratMaze(arr, x + 1, y, n, solArr))
            return true;
        if (ratMaze(arr, x, y + 1, n, solArr))
            return true;
        solArr[x][y] = 0;
        return false;
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
            cin >> arr[i][j];
        }
    }
    int **solArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }
    cout << endl;
    if (ratMaze(arr, 0, 0, n, solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

// const int MAX = 100;
// class Solution
// {
// public:
    // void findPat(int i, int j, vector<vector<int>> m, int n, string s, vector<string> &res)
    // {
    //     if (i < 0 or j < 0 or i >= n or j >= n or m[i][j] == 0 or m[i][j] == 100)
    //     {
    //         return;
    //     }
    //     else if (i == n - 1 and j == n - 1)
    //     {
    //         res.push_back(s);
    //         return;
    //     }
    //     else
    //     {
    //         m[i][j] = 100;
    //         findPat(i + 1, j, m, n, s + 'D', res);
    //         findPat(i - 1, j, m, n, s + 'U', res);
    //         findPat(i, j + 1, m, n, s + 'R', res);
    //         findPat(i, j - 1, m, n, s + 'L', res);
    //         m[i][j] = 1;
    //     }
    // }

//     vector<string> findPath(vector<vector<int>> &m, int n)
//     {
//         // Your code goes here
        // vector<string> res;
        // findPat(0, 0, m, n, "", res);
        // sort(res.begin(), res.end());
        // return res;
//     }
// };
