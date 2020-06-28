# Results
## Adjacency lists
```
Adjacency list of vertex 0 head->1
Adjacency list of vertex 1 head->0
Adjacency list of vertex 2 head
Adjacency list of vertex 3 head
Adjacency list of vertex 4 head
-----------------
Adjacency list of vertex 0 head->1->4
Adjacency list of vertex 1 head->0
Adjacency list of vertex 2 head
Adjacency list of vertex 3 head
Adjacency list of vertex 4 head->0
-----------------
Adjacency list of vertex 0 head->1->4
Adjacency list of vertex 1 head->0->2
Adjacency list of vertex 2 head->1
Adjacency list of vertex 3 head
Adjacency list of vertex 4 head->0
-----------------
Adjacency list of vertex 0 head->1->4
Adjacency list of vertex 1 head->0->2->3
Adjacency list of vertex 2 head->1
Adjacency list of vertex 3 head->1
Adjacency list of vertex 4 head->0
-----------------
Adjacency list of vertex 0 head->1->4
Adjacency list of vertex 1 head->0->2->3->4
Adjacency list of vertex 2 head->1
Adjacency list of vertex 3 head->1
Adjacency list of vertex 4 head->0->1
-----------------
Adjacency list of vertex 0 head->1->4
Adjacency list of vertex 1 head->0->2->3->4
Adjacency list of vertex 2 head->1->3
Adjacency list of vertex 3 head->1->2
Adjacency list of vertex 4 head->0->1
-----------------
Adjacency list of vertex 0 head->1->4
Adjacency list of vertex 1 head->0->2->3->4
Adjacency list of vertex 2 head->1->3
Adjacency list of vertex 3 head->1->2->4
Adjacency list of vertex 4 head->0->1->3
```

## Adjacency Matrix
```
vertices pf Graph
['a', 'b', 'c', 'd', 'e', 'f']
Edges of Graph
[('a', 'c', 20), ('a', 'e', 10), ('b', 'c', 30), ('b', 'e', 40), ('c', 'a', 20), ('c', 'b', 30), ('d', 'e', 50), ('e', 'a', 10), ('e', 'b', 40), ('e', 'd', 50), ('e', 'f', 60), ('f', 'e', 60)]
Adjacency Matrix of Graph
[[-1, -1, 20, -1, 10, -1], [-1, -1, 30, -1, 40, -1], [20, 30, -1, -1, -1, -1], [-1, -1, -1, -1, 50, -1], [10, 40, -1, 50, -1, 60], [-1, -1, -1, -1, 60, -1]]


     a     b     c     d     e     f  
a   -1    -1    20    -1    10    -1  
b   -1    -1    30    -1    40    -1 
c   20    30    -1    -1    -1    -1 
d   -1    -1    -1    -1    50    -1
e   10    40    -1    50    -1    60
f   -1    -1    -1    10    60    -1   

```

# Reference
https://www.geeksforgeeks.org/graph-and-its-representations/  
https://ide.geeksforgeeks.org/9je5j6jJ13
