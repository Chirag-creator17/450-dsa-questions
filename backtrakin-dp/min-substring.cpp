#include <bits/stdc++.h>
using namespace std;

int solve(string y)
{
    // Write your code here
    string x = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n = x.size(), m = y.size();
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (x[i - 1] == y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    int i = n, j = m;
    string src = "";
    while (i > 0 && j > 0)
    {
        if (x[i - 1] == y[j - 1])
        {
            src += x[i - 1];
            i--, j--;
        }
        else if (dp[i][j - 1] > dp[i - 1][j])
        {
            src += y[j - 1];
            j--;
        }
        else
        {
            src += x[i - 1];
            i--;
        }
    }
    while (i > 0)
    {
        src += x[i - 1];
        i--;
    }
    while (j > 0)
    {
        src += y[j - 1];
        j--;
    }
    return src.size();
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    string S;
    cin >> S;

    int out_;
    out_ = solve(S);
    cout << out_;
}