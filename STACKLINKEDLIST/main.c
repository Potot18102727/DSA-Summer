#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackll.h"

int main() {
    StackLinkedList s = createStack();

    stack_push(&s, 10);
    stack_push(&s, 25);
    stack_push(&s, 30);
    stack_push(&s, 45);
    stack_push(&s, 50);
    display(s);
    visualize(s);

    printf("Top element: %d\n\n", stack_peek(s));

    stack_pop(&s);
    stack_pop(&s);
    display(s);
    visualize(s);
    printf("Top element: %d\n\n", stack_peek(s));

    StackLinkedList even = getEven(&s);
    printf("Even elements in a new stack: ");
    display(even);
    visualize(even);


    return 0;
}
