#include <stdio.h>

void main()
{
    int x = 10;
    int *ptr = &x;

    printf("ptr      = %u \n", ptr);
    printf("ptr + 1  = %u \n", (ptr + 1));
    printf("ptr - 1  = %u \n", (ptr - 1));
}