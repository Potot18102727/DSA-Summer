#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char fName[20];
	char lName[20];
}studName;

typedef struct{
	int month;
	int year;
}bday;

typedef struct {
	studName name;
	bday birthday;
	int age; 
	int idNum;
}studentInfo;

typedef struct {
	studentInfo studList[20];
	int studCount;
}classRecord;






void init(classRecord* rec){
	rec->studCount=0;

}
void display(classRecord rec)
{
	int i; 
	
	for(i=0; i<rec.studCount; i++){
		printf("ID= %d AGE= %d\n", rec.studList[i].idNum, rec.studList[i].age);
	}

}
/*insert Front */

void insertFront(studentInfo stud, classRecord* rec){
	int i; 
	
	
	for(i=rec->studCount; i>0; i--){
		rec->studList[i]= rec->studList[i-1];
	}
	
	rec->studList[0]=stud;
	++rec->studCount;

}
/*insert rear */
void insertLast(studentInfo stud, classRecord* rec){
	rec->studList[rec->studCount]=stud;
	rec->studCount++;
}


/*insert at index */

void insertIndex(studentInfo stud, classRecord* rec, int index){
	int i;
	for(i=rec->studCount; i> index; i--){
		rec->studList[i]= rec->studList[i-1];
	}
	
	rec->studList[index]=stud;
	++rec->studCount;
}

/*insert sorted by age */


void sortAge(studentInfo stud, classRecord* rec){
	int i; 
	
	for(i=rec->studCount; i>0 && rec->studList[i-1].age > stud.age; i--){
		rec->studList[i]=rec->studList[i-1];
	}
	
	rec->studList[i]=stud;
	++rec->studCount;
}

void deleteFront(classRecord* rec){
	int i;
	
	for(i=rec->studCount; i<0; i++){
		rec->studList[i]=rec->studList[i+1];
	}
	rec->studCount--;
}

void deleteLast(classRecord* rec){
	rec->studCount--;
	
}
void deleteIndex(classRecord* rec, int index){
	int i;
	
	for(i=index; i<rec->studCount-1; i++){
		rec->studList[i]=rec->studList[i+1];
	}
	rec->studCount--;
}

int main(){
	studentInfo stud[]= {{{"Rix", "Potot"} ,{4, 2000}, 24, 18102727},
						{{"Jhon", "Parchaso"},{8, 1999}, 27, 18100807}, 
						{{"Col", "Panimdim"},{8, 1999}, 28, 18102726},
						{{"Josh", "Achas"},{8, 1999}, 20, 18102326},
						{{"Pre", "Tot"},{8, 1999}, 55, 18102100},
						{{"Lol", "Tot"},{8, 1999}, 48, 18102233}
						};
		
	classRecord rec;
	init(&rec);
	display(rec);

	printf("-----INSER FIRST-----\n");
	insertFront(stud[0], &rec);
	insertFront(stud[1], &rec);
//	insertFront(stud[2], &rec);
//	insertFront(stud[3], &rec);
	display(rec);

	printf("-----INSER LAST-----\n");
	insertLast(stud[3], &rec);
	display(rec);
	
	printf("-----INSER INDEX-----\n");
	int inIndex;
	insertIndex(stud[2], &rec, 1);
	display(rec);
	
	printf("-----INSER SORTED-----\n");
	sortAge(stud[4], &rec);
	sortAge(stud[5], &rec);
	display(rec);
	printf("-----DELETE FIRST-----\n");
	deleteFront(&rec);
	display(rec);
	
	printf("-----DELETE LAST-----\n");
	deleteFront(&rec);
	display(rec);
	
	printf("-----DELETE INDEX-----\n");
	deleteIndex(&rec, 2);
	display(rec);
}
