#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int  age;
    float gpa;
} Student;

void main()
{
    Student *obj;
    obj = (Student*) malloc(sizeof(Student));

    obj->age = 20;
    obj->gpa = 7.2;

    printf("Age %d, GPA %lf\n", obj->age, obj->gpa);

    free(obj);
}

