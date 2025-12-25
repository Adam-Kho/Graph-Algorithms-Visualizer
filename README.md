# Adam Khoshnaw
Progress update: Implemented graph functions and plan for BFS. Possible idea, 
hard code some nodes for testing instead of adding nodes repeatedly during development. 

Overview:
C++ graph algorithms visualizer focusing on implementing and understanding fundamental
graph data structures and algorithms. The program currently supports building an undirected 
graph through a terminal client interface and will be extended to include graph 
traversal algorithms and visualizations.

Current Status:
* Graph data structure implemented using an adjacency list
* Menu driven client interface, done
* Users can add vertices, add edges, and display graph in terminal

Core Goals:
* Represent graphs in C++ (adjacency lists + optional matrices)
* Implement algorithms (BFS, DFS, Dijkstra)
* Provide visualization of algorithm (terminal for now)
* Maintain modular, readable, and extensible code
* Git version control and proper commits

MINIMAL CORE IDEA VERSION
Goal: Represent a graph, BFS and DFS, print traversal order
Mini Checklist:
1. Create Graph class with adjacency list
2. Add vertices and edges
3. Implement BFS
4. Implement DFS
5. Test with 5 node graph
6. Commit stable version

Project Structure:
* main.cpp -> client interface
* graph.h -> graph class
* graph.cpp -> graph class implementation
* algorithms.h -> graph algorithms (not yet)
* algorithms.cpp -> algorithms implementation

Graph Representation:
* Adjacency list using std::map<int, std::vector<int>>
* Support for undirected graphs
* Functions to add vertices and edges
* Display adjacency list

Algorithms (not yet):
* Breadth-First Search
* Depth-First Search
* Dijkstra's shortest path algorithm
* Cycle detection (maybe)
* Connected components (maybe)

Input/Output:
* Graph construction through terminal menu
* Display adjacency list
* Print traversal order (BFS/DFS)
* Print distances and path for Dijkstra (not yet)

Visualization:
* Terminal visualization (visited nodes, traversal order)
* Possible future enhancements for step-by-step execution output

Testing Plan:
* Small graphs (~5 nodes)
* Medium graphs (~15 nodes)
* Weighted and unweighted graphs
* Edge cases: disconnected graphs, cycles

Personal Notes:
* Vertices are integers to keep data structure simple
* The graph backend avoids direct user interaction
* Printing and user interaction happens in client interface
* Learned and applied switch statements for menu control
