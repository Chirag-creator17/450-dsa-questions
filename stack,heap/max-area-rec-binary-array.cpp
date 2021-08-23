#include <bits/stdc++.h>
using namespace std;
int mah(vector<int> a)
{
    int n = a.size();
    stack<pair<int, int>> temp;
    vector<int> right;
    vector<int> left;
    for (int i = 0; i < n; i++)
    {
        if (temp.empty() == true)
        {
            right.push_back(-1);
        }
        else if (temp.top().first < a[i])
        {
            right.push_back(temp.top().second);
        }
        else if (temp.top().first >= a[i])
        {
            while (temp.empty() == false && temp.top().first >= a[i])
            {
                temp.pop();
            }
            if (temp.empty() == true)
            {
                right.push_back(-1);
            }
            else
            {
                right.push_back(temp.top().second);
            }
        }
        temp.push({a[i], i});
    }
    while (temp.empty() == false)
        temp.pop();

    for (int i = n - 1; i >= 0; i--)
    {
        if (temp.empty() == true)
        {
            left.push_back(n);
        }
        else if (temp.top().first < a[i])
        {
            left.push_back(temp.top().second);
        }
        else if (temp.top().first >= a[i])
        {
            while (temp.empty() == false && temp.top().first >= a[i])
            {
                temp.pop();
            }
            if (temp.empty() == true)
            {
                left.push_back(n);
            }
            else
            {
                left.push_back(temp.top().second);
            }
        }
        temp.push({a[i], i});
    }

    int res = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        right[i] = (left[n - i - 1] - right[i] - 1) * a[i];
        res = max(res, right[i]);
    }
    return res;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        v.push_back(arr[0][i]);
    }
    int mx = mah(v);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                v[j] = 0;
            }
            else
            {
                v[j] = v[j] + arr[i][j];
            }
        }
        mx = max(mx, mah(v));
    }
    cout << mx;
    return 0;
}