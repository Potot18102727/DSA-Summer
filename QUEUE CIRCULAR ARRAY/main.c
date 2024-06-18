#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "circularArray.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	circularQ q;
	
		
	init(&q);
	printf("----ENQUEUE----\n");
	enqueue(&q, 3);
	enqueue(&q, 50);
	enqueue(&q, 9);
	enqueue(&q, 67);
	display(q);
	printf("\nFront: %d\nRear: %d ", Front(q), Rear(q));
	printf("\n---------------");
	printf("\n\n----DEQUEUE----\n");
	dequeue(&q);
	display(q);
	printf("\nFront: %d\nRear: %d ", Front(q), Rear(q));
	printf("\n---------------");
	printf("\n\nIs the queue empty? %s\n", isEmpty(q) ? "Yes" : "No");
	return 0;
}
