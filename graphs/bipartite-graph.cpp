#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define se(a) a.begin(),a.end()
vvi adj;
vector<bool> vis;
vi col;
bool bipart;
void color(int u,int curr){
    if(col[u]!=-1 and col[u]!=curr){
        bipart=false;
        return;
    }
    col[u]=curr;
    if(vis[u]) return;
    vis[u]=true;
    for(auto it : adj[u]){
        color(it,curr xor 1);
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    bipart=false;
    cin>>n>>m;
    adj=vvi(n);
    col=vi(n-1);
    vis=vector<bool>(n,false);
    f(i,0,m){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    f(i,0,n){
        if(!vis[i]){
            color(i,0);
        }
    }
    if(bipart)
        cout<<"Bipartite\n";
    else
        cout<<"Not Bipartite\n";
    return 0;
}
