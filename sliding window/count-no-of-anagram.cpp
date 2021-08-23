#include <bits/stdc++.h>
using namespace std;
#define f(i, a, n) for (int i = a; i < n; i++)
#define ll long long int
#define vi vector<int>
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string pat, txt;
    cin >> pat;
    cin >> txt;
    unordered_map<char, int > m;
    for (auto i : pat)
        m[i]++;
    int k = pat.size();
    int count = m.size();
    int ans = 0 ;
    int i = 0, j = 0;

    while (j < txt.size())
    {

        if (m.find(txt[j]) != m.end())
        {
            m[txt[j]]--;

            if (m[txt[j]] == 0)
                count--;
        }

        if (j - i + 1 < k)
            j++;

        else if (j - i + 1 == k)
        {
            if (count == 0)
                ans++;

            if (m.find(txt[i]) != m.end())
            {
                m[txt[i]]++;

                if (m[txt[i]] == 1)
                    count++;
            }

            i++;
            j++;
        }
    }
    cout << ans;
    return 0;
}
