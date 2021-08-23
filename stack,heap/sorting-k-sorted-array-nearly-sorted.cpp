#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int> > minh;
    for(int i=0;i<n;i++){
        minh.push(a[i]);
        if(minh.size()>k){
            ans.push_back(minh.top());
            minh.pop();
        }
    }
    while(minh.size()>0){
        ans.push_back(minh.top());
        minh.pop();
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}