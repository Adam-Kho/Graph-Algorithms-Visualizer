# Adam Khoshnaw
Progress update: Implementing graph basics and client interface.

Core Goals:
* Represent graphs in C++ (adjacency lists + optional matrices)
* Implement algorithms (BFS, DFS, Dijkstra)
* Provide visualization in some way
* Modular, maintainable code
* Git version control and porper commits

MINIMAL CORE IDEA VERSION
Goal: Represent a graph, BFS and DFS, print traversal order
Mini Checklist:
1. Create Graph class with adjacency list
2. Add edges for a small example graph
3. Implement BFS
4. Implement DFS
5. Test with 5 node graph
6. Commmit

Checklist:
1. Project Structure
- main.cpp
- graph.h
- graph.cpp
- algorithms.h
- algorithms.cpp
- README.md
2. Graph Representation
- Adjacency list (map<string, vector<pair<string, int>>>)
- Add edge function
- Get neighbors function
- POSSIBLE: adjacency matrix
3. Algorithms
- BFS, DFS, Dijkstra
- Detect cycles, connected components
4. Input/Output
- Read graph from a file or hard-coded example
- Print traversal order for BFS/DFS
- Print distances and path Dijkstra
5. Visualization
- Terminal visualization (queue/stack/visited nodes)
6. Testing
- Small graph (4-5 nodes)
- Medium graph (10-15 nodes)
- Weighteds and unweighted graphs
- Edge cases (disconnected nodes, cycles)

