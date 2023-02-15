#include <stdio.h>

int main()
{
    int i, j, N = 8, temp;
    int ara[8] = {12, 14, 5, 2, 8, 17, 9, 4};
    int sortedAra[N];

    for (i = 0; i < N; i++)
    {
        printf("%d, ", ara[i]);
    }
    printf("\n");

    for (j = 0; j < N; j++)
    {
        for (i = 0; i < N - 1; i++)
        {
            // compate ara[i] and ara[i + 1]
            if (ara[i] > ara[i + 1])
            {
                temp = ara[i];
                ara[i] = ara[i + 1];
                ara[i + 1] = temp;
            }
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("%d, ", ara[i]);
    }
    printf("\n");

    return 0;
}