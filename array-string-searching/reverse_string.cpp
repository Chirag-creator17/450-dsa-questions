#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> c, s = {"h", "e", "l", "l", "o"};
    for (int i = s.size() - 1; i >= 0; i--)
    {
        c.push_back(s[i]);
    }
    s = c;
    for (int i = 0; i < s.size(); i++)
        cout << s[i] << " ";
    return 0;
}

// int start = 0, end = s.size() - 1;
// while (end > start)
// {
//     swap(s[start], s[end]);
//     start++;
//     end--;
// }