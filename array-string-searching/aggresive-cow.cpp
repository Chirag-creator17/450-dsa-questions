#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vector<ll> a;
        for (int i = 0; i < n; i++){
            int v;
            cin>>v;
            a.push_back(v);
        }
        sort(a.begin(),a.end());
        ll i = 1, j = a.size(), ans = 0, l = 0;
        while (i <= j)
        {
            ll mid = ((j + i) / 2);
            int fi = a[0], temp = 1;
            for (int k = 1; k < n; k++)
            {
                if (a[k] - fi >= mid)
                    temp++, fi = a[k];
            }
            if (temp < c)
                j = mid - 1;
            else
            {
                ans = mid;
                i = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}