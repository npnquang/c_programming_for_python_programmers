#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void main()
{
    int sum_1 = 0, sum_2 = 0, N = 10;
    
    int *vector_1 = (int *) malloc(N * sizeof(int));

    for (int i = 0; i <= N; i++) {
        vector_1[i] = i;
    }

    for (int i = 0; i <= N; i++) {
        sum_1 += vector_1[i];
    }

    sum_2 = N * (N - 1) / 2;

    assert(sum_1 == sum_2);

    free(vector_1);

}

