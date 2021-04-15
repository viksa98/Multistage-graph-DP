#include <iostream>
#include <vector>
#include "Graph.h"
#include "min_cost.h"
#include "max_profit.h"

#define MAX 1000
#define INF 0

int main() {

    Graph g(8);

    g.addEdge(0, 0, INF);
    g.addEdge(0, 1, 1);
    g.addEdge(0, 2, 2);
    g.addEdge(0, 3, 5);
    g.addEdge(0, 4, INF);
    g.addEdge(0, 5, INF);
    g.addEdge(0, 6, INF);
    g.addEdge(0, 7, INF);

    g.addEdge(1, 0, INF);
    g.addEdge(1, 1, INF);
    g.addEdge(1, 2, INF);
    g.addEdge(1, 3, INF);
    g.addEdge(1, 4, 4);
    g.addEdge(1, 5, 11);
    g.addEdge(1, 6, INF);
    g.addEdge(1, 7, INF);

    g.addEdge(2, 0, INF);
    g.addEdge(2, 1, INF);
    g.addEdge(2, 2, INF);
    g.addEdge(2, 3, INF);
    g.addEdge(2, 4, 9);
    g.addEdge(2, 5, 5);
    g.addEdge(2, 6, 16);
    g.addEdge(2, 7, INF);

    g.addEdge(3, 0, INF);
    g.addEdge(3, 1, INF);
    g.addEdge(3, 2, INF);
    g.addEdge(3, 3, INF);
    g.addEdge(3, 4, INF);
    g.addEdge(3, 5, INF);
    g.addEdge(3, 6, 2);
    g.addEdge(3, 7, INF);

    g.addEdge(4, 0, INF);
    g.addEdge(4, 1, INF);
    g.addEdge(4, 2, INF);
    g.addEdge(4, 3, INF);
    g.addEdge(4, 4, INF);
    g.addEdge(4, 5, INF);
    g.addEdge(4, 6, INF);
    g.addEdge(4, 7, 18);

    g.addEdge(5, 0, INF);
    g.addEdge(5, 1, INF);
    g.addEdge(5, 2, INF);
    g.addEdge(5, 3, INF);
    g.addEdge(5, 4, INF);
    g.addEdge(5, 5, INF);
    g.addEdge(5, 6, INF);
    g.addEdge(5, 7, 13);

    g.addEdge(6, 0, INF);
    g.addEdge(6, 1, INF);
    g.addEdge(6, 2, INF);
    g.addEdge(6, 3, INF);
    g.addEdge(6, 4, INF);
    g.addEdge(6, 5, INF);
    g.addEdge(6, 6, INF);
    g.addEdge(6, 7, 2);

    min_cost(g.getMatrix(), 8);
    max_profit(g.getMatrix(), 8);
}