#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vi vector<int>
#define pb push_back
#define se(a) a.begin(), a.end()
template <typename T>
class Graph
{

    map<T, list<T>> adjList;

public:
    void addEdge(T u, T v, bool bidir = true)
    {
        adjList[u].push_back(v);
        if (bidir)
        {
            adjList[v].push_back(u);
        }
    }
    bool isCyclicHelper(T node, map<T, bool> &visited, map<T, bool> &inStack)
    {

        visited[node] = true;
        inStack[node] = true;
        for (T neighbour : adjList[node])
        {
            if ((!visited[neighbour] && isCyclicHelper(neighbour, visited, inStack)) || inStack[neighbour])
            {
                return true;
            }
        }
        inStack[node] = false;
        return false;
    }

    bool isCyclic()
    {
        map<T, bool> visited;
        map<T, bool> inStack;
        for (auto i : adjList)
        {
            T node = i.first;
            if (!visited[node])
            {
                bool cyclePresent = isCyclicHelper(node, visited, inStack);
                if (cyclePresent)
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int32_t main()
{

    Graph<int> g;
    g.addEdge(0, 2, false);
    g.addEdge(0, 1, false);
    g.addEdge(2, 3, false);
    g.addEdge(2, 4, false);
    //g.addEdge(3,0,false);
    g.addEdge(4, 5, false);
    g.addEdge(1, 5, false);
    if (g.isCyclic())
    {
        cout << "Cycle Present !";
    }
    else
    {
        cout << "Cycle Not found!";
    }

    return 0;
}