#include <bits/stdc++.h>
using namespace std;
#define f(i, a, n) for (int i = a; i < n; i++)
#define ll long long int
#define vi vector<int>
#define pb push_back
int LCSof3(string str1, string str2, string str3, int n1, int n2, int n3)
{
    int dp[n1 + 1][n2 + 1][n3 + 1];
    
    for(int i = 0; i <= n1; i++)
    {
        for(int j = 0; j <= n2; j++)
        {
            for(int k = 0; k <= n3; k++)
            {
                if(i == 0 || j == 0 || k == 0)
                {
                    dp[i][j][k] = 0;
                }
                else if(str1[i - 1] == str2[j - 1] and str2[j - 1] == str3[k - 1])
                {
                    dp[i][j][k] = 1 + dp[i - 1][j - 1][k - 1];
                }
                else
                {
                    dp[i][j][k] = max(dp[i - 1][j][k], max(dp[i][j - 1][k], dp[i][j][k - 1]));
                }
            }
        }
    }
    
    return dp[n1][n2][n3];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2,s3;
    cin >> s1;
    cin >> s2;
    cin>>s3;
    cout<<LCSof3(s1,s2,s3,s1.length(),s2.length(),s3.length());
    return 0;
}

