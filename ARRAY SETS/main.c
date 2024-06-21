#include <stdio.h>
#include <stdlib.h>

#include "arraySets.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    Set set1, set2, unionSetResult, intersectSetResult;
    
    // Initialize sets
    initializeSet(&set1);
    initializeSet(&set2);

    // Adding elements to set1
    addToSet(&set1, 1);
    addToSet(&set1, 2);
    addToSet(&set1, 3);

    // Adding elements to set2
    addToSet(&set2, 2);
    addToSet(&set2, 3);
    addToSet(&set2, 4);

    // Printing set1 and set2
    printf("Set 1: ");
    printSet(&set1);
    printf("Set 2: ");
    printSet(&set2);
    
    
    // Deleting element from set1
    deleteFromSet(&set2, 2);

    // Printing set1 after deletion
    printf("Set 2 after deletion: ");
    printSet(&set2);

    // Computing union and intersection
    unionSetResult = unionSet(&set1, &set2);
    intersectSetResult = intersectSet(&set1, &set2);

    // Printing union and intersection
    printf("Union of Set 1 and Set 2: ");
    printSet(&unionSetResult);
    printf("Intersection of Set 1 and Set 2: ");
    printSet(&intersectSetResult);

    return 0;
}
