#include<bits/stdc++.h>
using namespace std;
int FindMaxSum(int arr[], int n);
int main()
{
    
    return 0;
}
int FindMaxSum(int arr[], int n)
{
    int i = arr[0];
    int e = 0, en;
    for (int j = 1; j < n; j++)
    {
        en = (i > e) ? i : e;
        i = e + arr[j];
        e = en;
    }

    return ((i > e) ? i : e);
}