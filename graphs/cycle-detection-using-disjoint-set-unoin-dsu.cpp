#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define se(a) a.begin(),a.end()
const int N = 1e5+6;
vi parent(N);
vi sz(N);
void make_set(int j) 
{ 
    parent[j] = j; 
    sz[j] = 1;
}
int find_set(int j) {
    if(j==parent[j]) return j;
    return parent[j] = find_set(parent[j]);
}
void union_set(int a, int b) {
    a=find_set(a);
    b=find_set(b);
    if(a!=b) {
        if(sz[a]>sz[b]) {
            swap(a,b);
        }
        parent[b] = a;
        sz[a]+=sz[b];
    }
}
int32_t main()
{
    f(i,0,N){
        make_set(i);
    }
    int n,m;
    cin>>n>>m;
    vvi edges(n);
    bool cycle=false;
    f(i,0,m){
        int a,b;
        cin>>a>>b;
        int x=find_set(a),y=find_set(b);
        if(x==y) {
            cycle=true;
        }
        else {
            union_set(a,b);
        }
    }
    cycle? cout<<"yes":cout<<"no";
    return 0;
}