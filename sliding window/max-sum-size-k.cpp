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
    int i=0,j=0,s=0,mx=-1;
    while(j<n){
        s=s+a[j];
        if(j-i+1<k)
            j++;
        else if(j-i+1==k){
            mx=max(mx,s);
            s=s-a[j];
            i++;j++;
        }
    }
    cout<<mx;
    return 0;
}
