#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define pb push_back
#define se(a) a.begin(),a.end()
class graph{
    int v;
    list<int> *l;
    public:
        graph(int v){
            this->v=v;
            l=new list<int>[v];
        }
        void addedge(int x,int y){
            l[x].pb(y);
            l[y].pb(x);
        }
        void print(){
            f(i,0,v){
                cout<<"vertex"<<i<<"->";
                for(int nbr:l[i]){
                    cout<<nbr<<",";
                }
                cout<<endl;
            }
            cout<<endl;
        }
};
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    graph g(4);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,2);
    g.addedge(2,3);
    g.print();
    return 0;
}

