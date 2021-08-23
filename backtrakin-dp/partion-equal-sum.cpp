#include <bits/stdc++.h>
using namespace std;
#define f(i, a, n) for (int i = a; i <= n; i++)
#define ll long long int
#define vi vector<int>
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s;
    cin >> n >> s;
    int a[n];
    f(i, 0, n)
            cin >>a[i];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    if (s % 2 != 0)
    {
        cout<<0;
        exit(0);
    }
    else
    {
        s /= 2;
        bool t[n + 1][s + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (i == 0)
                    t[i][j] = false;
                if (j == 0)
                    t[i][j] = true;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= s; j++)
            {
                if (a[i - 1] <= j)
                    t[i][j] = t[i - 1][j - a[i - 1]] || t[i - 1][j];
                else
                    t[i][j] = t[i - 1][j];
            }
        }
        t[n][s] ? cout << "YES" : cout << "NO";
    }
    return 0;
}
