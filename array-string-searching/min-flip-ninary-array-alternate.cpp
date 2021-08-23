#include <bits/stdc++.h>
int minFlips(string S)
{
    // your code here
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (S[i] != '1')
                cnt1++;
        }

        else
        {
            if (S[i] != '0')
                cnt1++;
        }
    }
    for (int i = 0; i < S.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (S[i] != '0')
                cnt2++;
        }

        else
        {
            if (S[i] != '1')
                cnt2++;
        }
    }
    return min(cnt1, cnt2);
}
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<minFlips(s);
    return 0;
}


char flip(char ch)
{
    return (ch == '0') ? '1' : '0';
}
int getFlipWithStartingCharcter(string str,
                                char expected)
{
    int flipCount = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != expected)
            flipCount++;
        expected = flip(expected);
    }
    return flipCount;
}
int minFlipToMakeStringAlternate(string str)
{
    return min(getFlipWithStartingCharcter(str, '0'),
               getFlipWithStartingCharcter(str, '1'));
}
 