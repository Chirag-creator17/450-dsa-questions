#include<bits/stdc++.h>
#define ll long long int;
using namespace std;
int main()
{
    string a,b,c;
    cin>>a;
    cin>>b;
   
    if(a.length()!=b.length())
        cout<<0;
    else 
    {
        c=a+a;
        int index = -1;
        index=c.find(b);
        if(index>=0)
            cout<<1;
        else 
            cout<<0;
    }
    return 0;
}