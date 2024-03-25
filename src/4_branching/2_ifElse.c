
#include <stdio.h>

void main()
{
    int a = 10, b = 20;

    if (a > 5) {
        b = b + 10;
        a = a - 2;
        print("If condition - multple statement \n"); 
    }
    else if ( (a <= 5) && (a < 100) ) {
        b = b - 10;
        a = a + 2;
        printf("ElseIf condition - multple statement");
    }
    else {
        print("Else condition");
    }
}
