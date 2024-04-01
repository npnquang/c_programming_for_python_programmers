
#include <stdio.h>

void main()
{
    int a = 10, b = 20;

    /** If the condition is true, the first expression is evaluated
     * if not, the second expression is evaluated
    */
    int max = (a > b) ? a : b;

    printf("Maximum value %d \n", max);
}
