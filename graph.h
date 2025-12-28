// Adam Khoshnaw
#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

class Graph {

    public:
        Graph() { }

        bool addVertex(int vertex);
        bool addEdge(int v1, int v2);
        void displayGraph() const;

        bool checkVertex(int vertex) const;
        const std::vector<int>& getNeighbors(int vertex) const;

    private:
        std::map<int, std::vector<int>> theGraph;

};

#endif
