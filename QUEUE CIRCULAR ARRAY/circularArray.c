#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "circularArray.h"
//typedef struct {
//    int data[MAX];
//    int front;
//    int rear;
//}circularQ;



void init(circularQ *c){
	c->front=-1;
	c->rear=-1;
}
bool isEmpty(circularQ q) {
    return (q.front == -1);
}

bool isFull(circularQ q) {
    return ((q.front == q.rear + 1) || (q.front == 0 && q.rear == MAX - 1));
}
void enqueue(circularQ *c, int elem){
	
	if(isFull(*c)){
		printf("FULL!");
	}
	if(isEmpty(*c)){
		c->front=0;
	}
	c->rear= (c->rear+1) % MAX;
	c->data[c->rear]=elem;
	}

void dequeue(circularQ *c){
	if((c->rear+1)%MAX != c->front){
		c->front= (c->front+1) % MAX;
	}
}

int Front(circularQ q){
    if (!isEmpty(q)) {
        return q.data[q.front];
    } else {
        printf("Queue is empty\n");
        return -1;
    }
}

int Rear(circularQ q){
    if (!isEmpty(q)) {
        return q.data[q.rear];
    } else {
        printf("Queue is empty\n");
        return -1;
    }
}
void display(circularQ q){
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    int i = q.front;
    while (i != q.rear) {
        printf("%d ", q.data[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", q.data[i]);
}
