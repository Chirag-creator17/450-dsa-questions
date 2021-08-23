#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ml[n],mr[n],s=0;
    ml[0]=a[0];
    mr[n-1]=a[n-1];
    for(int i=1;i<n;i++)
        ml[i]=max(ml[i-1],a[i]);
    for(int i=n-2;i>=0;i--)
        mr[i]=max(mr[i+1],a[i]);
    int w[n];
    for(int i=0;i<n;i++)
        w[i]=min(mr[i],ml[i])-a[i];
    for(int i=0;i<n;i++)
        s=s+w[i];
    cout<<s;
    return 0;
}
