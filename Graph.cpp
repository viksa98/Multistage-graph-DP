
#include "Graph.h"
#include <iostream>

Graph::Graph(int numVertices) {
    this->numVertices = numVertices;
    this->adjMatrix = new int* [numVertices];
    for (int i = 0; i < numVertices; i++) {
        this->adjMatrix[i] = new int[numVertices];
        for (int j = 0; j < numVertices; j++)
            this->adjMatrix[i][j] = 0;
    }
}

void Graph::addEdge(int i, int j, int value) {
    this->adjMatrix[i][j] = value;
    //this->adjMatrix[j][i] = value;
}

void Graph::removeEdge(int i, int j) {
    this->adjMatrix[i][j] = 0;
    this->adjMatrix[j][i] = 0;
}

void Graph::toString() {
    for (int i = 0; i < numVertices; i++) {
        std::cout << i << " : ";
        for (int j = 0; j < this->numVertices; j++)
            std::cout << this->adjMatrix[i][j] << " ";
        std::cout << "\n";
    }
}

int** Graph::getMatrix() {
    return this->adjMatrix;
}

Graph::~Graph() {
    for (int i = 0; i < this->numVertices; i++)
        delete[] this->adjMatrix[i];
    delete[] this->adjMatrix;
}