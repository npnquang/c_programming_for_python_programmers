#include <stdio.h>

struct student
{
    int  age;
    float gpa;
};

void main()
{
    struct student obj;

    obj.age   = 20;
    obj.gpa = 7.2;

    printf("Age %d, GPA %lf\n", obj.age, obj.gpa);
}

