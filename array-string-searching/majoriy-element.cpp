#include <bits/stdc++.h>
using namespace std;
int majorityElement(int a[], int n)
{

    // your code here
    map<int, int> m;
    int ans = 0;
    for (int i = 0; i < n; i++)
        m[a[i]]++;
    for (auto it : m)
    {
        if (it.second > n / 2)
            ans = it.first;
    }
    if (ans == 0)
        return -1;
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout<<majorityElement(a,n);
    return 0;
}