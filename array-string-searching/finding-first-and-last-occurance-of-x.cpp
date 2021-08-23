#include <bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n, int x)
{
    // code here
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            v.push_back(i);
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == x)
        {
            v.push_back(i);
            break;
        }
    }
    if (v.size() == 0)
    {
        v.push_back(-1);
        v.push_back(-1);
    }
    return v;
}
int main()
{

    return 0;
}