#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Queue q;
	
		
	init(&q);
	printf("----ENQUEUE----\n");
	enqueue(&q, 3);
	enqueue(&q, 50);
	enqueue(&q, 9);
	enqueue(&q, 67);
	display(q);
	printf("\n\nFront: %d\nREAR: %d ", front(q), rear(q));
	printf("\n\n----DEQUEUE----\n");
	dequeue(&q);
	display(q);
	front(q);
	rear(q);
	printf("\n\nFront: %d\nREAR: %d ", front(q), rear(q));
	return 0;
}
