#include <stdio.h>
#include <stdlib.h>
#include "LinearProbing.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    closedHash table;
    initHash(&table);

    studentInfo stud[]= {{{"Rix", "Potot"} ,{4, 2000}, 24, 18102727},
						{{"Jhon", "Parchaso"},{8, 1999}, 27, 18100807}, 
						{{"Col", "Panimdim"},{8, 1999}, 28, 18102726},
						{{"Josh", "Achas"},{8, 1999}, 20, 18102326},
						{{"Pre", "Tot"},{8, 1999}, 55, 18102100},
						{{"Lol", "Tot"},{8, 1999}, 48, 18102233}
						};

    insert(&table, stud[0]);
    insert(&table, stud[1]);
    insert(&table, stud[2]);
    insert(&table, stud[3]);
    insert(&table, stud[4]);
    insert(&table, stud[5]);

    display(table);
    
    printf("\n====\n\n");
    
    delete(&table, 18102727);

    display(table);

    return 0;
}
