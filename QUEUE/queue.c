#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

//typedef struct node {
//	int data;
//	struct node* next;
//}Node, *NodePtr;
//
//typedef struct {
//	NodePtr front;
//	NodePtr rear;
//}Queue;

void init(Queue* q){
	q->front=NULL;
	q->rear=NULL;
}

void enqueue(Queue* q, int elem){
	NodePtr temp;
	
	temp= (NodePtr)malloc(sizeof(Node));
	if(temp!=NULL){
		temp->data=elem;
		temp->next=NULL;
		if(q->rear == NULL){
			q->front=temp;
		}else{
			q->rear->next=temp;
		}
		q->rear=temp;
	}
}

void dequeue(Queue* q){
	NodePtr temp;
	temp=q->front;
	
	if(temp!=NULL){
		q->front=temp->next;
		free(temp);
		if(q->front== NULL){
			q->rear=NULL;
		}
	}
}

int front(Queue q){
	if(q.front!=NULL){
		return q.front->data;
	}
	return -1;
}

int rear(Queue q){
	if(q.rear!=NULL){
		return q.rear->data;
	}
	return -1;
}

bool isEmpty(Queue q){
	return (q.front == NULL);
}

void display(Queue q){
	NodePtr trav;
	
	for(trav=q.front; trav != NULL; trav= trav->next){
		printf("%d ", trav->data);
	}
}



