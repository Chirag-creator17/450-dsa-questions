#include <bits/stdc++.h>
using namespace std;
void word_break(vector<string> &v, vector<string> &dict, string s, int idx, int n, string str)
{
    if (idx == n)
    {
        str.pop_back();
        v.push_back(str);
    }
    else
    {
        for (int k = idx; k < n; k++)
        {
            if (find(dict.begin(), dict.end(), s.substr(idx, k - idx + 1)) != dict.end())
            {
                string temp = s.substr(idx, k - idx + 1) + ' ';
                word_break(v, dict, s, k + 1, n, str + temp);
            }
        }
    }
    return;
}
vector<string> wordBreak(int n, vector<string> &dict, string s)
{
    vector<string> v;
    word_break(v, dict, s, 0, s.size(), "");
    return v;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}