#ifndef Open_Hash
#define Open_Hash
#define MAX 10

typedef struct {
    char fName[20];
    char lName[20];
} studName;

typedef struct {
    int month;
    int year;
} bday;

typedef struct {
    studName name;
    bday birthdate;
    int age;
    char idNum[20];
    int key;
} studentInfo;

typedef struct node {
    studentInfo data;
    struct node* next;
} Node, *NodePtr;

typedef struct {
    NodePtr arr[MAX];
} openHash;

void initHashTable(openHash* openH);
int hash(int key);
void insert(openHash* openH, studentInfo student);
void delete(openHash* openH,  char idNum[]);
void display(openHash openH);

#endif
