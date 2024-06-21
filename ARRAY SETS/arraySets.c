#include <stdio.h>
#include <stdbool.h>

#include "arraySets.h"



void initializeSet(Set* set){
    set->size = 0;
}


bool isInSet(Set* set, int value){
    int i;
    for (i = 0; i < set->size; ++i){
        if (set->data[i] == value){
            return true;
        }
    }
    return false;
}


void addToSet(Set* set, int value){
    if (!isInSet(set, value) && set->size < MAX_SIZE){
        set->data[set->size++] = value;
    }
}


void deleteFromSet(Set* set, int value){
    int i, j;
    for (i = 0; i < set->size; ++i){
        if (set->data[i] == value){
            break;
        }
    }
    if (i < set->size) {
        for (j = i; j < set->size - 1; ++j){
            set->data[j] = set->data[j + 1];
        }
        set->size--;
        printf("%d is deleted from the set.\n", value);
    } else {
        printf("%d not found in the set.\n", value);
    }
}

Set unionSet(Set* set1, Set* set2){
    Set resultSet;
    initializeSet(&resultSet);
    int i, j;

    for ( i = 0; i < set1->size; ++i){
        addToSet(&resultSet, set1->data[i]);
    }
    for ( i = 0; i < set2->size; ++i){
        addToSet(&resultSet, set2->data[i]);
    }

    return resultSet;
}


Set intersectSet(Set* set1, Set* set2){
    Set resultSet;
    initializeSet(&resultSet);
    int i;

    for (i = 0; i < set1->size; ++i){
        if (isInSet(set2, set1->data[i])){
            addToSet(&resultSet, set1->data[i]);
        }
    }

    return resultSet;
}


void printSet(Set* set){
    int i,j,temp;
    
    for (i = 0; i < set->size - 1; ++i){
        for (j = 0; j < set->size - i - 1; ++j){
            if(set->data[j] > set->data[j + 1]){
                temp = set->data[j];
                set->data[j] = set->data[j + 1];
                set->data[j + 1] = temp;
            }
        }
    }
    printf("{ ");
    for (i = 0; i < set->size; ++i){
        printf("%d ", set->data[i]);
    }
    printf("}\n");
}
