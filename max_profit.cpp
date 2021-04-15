
#include "max_profit.h"
#include <iostream>

const int MAX = 1000;

void max_profit(int** G, int N) {
    int profs[MAX];
    int next_index[MAX];
    profs[N - 1] = 0;
    next_index[N - 1] = -1;
    for (int i = N - 2; i >= 0; i--) {
        int max_prof = -1;
        int next_ind = i;
        for (int k = i + 1; k < N; k++) {
            if (G[i][k] != 0) {
                int prof = G[i][k] + profs[k];
                if (prof > max_prof) {
                    max_prof = prof;
                    next_ind = k;
                }
            }
        }
        profs[i] = max_prof;
        next_index[i] = next_ind;
    }
    int i = 0;
    std::cout << "Maximum profit path: ";
    while (i != -1) {
        std::cout << i << " ";
        i = next_index[i];
    }
    std::cout << "\nPath profit: " << profs[0] << std::endl;
}