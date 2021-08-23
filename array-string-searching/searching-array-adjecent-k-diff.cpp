#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int x, int k)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] == x)
            return i;
        i = i + max(1, abs(arr[i]-x)/k);
    }
 
    cout << "number is not present!";
    return -1;
}
int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int x ,k;
    cin>>x>>k;
    cout << "Element " << x  << " is present at index "
         << search(arr, n, x, k);
    return 0;
}