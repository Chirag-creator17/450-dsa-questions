#include <bits/stdc++.h>
using namespace std;
int countRev(string s)
{
    stack<int> st;
    int l = s.length();
    if (l % 2)
        return -1;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '}' && !st.empty())
        {
            if (st.top() == '{')
                st.pop();
            else
                st.push(s[i]);
        }
        else
            st.push(s[i]);
    }
    int red_len = st.size();
    int n = 0;
    while (!st.empty() && st.top() == '{')
    {
        st.pop();
        n++;
    }
    return (red_len / 2 + n % 2);
}
int main()
{
    string d;
    cin>>d;
    cout<<countRev(d);
    return 0;
}