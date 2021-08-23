#include <bits/stdc++.h>
using namespace std;
string longestPalin(string s)
{
    int n = s.size();
    if (n <= 1)
    {
        return s;
    }
    int len, maxLen = 1;
    int l, r, start = 0;
    for (int i = 0; i < n; i++)
    {
        // odd length
        l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r])
        {
            l--;
            r++;
        }
        len = r - l - 1;
        if (len > maxLen)
        {
            maxLen = len;
            start = l + 1;
        }

        // even length
        l = i, r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r])
        {
            l--;
            r++;
        }
        len = r - l - 1;
        if (len > maxLen)
        {
            maxLen = len;
            start = l + 1;
        }
    }
    return s.substr(start, maxLen);
}
int main()
{
    string s, c;
    cin >> s;
    c = longestPalin(s);
    cout << c;
    return 0;
}

string longestPalindrome(string s)
{
    int mostleft = 0, mostright = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int current_left = i, current_right = i;

        while (current_right + 1 < s.length() && s[current_right + 1] == s[current_left])
            current_right++;
        i = current_right;

        while (current_left - 1 >= 0 && current_right + 1 < s.length() && s[current_left - 1] == s[current_right + 1])
        {
            current_right++;
            current_left--;
        }

        if (current_right - current_left + 1 > mostright - mostleft + 1)
        {
            mostleft = current_left;
            mostright = current_right;
        }
    }
    return s.substr(mostleft, mostright - mostleft + 1);
}