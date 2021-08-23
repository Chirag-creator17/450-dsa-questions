#include<bits/stdc++.h>
using namespace std;
#define f(i,a,n) for(int i=a;i<n;i++)
#define ll long long int
#define vi vector<int>
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,s;
    cin>>n>>s;
    int a[n];
    f(i,0,n){cin>>a[i];}
    int dp[n+1][s+1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < s + 1; j++)
        {
            if (i == 0 )
            {
                dp[i][j] = 0;
            }
            if(j==0){
                dp[i][j]=1;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < s + 1; j++)
        {
            if (a[i - 1] <= j)
            {
                dp[i][j] = dp[i][j - a[i - 1]] + dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout<<dp[n][s];
    return 0;
}
