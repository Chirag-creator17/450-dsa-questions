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
    Node *left;
    Node *right;
};
vector<int> bottomView(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    map<int,int> m;
    while(!q.empty())
    {
        auto p = q.front();
        q.pop();
        Node *curr = p.first;
        int curr_level = p.second;
        m[curr_level] = curr->data;
        if(curr->left)
            q.push({curr->left,curr_level-1});
        if(curr->right)
            q.push({curr->right,curr_level+1});
    }
    for(auto it : m){
        ans.push_back(it.second);
    }
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}