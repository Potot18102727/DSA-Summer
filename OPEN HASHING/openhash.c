#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "openhash.h"
#define MAX 10

void initHashTable(openHash* openH) {
    int i;
    for (i = 0; i < MAX; i++) {
        openH->arr[i] = NULL;
    }
}

int hash(int key) {
    return key % MAX;
}

void insert(openHash* openH, studentInfo student) {
    NodePtr* trav, temp;
    int index = hash(student.key);
    temp = (NodePtr)malloc(sizeof(Node));
    if (temp != NULL) {
        for (trav = &(openH->arr[index]); *trav != NULL && strcmp((*trav)->data.idNum, student.idNum) < 0; trav = &(*trav)->next) {}
        temp->data = student;
        temp->next = *trav;
        *trav = temp;
    }
}

void delete(openHash* openH, char idNum[]) {
    int index;
    NodePtr trav;
    NodePtr prev = NULL;
    for (index = 0; index < MAX; index++) {
        for (trav = openH->arr[index]; trav != NULL && strcmp(trav->data.idNum, idNum) != 0; prev = trav, trav = trav->next) {}
        if (trav != NULL) {
            if (prev == NULL) {
                openH->arr[index] = trav->next;
            } else {
                prev->next = trav->next;
            }
            free(trav);
        }
    }
}

void display(openHash openH) {
    int i;
    NodePtr trav;
    for (i = 0; i < MAX; i++) {
        printf("%d: ", i);
        for (trav = openH.arr[i]; trav != NULL; trav = trav->next) {
            printf("(%s %s, %s, %02d/%04d, %d) -> ", trav->data.name.fName, trav->data.name.lName, trav->data.idNum,trav->data.birthdate.month, trav->data.birthdate.year, trav->data.age);
        }
        printf("NULL\n");
    }
}
