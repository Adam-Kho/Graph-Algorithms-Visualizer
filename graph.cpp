// Adam Khoshnaw

#include "graph.h"

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

bool Graph::addVertex(int vertex) {
    if (vertex) {
        theGraph[vertex] = { };
        return true;
    }
}

bool Graph::addEdge(int v1, int v2) {
    // !theGraph.count(v1) || !theGraph.count(v2)
    if (theGraph.find(v1) == theGraph.end() || 
        theGraph.find(v2) == theGraph.end()) {
        return false;
    }
    else {
        theGraph[v1].push_back(v2);
        theGraph[v2].push_back(v1);
        return true;
    }
}

void Graph::displayGraph() {
    if (theGraph.empty()) { // 
        // for (declaration : range)
        for (const auto& element : theGraph) {
            std::cout << element.first << " : ";
            for (const auto& currentEdge : element.second) {
                std::cout << currentEdge << " ";
            }
            std::cout << "\n";
        }
    }
    else {
        std::cout << "Graph is empty." << "\n";
    }
}


