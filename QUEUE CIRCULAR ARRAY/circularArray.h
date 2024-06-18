#ifndef QUEUE_ARRAY
#define QUEUE_ARRAY
#define MAX 10

typedef struct {
    int data[MAX];
    int front;
    int rear;
}circularQ;

void init(circularQ *c);
bool isEmpty(circularQ q);
bool isFull(circularQ q);
void enqueue(circularQ *c, int elem);
void dequeue(circularQ *c);
int Front(circularQ q);
int Rear(circularQ q);
void display(circularQ q);



#endif
