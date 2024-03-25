
#include <stdio.h>

void main()
{
    int opt;

    printf("Enter a case option: \n");
    scanf("%d", &opt);

    switch(opt) {
        case 1: printf("Case 1 \n"); 
                break;

        case 2: printf("Case 2 \n"); 
                break;

        case 3: printf("Case 2 \n"); 
                break;

        default: printf("Unknown option \n");

    }
}
