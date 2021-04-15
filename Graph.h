
#ifndef GRAPH_H
#define GRAPH_H


class Graph {

public:
    // Constructor
    Graph(int numVertices);

    // Add edges
    void addEdge(int i, int j, int value);

    // Remove edges
    void removeEdge(int i, int j);

    // Print the martix
    void toString();

    //Get adjacency matrix
    int** getMatrix();

    //Destructor
    ~Graph();


private:
    int** adjMatrix;
    int numVertices;
};

#endif //GRAPH_H
