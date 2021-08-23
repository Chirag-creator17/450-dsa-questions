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
vi pre,pst;
void dfs(int node){
    vis[node]=1;
    pre.pb(node); //preorder
    vi ::iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++){
        if(!vis[*it]){
            dfs(*it);
        }
    }
    pst.pb(node); //postorder
}

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
    dfs(1);
    cout<<"preorder : ";
    for(auto it : pre)
        cout<<it<<" ";
    cout<<"\npostorder : ";
    for(auto itr : pst)
        cout<<itr<<" ";
    return 0;
}
// 7 7
// 1 2
// 1 3
// 2 4
// 2 5
// 2 6
// 2 7
// 7 3