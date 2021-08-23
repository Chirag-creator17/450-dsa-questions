#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
void multiply(int x)
{
    int carry = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        int prod = ans[i] * x + carry;
        ans[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry)
    {
        ans.push_back(carry % 10);
        carry = carry / 10;
    }
}

vector<int> factorial(int N)
{
    ans = {1};
    for (int i = 2; i <= N; i++)
        multiply(i);
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> g;

    g=factorial(n);
    for(int i=0;i<g.size();i++)
        cout<<g[i];
    return 0;
}