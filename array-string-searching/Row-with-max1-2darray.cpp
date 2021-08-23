#include <bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    int ans = 0, r, idx = -1;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = m - 1; j >= 0; j--)
        {
            if (arr[i][j] == 1)
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if (c > ans)
        {
            ans = c;
            idx = i;
        }
    }
    return idx;
}
int main()
{

    return 0;
}