#include <stdio.h>

void main()
{
    int a[10];

    printf(" 1 ----> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n ");

    int b[10] = {0, 1, 2, 3, 4, 5, 6, 8, 8, 9};

    printf("2 ----> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n ");
    
    int c[10];
    for(int i = 0; i < 10; i++) {
        c[i] = 0;
    }

    printf("3 ----> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }
    printf("\n ");
}