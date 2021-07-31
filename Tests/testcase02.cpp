#include <bits/stdc++.h>
using namespace std;
#include "Graph_directed.hpp"

int main()
{
    //n->nodes
    //e->edges
    int n, e;
    cin >> n >> e;
    DirectedGraph g1(n);

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        g1.addEdge(u, v);
    }

    vector<int> dfs = g1.depthFirstTraversal(0);

    for (int i = 0; i < dfs.size(); i++)
    {
        cout << dfs[i] << " ";
    }
    cout << endl;

    cout << g1.isCyclic() << endl;
}