#include <stdio.h>

void main()
{
    int first = 0, second = 1, new;

    // fill the printf statement
    printf("%d\n%d\n", first, second);
    // fill the for loop
    for (int i = 0; i < 10; i++)
    {
        new = first + second;
        first = second;
        second = new;
        printf("%d\n", new);
    }
}