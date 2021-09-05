#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define se(a) a.begin(), a.end()
int lps(string s)
{
    // Your code goes here
    int n = s.length();
    vector<int> lps(n, 0);

    int i = 0, j = 1;

    lps[0] = 0;

    while (j < n)
    {

        if (s[i] == s[j])
        {
            lps[j++] = i + 1;
            i++;
        }

        else
        {
            if (i != 0)
                i = lps[i - 1];

            else
                lps[j++] = 0;
        }
    }
    return lps[n - 1];
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}