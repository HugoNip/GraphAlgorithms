//
// Created by nipnie on 6/28/20.
//

// c++ program to print DFS traversal from
// a given vertex in a given graph
// The above code traverses only the vertices reachable
// from a given source vertex. All the vertices may not be reachable
// from a given vertex as in the case of a Disconnected graph.
// To do complete DFS traversal of such graphs,
// run DFS from all unvisited nodes after a DFS.

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
    void DFS();
};

Graph::Graph(int V) {
    this->V = V;
    adj = new std::list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); // add w to v's list
}

void Graph::DFSUtil(int v, bool visited[]) {
    // 0, [0 0 0 0]
    // 1, [1 0 0 0]
    // 2, [1 1 0 0]
    // 3, [1 1 1 0]

    // Mark the current node as visited and print it
    visited[v] = true;
    // [1 0 0 0]
    // [1 1 0 0]
    // [1 1 1 0]
    // [1 1 1 1]
    std::cout << v << " ";
    // 0
    // 1
    // 2
    // 3

    // Recur for all the vertices adjacent to this vertex
    std::list<int>::iterator i;
    // adj[0] = {1, 2}
    // adj[1] = {2}
    // adj[2] = {0, 3}
    // adj[3] = {3}
    for (i = adj[v].begin(); i != adj[v].end(); ++i) {
        if (!visited[*i])
            DFSUtil(*i, visited);
            // 1, [1 0 0 0], adj[0] = {1, 2}
            // 2, [1 1 0 0], adj[1] = {2}
            // 0, [1 1 1 0], adj[2] = {0, 3} stop
            // 3, [1 1 1 0], adj[2] = {0, 3}
            // 3, [1 1 1 1], adj[3] = {3} stop
    }
}

// DFS traversal of the vertices reahcable from v.
// It uses recursive DFSUtil()
void Graph::DFS() {
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; ++i)
        visited[i] = false;
        // [0 0 0 0]

    // call the recursive helper function to print DFS traversal
    // starting from all vertices **one by one**
    for (int i = 0; i < V; ++i) {
        if (visited[i] == false)
            // j = 0, [0 0 0 0]
            DFSUtil(i, visited);
            // 0, [0 0 0 0]
    }
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

    std::cout << "Following is Depth First Traversal" << std::endl;
    g.DFS();

    return 0;
}