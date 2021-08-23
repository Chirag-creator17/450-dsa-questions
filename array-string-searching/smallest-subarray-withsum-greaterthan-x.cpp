#include <bits/stdc++.h>
using namespace std;
int sb(int arr[], int n, int x)
{
    int sum = 0;
    int ans = INT_MAX;
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
            return 1;
        sum += arr[i];
        if (sum > x)
            ans = min(i - start + 1, ans);
        while (sum >= x)
        {
            sum -= arr[start];
            start++;
            if (sum > x)
                ans = min(i - start + 1, ans);
        }
    }
    return ans;
}
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << sb(a, n, x);
    return 0;
}
