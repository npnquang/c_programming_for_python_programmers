#include <stdio.h>

typedef struct student
{
    int  age;
    float gpa;
} Student;

void main()
{
    Student obj;

    obj.age = 20;
    obj.gpa = 7.2;

    printf("Age %d, GPA %lf\n", obj.age, obj.gpa);
}

