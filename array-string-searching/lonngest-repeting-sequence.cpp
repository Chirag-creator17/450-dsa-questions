#include <bits/stdc++.h>
using namespace std;
int LongestRepeatingSubsequence(string str)
{
    int n = str.size();
    int sp[n + 1][n + 1];
    memset(sp, 0, sizeof(sp));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (str[i - 1] == str[j - 1] && i != j)
                sp[i][j] = 1 + sp[i - 1][j - 1];
            else
                sp[i][j] = max(sp[i - 1][j], sp[i][j - 1]);
        }
    }
    return sp[n][n];
}
int main()
{
    string s;
    cin >> s;
    cout<<LongestRepeatingSubsequence(s);
    return 0;
}