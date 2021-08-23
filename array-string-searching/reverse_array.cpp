#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
    int l=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<l/2;i++)
    {
        int c;
        c=a[i];
        a[i]=a[l-1-i];
        a[l-i-1]=c;
    }
    for(int i=0;i<l;i++)
        cout<<a[i]<<" ";
    return 0;
}
