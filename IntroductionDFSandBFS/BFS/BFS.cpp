/**
 * Program to print BFS traversal from a given
 * source vertex. BFS (int s) traverses vertices
 * reachable from s
 */

#include <iostream>
#include <list>

// this class represents a directed graph using
// adjacency list representation

class Graph
{
    int V; // No. of vertices

    // Pointer to an array containing adjacency lists
    std::list<int> *adj;
public:
    Graph(int V); // constructor

    // function to add an edge to graph
    void addEdge(int v, int w);

    // prints BFS traversal from a given source s
    void BFS(int s);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new std::list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); // add w to v's list
}

void Graph::BFS(int s) {
    // Mark all vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; ++i) {
        visited[i] = false;
    }

    // create a queue for BFS
    std::list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    std::list<int>::iterator i;

    while (!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        std::cout << s << " ";
        queue.pop_front(); // Removes the first element in the list container

        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (i = adj[s].begin(); i != adj[s].end(); ++i) {
            if (!visited[*i]) {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

int main() {
    // create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    std::cout << "Following is Breadth First Traversal "
              << "(starting from vertex 2)" << std::endl;
    g.BFS(2);

    return 0;
}
