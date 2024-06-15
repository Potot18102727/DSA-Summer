#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "StackArray.h"



int main(int argc, char *argv[]) {
    
    StackArrayList sList;
    
    initStack(&sList);
    
    stack_push(&sList, 20);
    stack_push(&sList, 32);
    stack_push(&sList, 40);
    stack_push(&sList, 53);
    stack_push(&sList, 51);
    
    display(sList);
    visualize(sList);
    printf("Top element: %d\n\n", stack_peek(sList));
    
    stack_pop(&sList);
    stack_pop(&sList);
    stack_pop(&sList);
    
    display(sList);
    visualize(sList);
    printf("Top element: %d\n\n", stack_peek(sList));
    
    StackArrayList evenStack = getEven(&sList);
    printf("Even elements in a new stack: ");
    display(sList);
    visualize(sList);
    printf("Top element: %d\n\n", stack_peek(sList));

    return 0;

}
