//find no of connected components in a graph and its size
// Time: O(V+E)
// Space: O(V)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define se(a) a.begin(), a.end()
int n, m;
vvi adj;
vi components;
vector<bool> vis;
int get_comp(int x)
{
    if (vis[x])
        return 0;
    vis[x] = true;
    int c = 1;
    for (auto i : adj[x])
    {
        if (!vis[i])
        {
            c += get_comp(i);
            vis[i] = true;
        }
    }
    return c;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    adj = vvi(n);
    vis = vector<bool>(n, 0);
    f(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    f(i, 0, n)
    {
        if (!vis[i])
        {
            components.pb(get_comp(i));
        }
    }
    for (auto i : components)
    {
        cout << i << " ";
    }
    return 0;
}
