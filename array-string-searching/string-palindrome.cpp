#include<bits/stdc++.h>
using namespace std;
int isPlaindrome(char s[])
{
    // Your code goes here
    int f=0,ans=0;
    int l = 0;
    int h = strlen(s) - 1;
    while (h > l)
    {
        if (s[l++] != s[h--])
        {
            f++;
            break;
        }
    }
    if(f==0)
        ans=1;
    else
        ans=0;
    return ans;
}
int main()
{
    char s[1000];
    cin>>s;
    printf("%d",isPlaindrome(s));
    return 0;
}