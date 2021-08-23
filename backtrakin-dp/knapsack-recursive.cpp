#include<iostream>
#include <cstring>
using namespace std;
int t[1001][1001];
int knapSack(int W, int wt[], int val[], int n) 
    { 
        if(n==0 || W==0)
            return 0;
        if(t[n][W]!=-1)
            return t[n][W];
        if (wt[n - 1] > W)
            return t[n][W]=knapSack(W, wt, val, n - 1);
        else
        {
            return t[n][W]=max(val[n - 1]+ knapSack(W - wt[n - 1],wt, val, n - 1),knapSack(W, wt, val, n - 1));
        }     
    }
int main()
{
    int n=3,w=4;
    memset(t,-1,sizeof(t));
    int wt[n]={4,5,1},val[n]={1,2,3};
    int ans=knapSack(w,wt,val,n);
    cout<<ans;
    return 0;
}
