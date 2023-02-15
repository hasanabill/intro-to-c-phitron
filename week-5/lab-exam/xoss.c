#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N, i, j;
    scanf("%d", &N);

    if (N == 1)
    {
        printf("%d\n", N);
    }
    else
    {
        for (i = 1; i <= N; i++)
        {
            printf("%d", i);
        }
        printf("\n");
        for (i = 2; i <= N - 1; i++)
        {
            printf("%d", i);
            for (j = 1; j <= N - 2; j++)
            {
                printf(" ");
            }
            printf("%d\n", N);
        }
        for (i = 1; i <= N; i++)
        {
            printf("%d", N);
        }
    }
    return 0;
}
