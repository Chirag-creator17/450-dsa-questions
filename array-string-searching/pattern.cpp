#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j = 0, i = 1;
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        if (k % 2 != 0)
        {
            int m = i;
            for (; i < m + 5; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            j=i+4;
        }
        else
        {
            int m=j;
            for(;j>m-5;j--)
            {
                cout<<j<<" ";
            }
            cout<<endl;
            i=j+6;
        }
    }
    return 0;
}
