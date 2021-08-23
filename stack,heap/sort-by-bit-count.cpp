#include <bits/stdc++.h>
using namespace std;
static bool cmp(int x, int y)
{
    int c1 = 0, c2 = 0;
    int a = x;
    int b = y;
    while (a)
    {
        a = a & (a - 1);
        c1++;
    }
    while (b)
    {
        b = b & (b - 1);
        c2++;
    }
    return c1 > c2;
}
void sortBySetBitCount(int arr[], int n)
{
    // Your code goes here
    stable_sort(arr, arr + n, cmp);
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sortBySetBitCount(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}