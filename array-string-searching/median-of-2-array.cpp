#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, m;
    cin >> n1 >> m;
    int a[n1], b[m];
    vector<int> v;
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        v.push_back(b[i]);
    }
    sort(v.begin(), v.end());
    int avg;
    int n = v.size();
    if (n % 2 == 0)
    {
        avg = v[(n / 2) - 1] + v[(n / 2)];
        avg = avg / 2;
        cout<<avg;
    }
    else
    {
        avg = v[((n + 1) / 2) - 1];
        cout<<avg;
    }
    return 0;
}