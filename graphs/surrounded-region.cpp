#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define se(a) a.begin(), a.end()
void change(vector<vector<char>> &A, int x, int y)
{
    A[x][y] = '*';
    int dy[] = {-1, 1, 0, 0};
    int dx[] = {0, 0, -1, 1};
    for (int i = 0; i < 4; i++)
    {
        int cx = x + dx[i];
        int cy = y + dy[i];
        if (cx >= 0 && cx < A.size() && cy >= 0 && cy < A[0].size() && A[cx][cy] == 'O')
        {
            change(A, cx, cy);
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<char>> A(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
            {
                if (A[i][j] == 'O')
                {
                    change(A, i, j);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] == 'O')
            {
                A[i][j] = 'X';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] == '*')
            {
                A[i][j] = 'O';
            }
        }
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }
    return 0;
}
