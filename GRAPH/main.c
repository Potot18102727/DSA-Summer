#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
 int Matrix[N][N] = {0};

   
    addEdge(Matrix, 0, 1); // A -> B
    addEdge(Matrix, 0, 2); // A -> C
    addEdge(Matrix, 0, 3); // A -> D
    addEdge(Matrix, 1, 0); // B -> A
    addEdge(Matrix, 1, 2); // B -> C
    addEdge(Matrix, 1, 3); // B -> D
    addEdge(Matrix, 1, 4); // B -> E
    addEdge(Matrix, 2, 0); // C -> A
    addEdge(Matrix, 2, 1); // C -> B
    addEdge(Matrix, 2, 3); // C -> D
    addEdge(Matrix, 3, 0); // D -> A
    addEdge(Matrix, 3, 1); // D -> B
    addEdge(Matrix, 3, 4); // D -> E
    addEdge(Matrix, 4, 1); // E -> B
    addEdge(Matrix, 4, 3); // E -> D


    printMatrix(Matrix);
    return 0;
}
