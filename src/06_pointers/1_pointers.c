#include <stdio.h>

void main()
{
    int x = 10;
    int *ptr = &x;

    printf("x    = %d \n", x);
    printf("ptr  = %u \n", ptr);
    printf("*ptr = %d \n", *ptr);

    printf("\nsize of an integer pointer  = %d bytes\n", sizeof(ptr));
    int *ptr_c = NULL;
    printf("size of a character pointer = %d bytes\n", sizeof(ptr_c));
}