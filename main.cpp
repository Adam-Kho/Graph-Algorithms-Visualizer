// Adam Khoshnaw
#include "graph.h"
#include "algorithms.h"

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

int main() {

    Graph objGraph;
    int choice = 0;
    int vertexNum = 0;
    int vertexOne = 0;
    int vertexTwo = 0;
    int startVertex = 0;

    std::cout << "Graph Algorithms Visualizer!\n" << std::endl;
    std::cout << "0) Exit program\n";
    std::cout << "1) Add vertex\n";
    std::cout << "2) Add edge\n";
    std::cout << "3) Display Graph\n";
    std::cout << "4) BFS Traversal\n";
    std::cout << "99) Automate Graph (for testing)\n";

    // menu interface
    do {
        // CHANGE TO FUNCTION FOR CLEANER MAIN
        /*std::cout << "0) Exit program\n";
        std::cout << "1) Add vertex\n";
        std::cout << "2) Add edge\n";
        std::cout << "3) Display Graph\n";
        */

        std::cout << "\nEnter choice: ";
        std::cin >> choice;
        std::cout << std::endl;

        switch(choice) {
            case (1):
            {
                std::cout << "Integer value: ";
                std::cin >> vertexNum;
                std::cout << "\n";
                if (objGraph.addVertex(vertexNum)) {
                    std::cout << "Vertex added\n";
                }
                else { // add validation
                    std::cout << "Invalid integer.\n";
                }

                break;
            }
            case (2):
            {
                std::cout << "Vertex 1: ";
                std::cin >> vertexOne;
                //std::cout << "\n";
                std::cout << "Vertex 2: ";
                std::cin >> vertexTwo;
                std::cout << "\n";

                if (objGraph.addEdge(vertexOne, vertexTwo)) {
                    std::cout << "Edge added\n";
                }
                else {
                    std::cout << "Invalid, could not add edge.\n";
                }

                break;
            }
            case (3):
            {
                objGraph.displayGraph();

                break;
            case (4):
                std::cout << "Start vertex: ";
                std::cin >> startVertex;

                if (!objGraph.checkVertex(startVertex)) {
                    std::cout << "Vertex does not exist.\n";
                    break;
                }
                std::vector<int> bfsOrder = traversalBFS(objGraph, startVertex);

                std::cout << "BFS Traversal Order: ";
                for (int v : bfsOrder)
                    std::cout << v << " ";
                std::cout << "\n";

                break;
            }
            case (99): // could create function instead for cleaner main
            {
                objGraph.addVertex(1);
                objGraph.addVertex(2);
                objGraph.addVertex(3);
                objGraph.addVertex(4);
                objGraph.addVertex(5);
                objGraph.addVertex(6);
                objGraph.addVertex(7);
                objGraph.addVertex(8);
                objGraph.addVertex(9);
                objGraph.addVertex(10);
                objGraph.addVertex(11);
                objGraph.addVertex(12);

                objGraph.addEdge(1, 2);
                objGraph.addEdge(1, 3);
                objGraph.addEdge(2, 4);
                objGraph.addEdge(3, 5);
                objGraph.addEdge(4, 5);
                objGraph.addEdge(5, 7);
                objGraph.addEdge(6, 7);
                objGraph.addEdge(7, 8);
                objGraph.addEdge(5, 8);
                objGraph.addEdge(8, 10);
                objGraph.addEdge(10, 9);
                objGraph.addEdge(9, 12);
                objGraph.addEdge(12, 11);

                std::cout << "Graph created.\n";

                break;
            }
        }
    } while (choice != 0);


    return 0;
}

