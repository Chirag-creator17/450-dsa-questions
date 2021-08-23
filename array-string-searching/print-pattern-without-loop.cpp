#include <bits/stdc++.h>
using namespace std;
int c = 0;
void seq(int n, int a)
{
    if (n <= a)
    {
        cout << n << " ";
        if (n >= 0 && c == 0)
            return seq(n - 5, a);
        else if (n < 0 || c == 1)
        {
            c = 1;
            return seq(n + 5, a);
        }
    }
    else
        return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    seq(n, n);
    return 0;
}