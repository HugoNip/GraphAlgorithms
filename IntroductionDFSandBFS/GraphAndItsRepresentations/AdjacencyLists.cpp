// This is a simple representation of graph using STL

#include <bits/stdc++.h>

// A utility function to add an edge in an undirected graph.
void addEdge(std::vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(std::vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v) {
        std::cout << "Adjacency list of vertex "
                  << v << " head";
        for (auto x : adj[v])
            std::cout << "->" << x;
        printf("\n");
    }
}

int main() {
    int V = 5;
    std::vector<int> adj[V];
    addEdge(adj, 0, 1);
    // printGraph(adj, V);
    // std::cout << "-----------------" << std::endl;
    addEdge(adj, 0, 4);
    // printGraph(adj, V);
    // std::cout << "-----------------" << std::endl;
    addEdge(adj, 1, 2);
    // printGraph(adj, V);
    // std::cout << "-----------------" << std::endl;
    addEdge(adj, 1, 3);
    // printGraph(adj, V);
    // std::cout << "-----------------" << std::endl;
    addEdge(adj, 1, 4);
    // printGraph(adj, V);
    // std::cout << "-----------------" << std::endl;
    addEdge(adj, 2, 3);
    // printGraph(adj, V);
    // std::cout << "-----------------" << std::endl;
    addEdge(adj, 3, 4);
    printGraph(adj, V);

    return 0;
}
