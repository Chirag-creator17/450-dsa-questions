#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    priority_queue<pair<int, int>> maxh;
    for(auto &it : m)
    {
        maxh.push({it.second,it.first});
        // if(minh.size()>k)
        //     minh.pop();
    }
    while(maxh.size()>0){
        cout<<maxh.top().second<<" ";
        maxh.pop();
    }
    return 0;
}
