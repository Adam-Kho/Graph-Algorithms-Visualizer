# Adam Khoshnaw
Progress update: Implemented graph functions and plan for BFS. Possible idea, 
hard code some nodes for testing instead of adding nodes repeatedly during development. 

Overview:
C++ graph algorithms visualizer focusing on implementing and understanding fundamental
graph data structures and algorithms. The program allowe users to construct an undirected
graph through a trerminal based interface and perform Breadth-First Search (BFS) and 
Depth-First Search (DFS) traversals, displaying the traversal order.
This project emphasizes clean design, modularity, and algorithmic clarity rather than
graphical visualization.

Current Status:
* Graph data structure implemented using an adjacency list
* Menu driven terminal interface
* Users can add vertices, add edges, display graph, BFS + DFS traversal in terminal
* BFS implemented and tested, working as expected
* BFS and DFS fully implemented and tested
* Includes an automated graph generation option for efficient testing

Core Goals:
* Represent graphs in C++ using adjacency lists
* Implement algorithms (BFS, DFS)
* Dijkstra
* Seperate grpah structure from algorithm logic
* Maintain readable, modular and extensible code
* Git for structured version control

Project Structure:
* main.cpp -> handle user interaction and menu driven control flow
* graph.h/graph.cpp -> defines and implements the Graph using an adjacency list representation
* algorithms.h/algorithms.cpp -> Contains graph traversal algorithms (BFS and DFS), implemented
independently from the graph class

Graph Representation:
* Adjacency list using std::map<int, std::vector<int>>
* Undirected graphs
* Vertices represented as integers
* Safe access to neighbors through public graph interface
* Graph logic isolated from user input handling

Implemented Algorithms:
* Breadth-First Search
Queue based traversal
Tracks visited vertices to avoid revisits
Time complexity: O(V + E)
* Depth-First Search
Recursive implementation using a helper function
Tracks visited vertices
Time complexity: O(V + E)
* Future implementations
Dijkstra's shortest path algorithm
Cycle detection
Connected components

Input/Output:
* Interactive terminal menu for graph construction
* Option to automatically generate a test graph
* Displays
Adjacency list representation
BFS traversal order
DFS traversal order

Visualization:
* Terminal visualization (visited nodes, traversal order)
* Traversal order printed sequentially
* Designed for clarity and algorithm understanding

Testing Plan:
* Small graphs (~5 nodes)
* Medium graphs using automated generation
* Disconnected graph scenarios
* Validation of traversal correctness

Notes:
* Vertices are restricted to non-zero integers
* The graph backend is independent of user interaction
* Algorithms operate only through the graph's public interface
* Focused on correctness, clarity, and foundational understand
