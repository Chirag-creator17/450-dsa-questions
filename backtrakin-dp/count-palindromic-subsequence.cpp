#include <bits/stdc++.h>
using namespace std;
#define f(i, a, n) for (int i = a; i < n; i++)
#define ll long long int
#define vi vector<int>
#define pb push_back
long long int countPS(string str)
{
    long long int n = str.length();
    long long int dp[n][n], i, j, g;
    long long int mod = 1000000007;
    for (g = 0; g < n; g++)
    {
        for (i = 0, j = g; j < n; i++, j++)
        {
            if (g == 0)
                dp[i][j] = 1;
            else if (g == 1)
                dp[i][j] = (str[i] == str[j]) ? 3 : 2;
            else
            {
                if (str[i] == str[j])
                    dp[i][j] = (dp[i + 1][j] + dp[i][j - 1] + 1) % mod;
                else
                {
                    long long a = (dp[i][j - 1] + dp[i + 1][j]) % mod;
                    long long b = dp[i + 1][j - 1];
                    dp[i][j] = ((a - b) % mod + mod) % mod;
                }
            }
        }
    }
    return dp[0][n - 1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    cout << countPS(s);
    return 0;
}