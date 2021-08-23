#include <bits/stdc++.h>
using namespace std;
#define f(i, a, n) for (int i = a; i < n; i++)
#define ll long long int
#define vi vector<int>
#define pb push_back
int main()
{
    // subset 1 sum =(diff+sum[arr])/2
    int n, d, s, r = 0;
    cin >> n >> d;
    int a[n];
    f(i, 0, n)
    {
        cin >> a[i];
        r = r + a[i];
    }
    s = (d + r) / 2;
    int dp[n + 1][s + 1], k = 1;
    dp[0][0] = 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (i == 0 && j > 0)
                dp[i][j] = 0;
            if (j == 0 && i > 0)
            {
                if (a[i - 1] == 0)
                {
                    dp[i][j] = pow(2, k);
                    k++;
                }
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            if (a[i - 1] <= j)
                dp[i][j] = dp[i - 1][j - a[i - 1]] + dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[n][s];
    return 0;
}


//new approach

int findTargetSumWays(vector<int> &nums, int target)
{
    int n = nums.size();
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int new_target = (sum + target) / 2;
    //if sum is less than target or numerator of new_target is odd then there will be no ways hence we will return 0
    if (sum < target || (sum + target) % 2 != 0)
        return 0;

    vector<int> dp(new_target + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++)
        for (int j = new_target; j >= nums[i]; j--)
            dp[j] += dp[j - nums[i]];
    return dp[new_target];
}