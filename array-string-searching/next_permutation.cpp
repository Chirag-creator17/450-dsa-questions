#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> &v)
{
    int n = v.size(), i;
    for (i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
            break;
    }
    if (i < 0)
        reverse(v.begin(), v.end());
    else
    {
        int j;
        for (j = n - 1; j > i; j--)
        {
            if (v[j] > v[i])
                break;
        }
        swap(v[j], v[i]);
        reverse(v.begin() + i + 1, v.end());
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        v.push_back(c);
    }
    nextPermutation(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}