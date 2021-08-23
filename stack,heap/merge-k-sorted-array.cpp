#include <bits/stdc++.h>
using namespace std;
vector<int> mergeKArrays(vector<vector<int>> arr, int k)
{
    vector<int> v;
    priority_queue<int, vector<int>, greater<int>> p;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            p.push(arr[i][j]);
        }
    }
    while (!p.empty())
    {
        v.push_back(p.top());
        p.pop();
    }
    return v;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}