#include<bits/stdc++.h>
using namespace std;
void rotate(int a[],int n)
{
    int c=a[n-1],b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        a[i+1]=b[i];
    }
    a[0]=c;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rotate(a,n);;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}