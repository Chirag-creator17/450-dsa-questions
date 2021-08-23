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
    vvi adjm(n+1,vi(n+1,0));
    f(i,0,m){
        int x,y;
        cin>>x>>y;
        // adjm[x][y]=1;
        // adjm[y][x]=1;
        adjm[x].pb(y);
        adjm[y].pb(x);

    }
    // cout<<"adjency\n";
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<adjm[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<endl;
    f(i,1,n+1){
        cout<<i<<"->";
        for(auto it : adjm[i]){
            if(it!=0)
                cout<<it<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}
