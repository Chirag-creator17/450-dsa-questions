#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    priority_queue<int, vector<int>, greater<int> > minh;
    for(int i=0;i<n;i++){
        minh.push(a[i]);
        if(minh.size()>k)
            minh.pop();
    }
    while(minh.size()>0){
        cout<<minh.top()<<endl;
        minh.pop();
    }
    return 0;
}