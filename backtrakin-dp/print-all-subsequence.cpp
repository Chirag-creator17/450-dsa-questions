#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define fa(i,a) for(auto i:a)
#define fi(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define vi vector<int>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int,int>
#define si set<int>
#define msi multiset<int>
#define sti stack<int>
#define qi queue<int>
#define dqi deque<int>
#define pqi priority_queue<int>
#define pminh priority_queue<int,vector<int>,greater<int>>
#define mii map<int,int>
#define mci map<char,int>
#define mvi map<int,vi>
#define mpi map<int,pii>
#define vvi vector<vector<int>>
#define vvs vector<vector<string>>
#define vpii vector<pii>
#define pb push_back
#define pf push_front
#define gi greater<int>()
#define lb(v,a) lower_bound(v.begin(),v.end(),a)-v.begin()
#define ub(v,a) upper_bound(v.begin(),v.end(),a)-v.begin()
#define bs(v,a) binary_search(v.begin(),v.end(),a)
#define maxe(a) a[max_element(se(a))-a.begin()]
#define mine(a) a[min_element(se(a))-a.begin()]
#define se(a) a.begin(),a.end()
#define sa(a) accumulate(se(a),0)
#define ss second
#define ff first
#define ln '\n'
#define line cout<<ln
#define pe(a) cout << a << ln
#define pa(a) fa(it, a) cout << it << " "; line
#define pyn(a) a?cout<<"YES":cout<<"NO"; line
vvi v;
void rec(int idx,vi &ds,vi a,int n){
    if(idx==n){
        v.pb(ds);
        return;
    }
    ds.pb(a[idx]);
    rec(idx+1,ds,a,n);
    ds.pop_back();
    rec(idx+1,ds,a,n);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vi a(n);
    fi(a, n);
    vi ds;
    rec(0,ds,a,n);
    fa(it,v){
        pa(it);
    }
    return 0;
}