#include <stdio.h>

void main()
{
    char str1[10] = "An array";
    printf(" 1 ----> ");
    for(int i = 0; i < 10; i++) {
        printf("%c ", str1[i]);
    }
    printf("\n");

    printf(" 2 ----> %s \n", str1);

    str1[6] = '\0';
    printf(" 3 ----> %s \n", str1);

    char *str2 = "Another array";

    printf(" 4 ----> ");
    for(int i = 0; '\0' != str2[i]; i++) {
        printf("%c ", str2[i]);
    }
    printf("\n");

    printf(" 5 ----> ");
    for(int i = 0; '\0' != *(str2+i); i++) {
        printf("%c ", *(str2+i));
    }
    printf("\n");

    printf(" 6 ----> %s \n", str2);

    /**
     * A string constant is a constant array and the memory of the array is read-only. 
     * The result of attempting to change the value of an element of a string constant is undefined.
    */
    //*(str2 + 4) = 'X';
    //printf(" 6 ----> %s \n", str2);
    
}