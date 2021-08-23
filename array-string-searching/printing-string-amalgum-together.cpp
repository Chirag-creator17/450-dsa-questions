#include<bits/stdc++.h>
using namespace std;
vector<vector<string> > Anagrams(vector<string>& str) 
{
    // Your Code Here
    vector<vector<string>> ans;
    int n=str.size();

    if(n==0)
        return ans;

    unordered_map<string,vector<string>> m;

    for(auto i:str)
    {
        string s=i;
        sort(s.begin(),s.end());
        m[s].push_back(i);
    }

    for(auto i:m)
        ans.push_back(i.second);

    return ans;
}
int main()
{
    
    return 0;
}