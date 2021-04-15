
#include "min_cost.h"
#include <iostream>
const int MAX = 1000;

void min_cost(int** G, int N) {
    /*
      List to define shortest distance from each node
      to the goal node
    */
    int costs[MAX];
    /*
      List to define what is the next shortest path node
      to go from current node
    */
    int next_index[MAX];
    // distance from goal to goal is zero
    costs[N - 1] = 0;
    next_index[N - 1] = -1;
    for (int i = N - 2; i >= 0; i--) {
        int min_cost = 99999;
        int next_ind = i;
        for (int k = i + 1; k < N; k++) {
            if (G[i][k] != 0) {
                int cost = G[i][k] + costs[k];
                if (cost < min_cost) {
                    min_cost = cost;
                    next_ind = k;
                }
            }
        }
        costs[i] = min_cost;
        next_index[i] = next_ind;
    }
    int i = 0;
    std::cout << "Shortest path: ";
    while (i != -1) {
        std::cout << i << " ";
        i = next_index[i];
    }
    std::cout << "\nPath cost: " << costs[0] << std::endl;
}