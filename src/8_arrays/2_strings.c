#include <stdio.h>

void main()
{
    char a[10] = "An array";
    printf(" 1 ----> ");
    for(int i = 0; i < 10; i++) {
        printf("%c ", a[i]);
    }
    printf("\n");

    printf(" 2 ----> %s \n", a);

    a[6] = '\0';
    printf(" 3 ----> %s \n", a);
}