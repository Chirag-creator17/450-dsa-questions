#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool found =false;
    sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
        int lo=i+1,hi=n-1;
        while(lo<hi)
        {
            int c=a[i]+a[lo]+a[hi];
            if(c==x)
                found=true;
            if(c<x)
                lo++;
            else 
                hi--;
        }
    }
    return 0;
}
