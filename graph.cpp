// Adam Khoshnaw
#include "graph.h"

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

bool Graph::addVertex(int vertex) {
    if (vertex == 0) { // cant be zero
        return false;
    }
    else if (theGraph.find(vertex) != theGraph.end()) { // exists ?
        return false;
    }
    theGraph[vertex] = { };
    return true;
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

bool Graph::checkVertex(int vertex) const { // can prolong
    return theGraph.find(vertex) != theGraph.end();
}

const std::vector<int>& Graph::getNeighbors(int vertex) const {
    return theGraph.at(vertex); // .at assumes vertex exists
}

void Graph::displayGraph() const {
    //if (theGraph.empty()) { // 
        // for (declaration : range)
        for (const auto& element : theGraph) {
            std::cout << element.first << " : ";
            for (const auto& currentEdge : element.second) {
                std::cout << currentEdge << " ";
            }
            std::cout << "\n";
        }
}


