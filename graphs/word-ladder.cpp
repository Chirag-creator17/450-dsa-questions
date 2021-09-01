#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define se(a) a.begin(), a.end()
int ladderLength(string beginWord, string endWord, vector<string> &wordList)
{
    unordered_set<string> s;
    for (string &a : wordList)
    {
        s.insert(a);
    }
    if (s.find(endWord) == s.end())
    {
        return 0;
    }
    queue<string> q;
    q.push(beginWord);
    int lvl = 1;
    while (!q.empty())
    {
        int sz = q.size();
        while (sz--)
        {
            string curr = q.front();
            if (curr.compare(endWord) == 0)
            {
                return lvl;
            }
            q.pop();
            for (int i = 0; i < curr.size(); ++i)
            {
                char c = curr[i];
                for (char k = 'a'; k <= 'z'; ++k)
                {
                    if (k == c)
                    {
                        continue;
                    }
                    curr[i] = k;
                    if (s.find(curr) != s.end())
                    {
                        q.push(curr);
                        s.erase(curr);
                    }
                }
                curr[i] = c;
            }
        }
        lvl++;
    }
    return 0;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}