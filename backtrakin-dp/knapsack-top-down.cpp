#include <iostream>
#include <cstring>
using namespace std;
int knapSack(int W, int wt[], int val[], int n)
{
    int i, j;
    int dp[n + 1][W + 1];
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (wt[i - 1] <= j)
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][W];
}
int main()
{
    int n = 5, w = 7;
    int wt[n] = {6,6,6,6,6}, val[n] = {5,4,3,2,1};
    int ans = knapSack(w, wt, val, n);
    cout << ans;
    return 0;
}
