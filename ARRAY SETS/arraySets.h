#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Structure to represent a set
typedef struct {
    int data[MAX_SIZE];
    int size;
} Set;

bool isInSet(Set* set, int value);
void addToSet(Set* set, int value);
void deleteFromSet(Set* set, int value);
Set unionSet(Set* set1,Set* set2);
Set intersectSet(Set* set1, Set* set2);
void printSet(Set* set);
