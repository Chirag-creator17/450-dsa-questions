#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define pb push_back
#define se(a) a.begin(),a.end()
class graph{
    int v;
    unordered_map<string,list<pair<string,int>>> l;
    public:
        void addedge(string x, string y,bool bidir,int wt){
            l[x].pb({y,wt});
            if(bidir){
                l[y].pb({x,wt});
            }
        }
        void print(){
            for(auto p : l){
                string s = p.first;
                list<pair<string,int>> nbrs = p.second;
                cout<<s<<" -> ";
                for(auto nbr:nbrs){
                    string dest=nbr.first;
                    int dis=nbr.second;
                    cout<<dest<<" "<<dis<<",";
                }
                cout<<endl;
            }
        }
};
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    graph g;
    g.addedge("A","B",true,20);
    g.addedge("B","D",true,40);
    g.addedge("A","C",true,10);
    g.addedge("C","D",true,40);
    g.addedge("A","D",false,50);
    g.print();
    return 0;
}

