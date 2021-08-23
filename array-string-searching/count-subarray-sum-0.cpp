#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int findSubarray(int arr[], int n)
{
    ll sum = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp += arr[i];
        if (mp.find(temp) != mp.end())
        {
            sum += mp[temp];
            mp[temp]++;
        }
        else
        {
            mp[temp]++;
        }
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = findSubarray(a, n);
    cout << ans;
    return 0;
}