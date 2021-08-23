#include <bits/stdc++.h>
using namespace std;
// string isSubset(int a1[], int a2[], int n, int m1)
// {
//     unordered_map<int, int> m;
//     for (int i = 0; i < n; i++)
//     {
//         m[a1[i]]++;
//     }
//     string ans = "Yes";
//     for (int i = 0; i < m1; i++)
//     {
//         if (m[a2[i]] > 0)
//             m[a2[i]]--;
//         else
//             ans = "No";
//     }
//     return ans;
// }
string isSubset(int arr1[], int arr2[], int n, int m)
{
    unordered_set<int> s;
    string ans;
    for (int i = 0; i < m; i++) {
        s.insert(arr1[i]);
    }
    int p = s.size();
    for (int i = 0; i < n; i++) {
        s.insert(arr2[i]);
    }
    if (s.size() == p) {
        ans="YES";
    }
    else
        ans="No";
    return ans;
}
int main()
{
    int n,m;
    cin >> n>>m;
    int arr1[n],arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cout<<isSubset(arr1,arr2,n,m);
    return 0;
}