#include <stdio.h>

void main()
{
    int x = 10;
    int *ptr = &x;

    printf("x    = %d \n", x);
    printf("ptr  = %u \n", ptr);
    printf("*ptr = %d \n", *ptr);
}