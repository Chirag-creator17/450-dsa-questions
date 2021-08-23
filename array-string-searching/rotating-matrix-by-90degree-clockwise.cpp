#include <bits/stdc++.h>
using namespace std;
#define n 3
void rotate(int a[n][n])
{
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = i; j < n - i - 1; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = temp;
        }
    }
}
void rotate(int a[n][n])
{
    for (int j = 0; j < n; j++)
    {
        for (int i = n - 1; i >= 0; i--)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
void rotate(int arr[n][n])
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n / 2; ++j)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][n - j - 1];
            arr[i][n - j - 1] = temp;
        }
    }
}
int main()
{

    return 0;
}