#ifndef STACK_ARRAY
#define STACK_ARRAY


typedef struct node {
	int data;
	struct node* next;
}Node, *NodePtr;

typedef struct {
	NodePtr front;
	NodePtr rear;
}Queue;

void init(Queue* q);
void enqueue(Queue* q, int elem);
void dequeue(Queue* q);
int front(Queue q);
int rear(Queue q);
bool isEmpty(Queue q);

#endif


