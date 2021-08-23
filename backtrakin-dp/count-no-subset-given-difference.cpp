#include<bits/stdc++.h>
using namespace std;
#define f(i,a,n) for(int i=a;i<n;i++)
#define ll long long int
#define vi vector<int>
#define pb push_back
int main()
{
    // subset 1 sum =(diff+sum[arr])/2
    int n,d,s,r=0;
    cin>>n>>d;
    int a[n];
    f(i,0,n){
        cin>>a[i];
        r=r+a[i];
    }
    s=(d+r)/2;
    int dp[n + 1][s + 1]; 
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= s; j++) {
			if (i == 0)
				dp[i][j] = 0;
			if (j == 0)
				dp[i][j] = 1;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= s; j++) {
			if (a[i - 1] <= j)
				dp[i][j] = dp[i - 1][j - a[i - 1]] + dp[i - 1][j];
			else
				dp[i][j] = dp[i - 1][j];
		}
	}

    cout<<dp[n][s];
    return 0;
}