#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k1,k2;
    cin>>n>>k1>>k2;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    priority_queue<int> maxh1,maxh2;
    for(int i=0;i<n;i++){
        maxh1.push(a[i]);
        maxh2.push(a[i]);
        if(maxh1.size()>k1)
            maxh1.pop();
        if(maxh2.size()>k2)
            maxh2.pop();
    }
    int s1=maxh1.top();
    int s2=maxh2.top();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>s1 && a[i]<s2){
            sum=sum+a[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}