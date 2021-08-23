#include <bits/stdc++.h>
using namespace std;
bool findPair(int a[], int sz, int n)
{
    sort(a, a + sz);
    int p = 0, q = 1;
    while (q < sz)
        if (a[q] - a[p] < n) 
            q++;
        else if (a[q] - a[p] > n) 
            p++;
        else
            return 1;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int d;
    cin>>d;
    cout<<findPair(a,n,d);
    return 0;
}