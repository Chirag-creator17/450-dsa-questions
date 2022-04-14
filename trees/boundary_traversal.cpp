#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define se(a) a.begin(), a.end()
#define sa(a) accumulate(se(a), 0)
struct Node
{
    int data;
    Node *left, *right;
};
void solve(Node *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    if (!(root->left == NULL && root->right == NULL))
        ans.push_back(root->data);
    if (root->left)
        solve(root->left, ans);
    else if (root->right)
        solve(root->right, ans);
}
void solve1(Node *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    if (root->right)
        solve1(root->right, ans);
    else if (root->left)
        solve1(root->left, ans);
    if (!(root->left == NULL && root->right == NULL))
        ans.push_back(root->data);
}
void inoder(Node *root, vector<int> v)
{
    if (root == NULL)
        return;
    if (root->left)
        inoder(root->left, v);
    if (!root->left && !root->right)
        v.push_back(root->data);
    if (root->right)
        inoder(root->right, v);
}
vector<int> boundary(Node *root)
{
    vector<int> ans;
    solve(root, ans);
    inoder(root, ans);
    solve1(root, ans);
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
