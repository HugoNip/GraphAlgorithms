# Depth First Search or DFS for a Graph
## BFS vs DFS
Note that the *BFS* code traverses only the vertices reachable from a given source vertex. 
All the vertices may not be reachable from a given vertex (example Disconnected graph). 
To print **all the vertices**, we can modify the BFS function to do traversal starting 
from all nodes one by one (Like the DFS modified version).

# Results
## DFS.cpp
```
Following is Depth First Traversal (starting from vertex 2)
2 0 1 3 
```

## DFSCornerCase.cpp
```
Following is Depth First Traversal
0 1 2 3
```


# Reference
https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/
