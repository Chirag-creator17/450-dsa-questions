#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define pb push_back
#define se(a) a.begin(),a.end()
template<typename T>
class graph{
    map<T,list<T> > l;
    public:
        void addedge(int x,int y){
            l[x].pb(y);
            l[y].pb(x);
        }
        void bfs(T src){
            queue<T> q;
            map<T,int> vis;
            q.push(src);
            vis[src]=1;
            while(!q.empty()){
                T node=q.front();
                q.pop();
                cout<<node<<" ";
                for(int nbr : l[node]){
                    if(!vis[nbr]){
                        q.push(nbr);
                        vis[nbr]=1;
                    }
                }
            }
        }
};
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    graph<int> g;
    g.addedge(0,1);
    g.addedge(0,3);
    g.addedge(1,2);
    g.addedge(2,3);
    g.addedge(3,4);
    g.addedge(4,5);
    g.bfs(0);
    return 0;
}

