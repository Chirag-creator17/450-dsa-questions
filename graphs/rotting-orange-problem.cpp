#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define se(a) a.begin(), a.end()
bool isSafe(int i, int j, vector<vector<int>> &grid)
{
    return i >= 0 && j >= 0 && i < grid.size() && j < grid[i].size() && grid[i][j] == 1;
}
int orangesRotting(vector<vector<int>> &grid)
{
    queue<vector<int>> q;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    int t = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == 2)
            {
                q.push({i, j, 0});
            }
        }
    }
    while (!q.empty())
    {
        auto node = q.front();
        q.pop();
        t = max(t, node[2]);
        for (int i = 0; i < 4; i++)
        {
            int x = node[0] + dx[i], y = node[1] + dy[i];
            if (isSafe(x, y, grid))
            {
                grid[x][y] = 2;
                q.push({x, y, node[2] + 1});
            }
        }
    }
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == 1)
            {
                return -1;
            }
        }
    }
    return t;
}

//faster approach

int orangesRotting(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        
        vector<int> offset={0,1,0,-1,0};
        int count=0;
        queue<pair<int,int>> q;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]==2)
                    q.push({i,j});
                else if(grid[i][j]==1)
                    count++;
            }
        }
        if(count==0)
            return 0;
        int currMin=0;
        while(!q.empty())
        {
            int l=q.size();
            for(int k=0;k<l;k++)
            {
                pair<int,int> v=q.front();
                int i=v.first;
                int j=v.second;
                q.pop();
                for(int m=0;m<4;m++)
                {
                    int x=i+offset[m];
                    int y=j+offset[m+1];
                    if(x<0 || y<0 ||x>=rows || y>=cols || grid[x][y]!=1)
                        continue;
                    grid[x][y]=2;
                    count--;
                    q.push({x,y});
                }
            }
            currMin++;
        }
        if(count!=0)
        {
            return -1;
        }
        return currMin-1;
        
    }
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}