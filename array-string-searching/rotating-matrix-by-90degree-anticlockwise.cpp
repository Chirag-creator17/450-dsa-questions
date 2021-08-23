#include <bits/stdc++.h>
using namespace std;
void rotateby90(vector<vector<int>> &a, int n)
{
    // code here
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            swap(a[i][j], a[j][i]);
    }
    for (int j = 0; j < n; j++)
    {
        int s = 0, e = n - 1;
        while (s < e)
        {
            swap(a[s][j], a[e][j]);
            s++;
            e--;
        }
    }
}
int main()
{

    return 0;
}