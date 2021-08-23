#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    priority_queue<int,vector<int>,greater<int>> minh;
    for(int i=0;i<n;i++){
        minh.push(a[i]);
    }
    int ans=0;
    while(minh.size()>=2){
        int l1,l2;
        l1=minh.top();
        minh.pop();
        l2=minh.top();
        minh.pop();
        ans+=l1+l2;
        minh.push(l1+l2);
    }
    cout<<ans;
    return 0;
}