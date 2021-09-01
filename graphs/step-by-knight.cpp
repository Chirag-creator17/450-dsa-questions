#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define se(a) a.begin(), a.end()
bool isInside(int x, int y, int N)
{
    if (x >= 0 && x < N && y >= 0 && y < N)
        return true;
    return false;
}
int minStepToReachTarget(vector<int> &KnightPos, vector<int> &TargetPos, int N)
{
    // Code here
    int x1 = KnightPos[0];
    int y1 = KnightPos[1];
    int x2 = TargetPos[0];
    int y2 = TargetPos[1];
    int a[1001][1001];
    int i, j, x, y;
    if ((x1 == x2) && (y1 == y2))
    {
        return 0;
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            a[i][j] = 0;
        }
    }
    queue<pair<int, int>> q;
    q.push({x1 - 1, y1 - 1});
    while (q.empty() == false)
    {
        pair<int, int> p = q.front();
        q.pop();
        x = p.first;
        y = p.second;
        int dx[8] = {-1, -1, 1, 1, -2, -2, 2, 2};
        int dy[8] = {2, -2, -2, 2, 1, -1, 1, -1};
        for (i = 0; i < 8; i++)
        {
            int xdir = x + dx[i];
            int ydir = y + dy[i];
            if (isInside(xdir, ydir, N) && a[xdir][ydir] == 0)
            {
                a[xdir][ydir] = a[x][y] + 1;
                q.push({xdir, ydir});
            }
        }
    }
    return a[x2 - 1][y2 - 1];
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}