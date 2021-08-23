#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define se(a) a.begin(),a.end()
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vi dis(n,INT_MAX);
    vector<vector<int>> edges;
    f(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        edges.pb({u,v,w});
    }
    int source;
    cin>>source;
    dis[source]=0;
    bool change = false;
    for(int i=0;i<n-1;i++){        
        for(auto e : edges){
            int u=e[0],v=e[1],w=e[2];
            if(dis[v]>dis[u]+w)
                change=true;            
            dis[v]=min(dis[v],dis[u]+w);
        }
    }
    for(auto it : dis){
        cout<<it<<" ";
    }
    return 0;
}
