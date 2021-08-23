#include <bits/stdc++.h>
using namespace std;
#define f(i, a, n) for (int i = a; i < n; i++)
#define ll long long int
#define vi vector<int>
#define pb push_back
int lcs(string x, string y, int n, int m)
{
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= m; j++){
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (x[i - 1] == y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }

    return dp[n][m];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int n = s1.length(), m = s2.length();
    cout << n+m-2*lcs(s1, s2, n, m);
    return 0;
}