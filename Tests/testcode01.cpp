#include <bits/stdc++.h>
using namespace std;
#include "Graph_undirected.hpp"

int main()
{
    //n->nodes
    //e->edges
    int n, e;
    cin >> n >> e;

    UndirectedGraph g2(n);

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        g2.addEdge(u, v);
    }

    vector<int> dfs = g2.depthFirstTraversal(0);

    for (int i = 0; i < dfs.size(); i++)
    {
        cout << dfs[i] << " ";
    }
    cout << endl;
    cout << g2.isCyclic() << endl;
}