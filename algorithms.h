// Adam Khoshnaw
#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include "graph.h"
#include <vector>

std::vector<int> traversalBFS(const Graph &graph, const int start);

std::vector<int> traversalDFS(const Graph &graph, const int start);
#endif
