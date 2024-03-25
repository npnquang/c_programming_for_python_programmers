
#include <stdio.h>

void main()
{
    int a = 10, b = 20;
    
    if (a > 5) {
        printf("If condition - single statement \n");
    }

    if (a > 5) {
        b = b + 10;
        a = a - 2;
        print("If condition - multple statement \n"); 
    }
}
