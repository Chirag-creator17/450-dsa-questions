#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define se(a) a.begin(),a.end()
const int INF = 1e9;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> graph={{0,5,INF,10},
                                        {INF,0,3,INF},
                                        {INF,INF,0,1},
                                        {INF,INF,INF,0}};
    int n=graph.size();
    vvi dist=graph;
    f(k,0,n){
        f(i,0,n){
            f(j,0,n){
                if(dist[i][j]>dist[i][k]+dist[k][j]){
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
    f(i,0,n){
        f(j,0,n){
            if(dist[i][j]==INF)
                cout<<"INF"<<" ";
            else
                cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
