#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp.insert({a[i],i});
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        mp.insert({b[i],i});
    }
    int c=0;
    for (auto &itr : mp)
        c++;
    cout<<c<<endl;
    return 0;
}