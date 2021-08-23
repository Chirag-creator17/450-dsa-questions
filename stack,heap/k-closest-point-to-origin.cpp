#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    int a[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    priority_queue<pair<int, pair<int, int>>> maxh;
    for (int i = 0; i < n; i++)
    {
        maxh.push({pow(a[i][0], 2) + pow(a[i][1], 2), {a[i][0], a[i][1]}});
        if (maxh.size() > k)
            maxh.pop();
    }
    while (!maxh.empty())
    {
        pair<int, int> p = maxh.top().second;
        cout<<p.first<<" "<<p.second<<endl;
        maxh.pop();
    }
    return 0;
}
