#include <bits/stdc++.h>
using namespace std;
int first(int arr[], int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            res = mid;
            high = mid - 1;
        }
    }
    return res;
}
int last(int arr[], int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            res = mid;
            low = mid + 1;
        }
    }
    return res;
}
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    printf("First Occurrence = %d\t",
           first(a, x, n));
    printf("\nLast Occurrence = %d\n",
           last(a, x, n));
    return 0;
}