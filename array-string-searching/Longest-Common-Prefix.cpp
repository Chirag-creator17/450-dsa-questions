#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    int n = strs.size();
    sort(strs.begin(), strs.end());
    string first_str = strs[0];
    string second_str = strs[n - 1];
    string ans;
    int i = 0;
    int j = 0;
    while (i < first_str.size() && j < second_str.size())
    {
        if (first_str[i] == second_str[j])
            ans.push_back(first_str[i]);
        else
            break;
        i++;
        j++;
    }

    if (ans.size() == 0)
        return "";
    else
        return ans;
}
int main()
{

    return 0;
}