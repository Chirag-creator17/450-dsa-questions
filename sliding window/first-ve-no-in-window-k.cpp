#include <bits/stdc++.h>
using namespace std;
#define f(i, a, n) for (int i = a; i < n; i++)
#define ll long long int
#define vi vector<int>
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    f(i, 0, n)
    {
        cin >> a[i];
    }
    int i=0,j=0;
    vi ans;
    list<int> l;
    while (j < n)
    {
        if (a[j] < 0)
            l.push_back(a[j]);
        if (j - i + 1 < k)
            j++;
        else if ((j - i + 1) == k)
        {
            if (l.size() == 0)
                ans.push_back(0);
            else
                ans.push_back(l.front());
            if (a[i] < 0)
                l.pop_front();
            i++;
            j++;
        }
    }
    for (auto it : ans)
        cout << it << " ";
    return 0;
}
