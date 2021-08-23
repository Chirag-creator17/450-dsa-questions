#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int a[n], z = 0, o = 0, t = 0;
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            z++;
        if (a[i] == 1)
            o++;
        if (a[i] == 2)
            t++;
    }
    int i = 0, j = 0, k = n - 1;
    while (j <= k)
    {
        if (a[j] == 0)
            swap(a[i++], a[j++]);
        else if (a[j] == 1)
            j++;
        else
            swap(a[j], a[k--]);
    }
    // vector<long long int> v;
    // for (long long int i = 0; i < z; i++)
    //     v.push_back(0);
    // for (long long int i = 0; i < o; i++)
    //     v.push_back(1);
    // for (long long int i = 0; i < t; i++)
    //     v.push_back(2);
    // for (long long int i = 0; i < n; i++)
    //     a[i] = v[i];
    return 0;
}