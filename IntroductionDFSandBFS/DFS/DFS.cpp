// c++ program to print DFS traversal from
// a given vertex in a given graph

#include <bits/stdc++.h>

// Graph class represents a directed graph
// using adjacency list representation
class Graph
{
    int V; // No. of vertices

    // Pointer to an array containing adjacency lists
    std::list<int> * adj;

    // A recursive function used by DFS
    void DFSUtil(int v, bool visited[]);

public:
    Graph(int V); // Constructor

    // function to add an edge to graph
    void addEdge(int v, int w);

    // DFS traversal of the vertices reachable from v
    void DFS(int v);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new std::list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); // add w to v's list
}

void Graph::DFSUtil(int v, bool visited[]) {
    // 2, [0 0 0 0]
    // 0, [0 0 1 0] adj[2] = {0, 3}
    // 1, [1 0 1 0] adj[0] = {1, 2}
    // 3, [1 1 1 0] adj[2] = {0, 3}

    // Mark the current node as visited and print it
    visited[v] = true;
    // [0 0 1 0]
    // [1 0 1 0]
    // [1 1 1 0]
    // [1 1 1 1]
    std::cout << v << " ";
    // 2
    // 0
    // 1
    // 3

    // Recur for all the vertices adjacent to this vertex
    // adj[2] = {0, 3}
    // adj[0] = {1, 2}
    // adj[1] = {2}
    // adj[3] = {3}
    std::list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i) {
        if (!visited[*i])
            DFSUtil(*i, visited);
            // 0, [0 0 1 0] adj[2] = {0, 3}
            // 1, [1 0 1 0] adj[0] = {1, 2}
            // 2, [1 1 1 0] adj[1] = {2} stop
            // 2, [1 1 1 0] adj[0] = {1, 2} stop
            // 3, [1 1 1 0] adj[2] = {0, 3}
            // 3, [1 1 1 1] adj[3] = {3} stop
    }
}

// DFS traversal of the vertices reahcable from v.
// It uses recursive DFSUtil()
void Graph::DFS(int v) { // 2
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; ++i)
        visited[i] = false; // [0 0 0 0 0]

    // call the recursive helper function to print DFS traversal
    DFSUtil(v, visited); // 2, [1 1 1 1]
}

int main() {
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    /**
     * adj[0] = {1, 2}
     * adj[1] = {2}
     * adj[2] = {0, 3}
     * adj[3] = {3}
     */

    std::cout << "Following is Depth First Traversal"
              << " (starting from vertex 2)" << std::endl;
    g.DFS(2);

    return 0;
}
