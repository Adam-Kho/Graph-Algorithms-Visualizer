// Adam Khoshnaw
#include "graph.cpp"

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

    std::cout << "Graph Algorithms Visualizer!\n" << std::endl;

    // menu interface
    do {
        // CHANGE TO FUNCTION FOR CLEANER MAIN
        std::cout << "0) Exit program\n";
        std::cout << "1) Add vertex\n";
        std::cout << "2) Add edge\n";
        std::cout << "3) Display Graph\n";

        std::cout << "Enter choice: ";
        std::cin >> choice;
        std::cout << "\n";

        switch(choice) {
            case (1):
                std::cout << "Integer value: ";
                std::cin >> vertexNum;
                std::cout << "\n";
                objGraph.addVertex(vertexNum);

                break;
            case (2):
                std::cout << "Vertex 1: ";
                std::cin >> vertexOne;
                std::cout << "\n";
                std::cout << "Vertex 2: ";
                std::cin >> vertexTwo;
                std::cout << "\n";

                objGraph.addEdge(vertexOne, vertexTwo);

                break;
            case (3):
                objGraph.displayGraph();

                break;
        }
    } while (choice != 0);


    return 0;
}

