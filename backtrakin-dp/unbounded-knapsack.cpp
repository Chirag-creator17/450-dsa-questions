#include <iostream>
#include <cstring>
using namespace std;
int UknapSack(int n, int w, int val[], int wt[])
{

    int t[n + 1][w + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < w + 1; j++)
        {
            if (wt[i - 1] <= j)
            {
                t[i][j] = max(val[i - 1] + t[i][j - wt[i - 1]], t[i - 1][j]);
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][w];
}
int main()
{
    int n = 2, w = 3;
    int val[n] = {1, 1}, wt[n] = {2, 1};
    int ans = UknapSack(n,w,val,wt);
    cout << ans;
    return 0;
}
