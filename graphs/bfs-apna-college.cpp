#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define pb push_back
#define se(a) a.begin(),a.end()
const int N=1e5+2;
bool vis[N];
vi adj[N];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    f(i,0,N)
        vis[i]=0;
    int n,m;
    cin>>n>>m;
    f(i,0,m)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    queue<int> q;
    q.push(1);
    vis[1]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<endl;
        vi :: iterator it;
        for(it=adj[node].begin();it!=adj[node].end();it++)
        {
            if(!vis[*it]){
                vis[*it]=true;
                q.push(*it);
            }
        }
    }

    return 0;
}
