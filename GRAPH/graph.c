#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#define N 5

void addEdge(int Matrix[N][N], int from, int to) {
    Matrix[from][to] = 1;
}


void printMatrix(int Matrix[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }
}
