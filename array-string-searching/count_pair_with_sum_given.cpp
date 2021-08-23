#include<bits/stdc++.h>
using namespace std;
int count(int a[],int n,int k){
    int c=0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        if(m.find(k-a[i])!=m.end())
            c+=m[k-a[i]];
        m[a[i]]++;
    }
    return c;
}
int main()
{
    int n,k;
    cin >> n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<count(a,n,k);
    return 0;
}