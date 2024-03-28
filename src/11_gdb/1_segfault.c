#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int     age;
    float   gpa;
    double  marks[2];
} Student;

void main()
{
    Student *obj1 = NULL, *obj2 = NULL;
    obj1 = (Student*) malloc(sizeof(Student));

    obj1->age = 20;
    obj1->gpa = 7.2;
    obj1->marks[0] = 70;
    obj1->marks[1] = 90;

    
    printf("Age %d, GPA %lf, mark1 %lf, mark2 %lf\n", obj2->age, obj2->gpa, obj2->marks[0], obj2->marks[1]);
    free(obj1);
    free(obj2);
}

