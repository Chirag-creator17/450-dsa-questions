#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    unordered_map<char,int> m;
    for(int i=0;s[i]!='\0';i++)
    {
        m[s[i]]++;
    }
    unordered_map<char,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        if(it->second > 1)
            cout<<it->first<<"->"<<it->second<<endl;
    }
    return 0;
}
