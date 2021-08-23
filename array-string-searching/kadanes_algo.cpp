#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n){
    int osum=a[0],csum=a[0];
    for(int i=1;i<n;i++)
    {
        if(csum>0)
            csum=csum+a[i];
        else
            csum=a[i];
        if(csum>osum)
            osum=csum;
    }
    return osum;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=kadane(a,n);
    cout<<ans;
    return 0;
}
