#include <stdio.h>
#include "stdlib.h"
#include "string.h"

typedef struct  student {
    int id;
    char name[100];
    int age;
}student_t;

int main()
{
    //decalre a new struct
    student_t em;
    memset(&em, 0, sizeof(em));   // memory reset does not work??

    printf("Enter studentID: \n");
    scanf("%i", &em.id);
    printf("Enter name: \n");
    getchar();
    fgets(em.name,100,stdin);
    printf("Enter age: \n");
    scanf("%i",&em.age);



    printf("Student id: %i\n", em.id);
    printf("Name: %s", em.name);
    printf("Age: %i\n", em.age);



    return 0;
}