#include<bits/stdc++.h>
using namespace std;
string removeConsecutiveCharacter(string S)
    {
        // code here.
        string ans;
        char curr = S[0];
        ans += curr;
        for (int i = 1; i < S.size(); i++) {
            if (curr != S[i]) {
                ans += S[i];
                curr = S[i];
            }
        }
        return ans;
    }
int main()
{
    string s;
    cin>>s;
    cout<<removeConsecutiveCharacter(s);
    return 0;
}