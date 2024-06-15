#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char name[20];
	int idNum;
	int age;
}info;

typedef struct node {
	info data;
	struct node* next;
}Node, *NodePtr;

void init(NodePtr* node){
	*node=NULL;
}

void display(NodePtr node)
{

	for(;node != NULL; node = node->next){
		printf("NAME=%s ID=%d AGE=%d\n", node->data.name,node->data.idNum, node->data.age);
	}
}

void insertFront(NodePtr* node, info data){
	NodePtr temp;
	
	temp= (NodePtr)malloc(sizeof(Node));
	if(temp!=NULL){
		temp->data=data;
		temp->next=*node;
		*node=temp;
	}
}

void insertLast(NodePtr* node, info data){
	NodePtr temp, *trav;
	for(trav=node; *trav!=NULL; trav=&(*trav)->next){}
	temp=(NodePtr)malloc(sizeof(Node));
	if(temp!=NULL){
		temp->data=data;
		temp->next=*trav;
		*trav=temp;
	}
}

void insertIndex(NodePtr* node, info data, int index){++
	NodePtr temp, *trav;
	int ctr=0;
	
	for(trav=node; ctr<index && *trav!=NULL; trav=&(*trav)->next, ctr++){}
	temp=(NodePtr)malloc(sizeof(Node));
	if(temp!=NULL){
		temp->data=data;
		temp->next=*trav;
		*trav=temp;
	}
	
	
}

void insertSorted(NodePtr* node, info data){
	NodePtr temp, *trav;
	for(trav=node; *trav!=NULL && (*trav)->data.age <= data.age; trav=&(*trav)->next){}
	temp=(NodePtr)malloc(sizeof(Node));
	if(temp!=NULL){
		temp->data=data;
		temp->next=*trav;
		*trav=temp;
	}
}


int main(){
	
	info elem[]= {{"Rix", 18102727, 24},
				{"Jhon", 18100807, 27},
				{"Col", 18102726, 28}, 
				{"Maya", 18102631, 55},
				{"Baloy", 10000001, 69}};
				
	NodePtr node;
	init(&node);
	
	printf("----INSERT FRONT----\n");
	insertFront(&node, elem[0]);
	insertFront(&node, elem[1]);
	display(node);
	
	
	printf("\n----INSERT LAST----\n");
	insertLast(&node, elem[2]);
	display(node);
	
	printf("\n----INSERT INDEX----\n");
	insertIndex(&node, elem[3], 1);
	display(node);
	
	printf("\n----INSERT SORTED----\n");
	insertSorted(&node, elem[4]);
	display(node);
}
