// Adam Khoshnaw

#include "graph.h"
#include "algorithms.h"

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <set>

// O(V + E)
std::vector<int> traversalBFS(const Graph &graph, const int start) {
    std::queue<int> q;
    std::set<int> visited = { };
    std::vector<int> traversalOrder = { }; // returning this to main

    // mark visited when enqueued
    q.push(start);  // start vertex
    visited.insert(start);  // start vertex to visited set

    while (!q.empty()) { // FIFO next two lines
        int current = q.front();
        q.pop();

        traversalOrder.push_back(current); // node is visited
        
        for (int neighbor : graph.getNeighbors(current)) { // get all vertices connected to curr
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor); // mark visited
                q.push(neighbor); // add to queue to process later
            }
        }
    }
    return traversalOrder;
}

void traversalDFS(const Graph &graph, const int start);
