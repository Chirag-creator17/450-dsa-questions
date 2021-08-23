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
    priority_queue<int>q;
        q.push(a);
        q.push(b);
        q.push(c);
        int ans=0;
        while(q.size()>1)
        {
            int x=q.top();
            q.pop();
            int y=q.top();
            q.pop();
            ans++;
            x--;
            y--;
            if(x>0)
            {
                q.push(x);
            }
            if(y>0)
            {
                q.push(y);
            }
        }
        return ans;
    return 0;
}
