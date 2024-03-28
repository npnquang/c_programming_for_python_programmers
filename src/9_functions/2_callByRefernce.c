#include <stdio.h>

int incValue(int *a);

void main()
{
    int a = 10;

    printf("value before increment    : %d\n", a);

    incValue(&a);

    printf("value after increment     : %d\n", a);

}

int incValue(int *a)
{
    *a = *a + 1;

    printf("value inside the function : %d\n", *a);
}