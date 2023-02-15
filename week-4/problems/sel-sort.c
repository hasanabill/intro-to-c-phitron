#include <stdio.h>

int main()
{
    int i, j;
    int N = 8;
    int ara[8] = {12, 14, 5, 2, 8, 17, 9, 4};
    int sortedAra[N];

    for (i = 0; i < N; i++)
    {
        printf("%d, ", ara[i]);
    }
    printf("\n");
    int min, mInd;
    for (j = 0; j < N; j++)
    {
        min = ara[0];
        mInd = 0;
        for (i = 0; i < N; i++)
        {
            if (ara[i] < min)
            {
                min = ara[i];
                mInd = i;
            }
        }
        sortedAra[j] = min;
        ara[mInd] = 9999;
    }
    for (i = 0; i < N; i++)
    {
        printf("%d, ", sortedAra[i]);
    }
    printf("\n");

    return 0;
}