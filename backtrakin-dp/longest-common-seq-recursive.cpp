#include<bits/stdc++.h>
using namespace std;
#define f(i,a,n) for(int i=a;i<n;i++)
#define ll long long int
#define vi vector<int>
#define pb push_back
int lcs(string x,string y ,int n,int m ){
    if(n==0 || m==0){
        return 0;
    }
    if(x[n-1]==y[m-1]){
        return 1+lcs(x,y,n-1,m-1);
    }
    else{
        return max(lcs(x,y,n,m-1),lcs(x,y,n-1,m));
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int n = s1.length(), m = s2.length();
    cout<<lcs(s1,s2,n,m);
    return 0;
}