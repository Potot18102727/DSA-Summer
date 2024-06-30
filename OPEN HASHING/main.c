#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "openhash.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    openHash openH;
    initHashTable(&openH);

    studentInfo stud[] = {
        {{"Rix", "Potot"}, {4, 2000}, 24, "18102727", 20},
        {{"Jhon", "Parchaso"}, {8, 1999}, 27, "18100807", 30}, 
        {{"Col", "Panimdim"}, {8, 1999}, 28, "18102726", 5},
        {{"Josh", "Achas"}, {8, 1999}, 20, "18102326", 65},
        {{"Pre", "Tot"}, {8, 1999}, 55, "18102100", 27},
        {{"Lol", "Tot"}, {8, 1999}, 48, "18102233", 18}
    };

    insert(&openH, stud[0]);
    insert(&openH, stud[1]);
    insert(&openH, stud[2]);
    insert(&openH, stud[3]);
    insert(&openH, stud[4]);
    insert(&openH, stud[5]);

    display(openH);

    printf("\n====\n\n");

    delete(&openH, stud[0].idNum);

    display(openH);

    return 0;
}
