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
    vi dis(n+1,INT_MAX);
    vector<vector<pair<int,int>>> graph(n+1);
    f(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].pb({v,w});
        graph[v].pb({u,w});
    }
    int source;
    cin>>source;
    dis[source]=0;
    set<pair<int,int>> s;
    s.insert({0,source});
    while(!s.empty()){
        auto u=*s.begin();
        s.erase(u);
        for(auto it:graph[u.second]){
            if(dis[it.first]>dis[u.second]+it.second){
                s.erase({dis[it.first],it.first});
                dis[it.first]=dis[u.second]+it.second;
                s.insert({dis[it.first],it.first});
            }
        }
    }
    f(i,1,n+1){
        if(dis[i]<INT_MAX)
            cout<<dis[i]<<" ";
        else
            cout<<"-1 ";
    }
    return 0;
}
