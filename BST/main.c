#include <stdio.h>
#include <stdlib.h>
#include "BST.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    NodePtr tree;
    initTree(&tree);
    int i;
    
    Product prods[] = {{"Gucci", 2.5, 10, {5, 7, 2024}},
                      {"Hermes", 999.99, 5, {15, 9, 2023}},
                      {"Katespade", 75.5, 10, {3, 7, 2024}},
                      {"Chanel", 12.99, 5, {12, 9, 2023}},
                      {"Prada", 18.99, 20, {12, 5, 2025}}
                      };
    
    for(i = 0; i < 5; i++){
        add(&tree, prods[i]);    
    }
    
    printf("-----BFS-----\n");
    BFS(tree);
    
    delete(&tree, "Gucci");
    
    printf("\n-----InOrder-----\n");
    inOrder(tree);
    
    
    printf("\n-----postOrder-----\n");
    postOrder(tree);
    
    printf("\n-----preOrder-----\n");
    preOrder(tree);

    
    return 0;
}
